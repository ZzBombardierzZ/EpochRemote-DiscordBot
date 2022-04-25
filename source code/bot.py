import hikari
from hikari.api import ActionRowBuilder
import typing as t
import lightbulb
from lightbulb.ext import tasks
import json
import os
import subprocess
import time

import logging
if not os.path.exists("logs"):
    os.mkdir("logs")
logFilePath = "logs/startedAt"+time.strftime("%Y-%m-%d")+".log"
logging.basicConfig(filename=logFilePath, format='%(asctime)s - %(levelname)s - %(name)s - %(message)s', datefmt='%m/%d/%Y %I:%M:%S %p', encoding='utf-8', level=logging.INFO)
logging.getLogger("lightbulb").setLevel(logging.INFO)

def print_log(message) -> None:
    """Prints and logs a message."""

    # Print the message to the console.
    print(message)

    # Log the message to the log file.
    logging.info("Print: "+str(message))

AllowBotStart = True

if not os.path.exists("config.json"):
    print_log("config.json not found. Creating one for you. Please edit it accordingly.")
    config_dict = {
        "token": "PUT_YOUR_DISCORD_BOT_TOKEN_HERE",
        "Discord_Server_IDs": [123456789012345678],
        "Discord_Remote_Control_User_IDs": [123456789012345678],
        "SQL_Backups": True,
        "SQL_Backup_Script_Location": "batch_files/backup_sql.bat",
        "Automatic_SQL_Backup_Minutes": 30,
        "SQL_Restore_Command": True,
        "Restore_SQL_Script_Location": "batch_files/restore_sql.bat",
        "SQL_Backups_Location": "SQL_Backups",
        "Remote_Stop_Start_Restart": True,
        "Start_Server_Script_Location": "batch_files/start.bat",
        "Stop_Server_Script_Location": "batch_files/stop.bat",
        "Restart_Server_Script_Location": "batch_files/restart.bat",
        "Use_Custom_Commands": False,
        "Custom_Commands": {
            "discordcommandname": {
                "location":"batch file location.bat",
                "description":"description of the command",
                "response":"success! response to the command"
            },
            "thismustbelowercase": {
                "location":"batch file location2.bat",
                "description":"description of the command2",
                "response":"success! response to the command2"
            }
        }
    }
    with open("config.json", "w") as config_file:
        json.dump(config_dict, config_file, indent=4)
    AllowBotStart = False
else:
    with open("config.json", "r") as config_file:
        config_dict = json.load(config_file)

    expected_dict_keys = ["token","Discord_Server_IDs","Discord_Remote_Control_User_IDs","SQL_Backups","SQL_Backup_Script_Location","Automatic_SQL_Backup_Minutes","SQL_Backups_Location","SQL_Restore_Command","Restore_SQL_Script_Location","Remote_Stop_Start_Restart","Start_Server_Script_Location","Stop_Server_Script_Location","Restart_Server_Script_Location"]
    for key in expected_dict_keys:
        if key not in config_dict:
            print_log("config.json is missing "+key+". Please edit it accordingly.")
            AllowBotStart = False
    
    if AllowBotStart: #Has all of the right key pairs
        if config_dict["token"] == "PUT_YOUR_DISCORD_BOT_TOKEN_HERE" or len(config_dict["token"]) < 50:
            print_log("config.json is invalid on token. Please edit it accordingly.")
            AllowBotStart = False
        if type(config_dict["Discord_Server_IDs"]) is not list or len(config_dict["Discord_Server_IDs"]) == 0:
            print_log("config.json is invalid on Discord_Server_IDs. Please edit it accordingly.")
            AllowBotStart = False
        if type(config_dict["Discord_Remote_Control_User_IDs"]) is not list or len(config_dict["Discord_Remote_Control_User_IDs"]) == 0:
            print_log("config.json is invalid on Discord_Remote_Control_User_IDs. Please edit it accordingly.")
            AllowBotStart = False
        if type(config_dict["SQL_Backups"]) is not bool:
            print_log("config.json is invalid on SQL_Backups. Please edit it accordingly.")
            AllowBotStart = False
        if config_dict["SQL_Backups"] and (type(config_dict["SQL_Backup_Script_Location"]) is not str or len(config_dict["SQL_Backup_Script_Location"]) == 0 or not os.path.exists(config_dict["SQL_Backup_Script_Location"])):
            print_log("config.json is invalid on SQL_Backup_Script_Location. Please edit it accordingly.")
            AllowBotStart = False
        if type(config_dict["Automatic_SQL_Backup_Minutes"]) is not int:
            print_log("config.json is invalid on Automatic_SQL_Backup_Minutes. Please edit it accordingly.")
            AllowBotStart = False
        if type(config_dict["SQL_Restore_Command"]) is not bool:
            print_log("config.json is invalid on SQL_Restore_Command. Please edit it accordingly.")
            AllowBotStart = False
        if config_dict["SQL_Restore_Command"] and (type(config_dict["Restore_SQL_Script_Location"]) is not str or len(config_dict["Restore_SQL_Script_Location"]) == 0 or not os.path.exists(config_dict["Restore_SQL_Script_Location"])):
            print_log("config.json is invalid on Restore_SQL_Script_Location. Please edit it accordingly.")
            AllowBotStart = False
        if type(config_dict["Remote_Stop_Start_Restart"]) is not bool:
            print_log("config.json is invalid on Remote_Stop_Start_Restart. Please edit it accordingly.")
            AllowBotStart = False
        if config_dict["Remote_Stop_Start_Restart"] == True and type(config_dict["Start_Server_Script_Location"]) is not str:
            print_log("config.json is invalid on Start_Server_Script_Location. Please edit it accordingly.")
            AllowBotStart = False
        if config_dict["Remote_Stop_Start_Restart"] == True and type(config_dict["Stop_Server_Script_Location"]) is not str:
            print_log("config.json is invalid on Stop_Server_Script_Location. Please edit it accordingly.")
            AllowBotStart = False
        if config_dict["Remote_Stop_Start_Restart"] == True and type(config_dict["Restart_Server_Script_Location"]) is not str:
            print_log("config.json is invalid on Restart_Server_Script_Location. Please edit it accordingly.")
            AllowBotStart = False
    


if AllowBotStart: #Everything appears to be good to go
    bot = lightbulb.BotApp(prefix=None, token=config_dict["token"], default_enabled_guilds=config_dict["Discord_Server_IDs"], help_slash_command=True)

    def generate_restore_buttons(bot: lightbulb.BotApp) -> t.Iterable[ActionRowBuilder]:
        rows: t.List[ActionRowBuilder] = []
        row = bot.rest.build_action_row()
        (row.add_button(hikari.ButtonStyle.SECONDARY,"back").set_emoji("◀️").add_to_container())
        (row.add_button(hikari.ButtonStyle.SECONDARY,"up").set_emoji("🔼").add_to_container())
        (row.add_button(hikari.ButtonStyle.PRIMARY,"select").set_emoji("✅").set_label("Select Restore").add_to_container())
        (row.add_button(hikari.ButtonStyle.SECONDARY,"down").set_emoji("🔽").add_to_container())
        (row.add_button(hikari.ButtonStyle.SECONDARY,"forward").set_emoji("▶️").add_to_container())

        rows.append(row)
        return rows

    async def handle_restore_menu(
        bot: lightbulb.BotApp,
        author: hikari.User,
        message: hikari.Message,
        nested_file_list: list,
    ) -> None:
        """Watches for events, and handles responding to them."""

        print("Restore Menu")

        page = 0
        file_list = nested_file_list[page]
        selected_file_index = -1
        selected_file = "123"
        with bot.stream(hikari.InteractionCreateEvent, 120).filter(
            # Here we filter out events we don't care about.
            lambda e: (isinstance(e.interaction, hikari.ComponentInteraction) and e.interaction.user == author and e.interaction.message == message)
        ) as stream:
            async for event in stream:
                print("action received")
                the_message = ""
                cid = event.interaction.custom_id

                if cid == "forward" or cid == "back":
                    selected_file_index = -1
                    selected_file = "123"
                    if cid == "forward":
                        if page < (len(nested_file_list) - 1):
                            page+=1
                        else:
                            page = 0
                    else:
                        if page > 0:
                            page-=1
                        else:
                            page = (len(nested_file_list)-1)
                
                file_list = nested_file_list[page]
                
                
                if cid == "down" or cid == "up":
                    if cid == "down":
                        if selected_file_index < (len(file_list) - 1):
                            selected_file_index+=1
                        else:
                            selected_file_index = 0
                    else:
                        if selected_file_index > 0:
                            selected_file_index-=1
                        else:
                            selected_file_index = (len(file_list)-1)
                    selected_file = file_list[selected_file_index]
                    
                
                if cid != "select":
                    for file in file_list:
                        if selected_file == file:
                            the_message += "**[| "+str(file)+" | SELECTED]**\n"
                        else: 
                            the_message += "| "+str(file)+" |\n"
                    embed = hikari.Embed(
                        title="Your SQL Backups (Page "+str(page+1)+"/"+str(len(nested_file_list))+")",
                        description=the_message,
                    )
                    try:
                        await event.interaction.create_initial_response(
                            hikari.ResponseType.MESSAGE_UPDATE,
                            embed=embed,
                            flags=hikari.MessageFlag.EPHEMERAL
                        )
                    except hikari.NotFoundError:
                        await event.interaction.edit_initial_response(
                            embed=embed,
                            flags=hikari.MessageFlag.EPHEMERAL
                        )

                else:
                    if selected_file_index == -1 or selected_file == "123":
                        the_message = "YOU HAVEN'T SELECTED A FILE!\n----------------------------------------------\n"
                        for file in file_list:
                            the_message += "| "+str(file)+" |\n"
                        embed = hikari.Embed(
                            title="Your SQL Backups",
                            description=the_message,
                        )
                        try:
                            await event.interaction.create_initial_response(
                                hikari.ResponseType.MESSAGE_UPDATE,
                                embed=embed,
                                flags=hikari.MessageFlag.EPHEMERAL
                            )
                        except hikari.NotFoundError:
                            await event.interaction.edit_initial_response(
                                embed=embed,
                                flags=hikari.MessageFlag.EPHEMERAL
                            )
                    else:
                        the_message = "----------------------------------------------\nRestoring from SQL File: "+selected_file+" \n----------------------------------------------\n"

                        embed = hikari.Embed(
                            title="Restoring SQL Backup!",
                            description=the_message,
                        )

                        try:
                            await event.interaction.create_initial_response(
                                hikari.ResponseType.MESSAGE_UPDATE,
                                embed=embed,
                                components=[],
                                flags=hikari.MessageFlag.EPHEMERAL
                            )
                        except:
                            await event.interaction.edit_initial_response(
                                embed=embed,
                                components=[],
                                flags=hikari.MessageFlag.EPHEMERAL
                            )
                        
                        #Restore SQL File Here
                        if str(config_dict["SQL_Backups_Location"]).endswith("/"):
                            selected_file_path = str(config_dict["SQL_Backups_Location"])+str(selected_file)
                        else:
                            selected_file_path = config_dict["SQL_Backups_Location"]+"/"+selected_file
                        
                        if not os.path.exists(selected_file_path):
                            print_log("SQL Backup File Does Not Exist: "+selected_file_path)
                            return
                    
                        print_log("Restoring SQL File: "+selected_file_path)
                        #stop server
                        subprocess.Popen(config_dict["Stop_Server_Script_Location"], shell=True, creationflags=subprocess.CREATE_NEW_CONSOLE)
                        time.sleep(5)
                        #restore
                        subprocess.Popen(config_dict["Restore_SQL_Script_Location"]+" "+selected_file_path, shell=True, creationflags=subprocess.CREATE_NEW_CONSOLE)
                        time.sleep(5)
                        #start server
                        subprocess.Popen(config_dict["Start_Server_Script_Location"], shell=True, creationflags=subprocess.CREATE_NEW_CONSOLE)

                        # embed = hikari.Embed(
                        #     title="Finished!",
                        #     description="Server should be back online now!",
                        # )

                        # try:
                        #     await event.interaction.create_initial_response(
                        #         hikari.ResponseType.MESSAGE_UPDATE,
                        #         embed=embed,
                        #         components=[],
                        #         flags=hikari.MessageFlag.EPHEMERAL
                        #     )
                        # except:
                        #     await event.interaction.edit_initial_response(
                        #         embed=embed,
                        #         components=[],
                        #         flags=hikari.MessageFlag.EPHEMERAL
                        #     )
                        




        print_log("Ending restore menu from "+str(author))

    async def send_not_authorized_message(ctx):
        response = await ctx.respond(
            hikari.Embed(
                title="Not allowed",
                description="You do not have permission to use this command."
                ),
            flags=hikari.MessageFlag.EPHEMERAL
        )

    #ERROR HANDLER
    @bot.listen(lightbulb.CommandErrorEvent)
    async def on_error(event: lightbulb.CommandErrorEvent) -> None:
        if isinstance(event.exception, lightbulb.CommandInvocationError):
            await event.context.respond(f"ERROR: Something went wrong during invocation of command `{event.context.command.name}`.",flags=hikari.MessageFlag.EPHEMERAL)
            raise event.exception

        # Unwrap the exception to get the original cause
        exception = event.exception.__cause__ or event.exception
        print_log(str(event.context.author)+" -- "+str(exception))
        #await event.context.app.rest.create_message(955310089756102686,content=(str(event.context.author)+" -- "+str(exception)))

        if isinstance(exception, lightbulb.NotOwner):
            await event.context.respond("ERROR: You are not the owner of this bot.",flags=hikari.MessageFlag.EPHEMERAL)
        elif isinstance(exception, lightbulb.CommandIsOnCooldown):
            await event.context.respond(f"ERROR: This command is on cooldown. Retry in `{exception.retry_after:.2f}` seconds.",flags=hikari.MessageFlag.EPHEMERAL)
        elif isinstance(exception, lightbulb.MissingRequiredPermission):
            await event.context.respond(f"ERROR: You are missing permissions to use the `{event.context.command.name}` command.",flags=hikari.MessageFlag.EPHEMERAL)
        else:
            #raise exception
            await event.context.respond("There was an error! If you believe this is a mistake, please inform ZzBombardierzZ#5945",flags=hikari.MessageFlag.EPHEMERAL)
            print_log("Told "+str(event.context.author)+" to tell Bomb if the error was a mistake...")

    if config_dict["Remote_Stop_Start_Restart"] == True:
        if len(config_dict["Start_Server_Script_Location"]) > 0 and os.path.exists(config_dict["Start_Server_Script_Location"]):
            @bot.command()
            @lightbulb.command("start", "Start the server", guilds=config_dict["Discord_Server_IDs"]) #, auto_defer=True
            @lightbulb.implements(lightbulb.SlashCommand)
            async def start_command(ctx: lightbulb.Context) -> None:
                if ctx.author.id in config_dict["Discord_Remote_Control_User_IDs"]:
                    subprocess.Popen(config_dict["Start_Server_Script_Location"], shell=True, creationflags=subprocess.CREATE_NEW_CONSOLE)
                    print_log(str(ctx.author)+" started the server.")
                    response = await ctx.respond(
                        hikari.Embed(
                            title="Starting Server",
                            description="Your server should be starting now."
                            ),
                        flags=hikari.MessageFlag.EPHEMERAL
                    )
                else:
                    print_log(str(ctx.author)+" tried to start the server. They are not in the allowed IDs.")
                    send_not_authorized_message(ctx)

        if len(config_dict["Stop_Server_Script_Location"]) > 0 and os.path.exists(config_dict["Stop_Server_Script_Location"]):
            @bot.command()
            @lightbulb.command("stop", "Stop the server", guilds=config_dict["Discord_Server_IDs"]) #, auto_defer=True
            @lightbulb.implements(lightbulb.SlashCommand)
            async def stop_command(ctx: lightbulb.Context) -> None:
                if ctx.author.id in config_dict["Discord_Remote_Control_User_IDs"]:
                    subprocess.Popen(config_dict["Stop_Server_Script_Location"], shell=True, creationflags=subprocess.CREATE_NEW_CONSOLE)
                    print_log(str(ctx.author)+" stopped the server.")
                    response = await ctx.respond(
                        hikari.Embed(
                            title="Stopping Server",
                            description="Your server should be shutting down now."
                            ),
                        flags=hikari.MessageFlag.EPHEMERAL
                    )
                else:
                    print_log(str(ctx.author)+" tried to stop the server. They are not in the allowed IDs.")
                    send_not_authorized_message(ctx)

        if len(config_dict["Restart_Server_Script_Location"]) > 0 and os.path.exists(config_dict["Restart_Server_Script_Location"]):
            @bot.command()
            @lightbulb.command("restart", "Restart the server", guilds=config_dict["Discord_Server_IDs"]) #, auto_defer=True
            @lightbulb.implements(lightbulb.SlashCommand)
            async def restart_command(ctx: lightbulb.Context) -> None:
                if ctx.author.id in config_dict["Discord_Remote_Control_User_IDs"]:
                    subprocess.Popen(config_dict["Restart_Server_Script_Location"], shell=True, creationflags=subprocess.CREATE_NEW_CONSOLE)
                    print_log(str(ctx.author)+" restarted the server.")
                    response = await ctx.respond(
                        hikari.Embed(
                            title="restarting Server",
                            description="Your server should be restarting now."
                            ),
                        flags=hikari.MessageFlag.EPHEMERAL
                    )
                else:
                    print_log(str(ctx.author)+" tried to restart the server. They are not in the allowed IDs.")
                    send_not_authorized_message(ctx)

    if len(config_dict["SQL_Backup_Script_Location"]) > 0 and os.path.exists(config_dict["SQL_Backup_Script_Location"]):
        @bot.command()
        @lightbulb.command("backup", "Manually backup the database", guilds=config_dict["Discord_Server_IDs"]) #, auto_defer=True
        @lightbulb.implements(lightbulb.SlashCommand)
        async def backup_command(ctx: lightbulb.Context) -> None:
            if ctx.author.id in config_dict["Discord_Remote_Control_User_IDs"]:
                subprocess.Popen(config_dict["SQL_Backup_Script_Location"], shell=True, creationflags=subprocess.CREATE_NEW_CONSOLE)
                print_log(str(ctx.author)+" backed up the database.")
                response = await ctx.respond(
                    hikari.Embed(
                        title="Manually backing up database",
                        description="The database should be backed up now."
                        ),
                    flags=hikari.MessageFlag.EPHEMERAL
                )
            else:
                print_log(str(ctx.author)+" tried to backup the server. They are not in the allowed IDs.")
                send_not_authorized_message(ctx)

    if config_dict["SQL_Restore_Command"] is True:
        if config_dict["Remote_Stop_Start_Restart"] == True and len(config_dict["Start_Server_Script_Location"]) > 0 and os.path.exists(config_dict["Start_Server_Script_Location"]) and len(config_dict["Stop_Server_Script_Location"]) > 0 and os.path.exists(config_dict["Stop_Server_Script_Location"]):
            @bot.command()
            @lightbulb.command("restore", "Restore the server from a backup", guilds=config_dict["Discord_Server_IDs"]) #, auto_defer=True
            @lightbulb.implements(lightbulb.SlashCommand)
            async def restore_command(ctx: lightbulb.Context) -> None:
                if ctx.author.id in config_dict["Discord_Remote_Control_User_IDs"]:
                    sql_dir = os.listdir(config_dict["SQL_Backups_Location"])
                    for file in sql_dir:
                        if not file.endswith(".sql"):
                            sql_dir.remove(file)

                    counter = 0
                    nested_dir_list = []
                    for file in reversed(sql_dir):
                        if counter == 0:
                            nested_dir_list.append([file])
                            counter += 1
                        elif counter == 20:
                            nested_dir_list.append([file])
                            counter = 1
                        else:
                            nested_dir_list[-1].append(file)
                            counter += 1


                    if len(sql_dir) > 0:
                        rows = []
                        rows = generate_restore_buttons(ctx.bot)
                        the_message = ""
                        page1 = nested_dir_list[0]
                        for file in page1:
                            if len(the_message) + len("| "+str(file)+" |\n") < 4096:
                                the_message += "| "+str(file)+" |\n"
                            else:
                                break
                        embed = hikari.Embed(
                            title="Your SQL Backups (Page 1 of "+str(len(nested_dir_list))+")",
                            description=the_message,
                        )
                        response = await ctx.respond(
                            embed,
                            flags=hikari.MessageFlag.EPHEMERAL,
                            components=rows,
                        )
                        message = await response.message()
                        #print(nested_dir_list)
                        await handle_restore_menu(ctx.bot, ctx.author, message, nested_dir_list)

        else:
            print_log("ERROR: You must have a start and stop script to use the restore command.")

    if config_dict["Use_Custom_Commands"] == True:
        if len(config_dict["Custom_Commands"]) > 0:
            for command in config_dict["Custom_Commands"]:
                if len(config_dict["Custom_Commands"][command]["description"]) > 0 and len(config_dict["Custom_Commands"][command]["response"]) > 0:
                    @bot.command()
                    @lightbulb.command(name=command, description=config_dict["Custom_Commands"][command]["description"], guilds=config_dict["Discord_Server_IDs"]) #, auto_defer=True
                    @lightbulb.implements(lightbulb.SlashCommand)
                    async def custom_command(ctx: lightbulb.Context) -> None:
                        if ctx.author.id in config_dict["Discord_Remote_Control_User_IDs"]:
                            print_log(str(ctx.author)+" used a custom command: "+command)
                            response = await ctx.respond(
                                hikari.Embed(
                                    title=command,
                                    description=config_dict["Custom_Commands"][command]["response"]
                                    ),
                                flags=hikari.MessageFlag.EPHEMERAL
                            )
                        else:
                            print_log(str(ctx.author)+" tried to use a custom command: "+command+". They are not in the allowed IDs.")
                            send_not_authorized_message(ctx)
                else:
                    print_log("ERROR: You must have a description and response for your "+command+" command.")

    #TASKS
    if config_dict["Automatic_SQL_Backup_Minutes"] > 0 and config_dict["SQL_Backups"]:
            if len(config_dict["SQL_Backup_Script_Location"]) > 0:
                if os.path.exists(config_dict["SQL_Backup_Script_Location"]):
                    @tasks.task(m=config_dict["Automatic_SQL_Backup_Minutes"])
                    async def AutomaticBackupSQL():
                        print_log("Backing up SQL...")
                        subprocess.Popen(config_dict["SQL_Backup_Script_Location"], shell=True, creationflags=subprocess.CREATE_NEW_CONSOLE)
                else:
                    print_log("SQL_Backup_Script_Location is not set in config.json. Please set it accordingly.")
            else:
                print_log("SQL_Backup_Script_Location is not set in config.json. Please set it accordingly.")

    @tasks.task(h=1)
    async def updateLoggingFile():
        logFilePath = "logs/startedAt"+time.strftime("%Y-%m-%d")+".log"
        logging.basicConfig(filename=logFilePath, format='%(asctime)s - %(levelname)s - %(name)s - %(message)s', datefmt='%m/%d/%Y %I:%M:%S %p', encoding='utf-8', level=logging.INFO)
        logging.getLogger("lightbulb").setLevel(logging.INFO)

    tasks.load(bot)
    bot.run()