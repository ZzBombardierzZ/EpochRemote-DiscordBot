import hikari
import lightbulb
from lightbulb.ext import tasks
import json
import os
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

if not os.path.isfile("config.json"):
    print_log("config.json not found. Creating one for you. Please edit it accordingly.")
    config_dict = {
        "token": "PUT_YOUR_DISCORD_BOT_TOKEN_HERE",
        "Discord_Server_IDs": [123456789012345678],
        "Discord_Remote_Control_User_IDs": [123456789012345678],
        "SQL_Backups": True,
        "Basic_SQL_Backup_Script_Location": "directory/backup_sql.bat",
        "Automatic_SQL_Backup_Minutes": 30,
        "Advanced_SQL_Backups": True,
        "Advanced_SQL_IP": "127.0.0.1",
        "Advanced_SQL_Port": "3306",
        "Advanced_SQL_Username": "root",
        "Advanced_SQL_Password": "",
        "Advanced_SQL_Database": "dayz_epoch",
        "Advanced_SQL_Backups_Location": "SQL_Backups",
        "Advanced_SQL_Backups_Max_Amount": 48,
        "Advanced_SQL_Restore_Command": True,
        "Remote_Stop_Start_Restart": True,
        "Start_Server_Script_Location": "directory/start.bat",
        "Stop_Server_Script_Location": "directory/stop.bat",
        "Restart_Server_Script_Location": "directory/restart.bat",
    }
    with open("config.json", "w") as config_file:
        json.dump(config_dict, config_file)
    AllowBotStart = False
else:
    with open("config.json", "r") as config_file:
        config_dict = json.load(config_file)

    expected_dict_keys = ["token","Discord_Server_IDs","Discord_Remote_Control_User_IDs","SQL_Backups","Basic_SQL_Backup_Script_Location","Automatic_SQL_Backup_Minutes","Advanced_SQL_Backups","Advanced_SQL_IP","Advanced_SQL_Port","Advanced_SQL_Username","Advanced_SQL_Password","Advanced_SQL_Database","Advanced_SQL_Backups_Location","Advanced_SQL_Backups_Max_Amount","Advanced_SQL_Restore_Command","Remote_Stop_Start_Restart","Start_Server_Script_Location","Stop_Server_Script_Location","Restart_Server_Script_Location"]
    for key in expected_dict_keys:
        if key not in config_dict:
            print_log("config.json is missing "+key+". Please edit it accordingly.")
            AllowBotStart = False
    
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
    if config_dict["SQL_Backups"] and (type(config_dict["Basic_SQL_Backup_Script_Location"]) is not str or len(config_dict["Basic_SQL_Backup_Script_Location"]) == 0 or not os.path.isfile(config_dict["Basic_SQL_Backup_Script_Location"])):
        print_log("config.json is invalid on Basic_SQL_Backup_Script_Location. Please edit it accordingly.")
        AllowBotStart = False
    if type(config_dict["Automatic_SQL_Backup_Minutes"]) is not int:
        print_log("config.json is invalid on Automatic_SQL_Backup_Minutes. Please edit it accordingly.")
        AllowBotStart = False
    if type(config_dict["Advanced_SQL_Backups"]) is not bool:
        print_log("config.json is invalid on Advanced_SQL_Backups. Please edit it accordingly.")
        AllowBotStart = False
    if config_dict["Advanced_SQL_Backups"] == True and (type(config_dict["Advanced_SQL_IP"]) is not str or len(config_dict["Advanced_SQL_IP"]) == 0):
        print_log("config.json is invalid on Advanced_SQL_IP. Please edit it accordingly.")
        AllowBotStart = False
    if config_dict["Advanced_SQL_Backups"] == True and (type(config_dict["Advanced_SQL_Port"]) is not str or len(config_dict["Advanced_SQL_Port"]) == 0):
        print_log("config.json is invalid on Advanced_SQL_Port. Please edit it accordingly.")
        AllowBotStart = False
    if config_dict["Advanced_SQL_Backups"] == True and (type(config_dict["Advanced_SQL_Username"]) is not str or len(config_dict["Advanced_SQL_Username"]) == 0):
        print_log("config.json is invalid on Advanced_SQL_Username. Please edit it accordingly.")
        AllowBotStart = False
    if config_dict["Advanced_SQL_Backups"] == True and (type(config_dict["Advanced_SQL_Password"]) is not str or len(config_dict["Advanced_SQL_Password"]) == 0):
        print_log("config.json is invalid on Advanced_SQL_Password. Please edit it accordingly.")
        AllowBotStart = False
    if config_dict["Advanced_SQL_Backups"] == True and (type(config_dict["Advanced_SQL_Database"]) is not str or len(config_dict["Advanced_SQL_Database"]) == 0):
        print_log("config.json is invalid on Advanced_SQL_Database. Please edit it accordingly.")
        AllowBotStart = False
    if config_dict["Advanced_SQL_Backups"] == True and (type(config_dict["Advanced_SQL_Backups_Location"]) is not str or len(config_dict["Advanced_SQL_Backups_Location"]) == 0):
        print_log("config.json is invalid on Advanced_SQL_Backups_Location. Please edit it accordingly.")
        AllowBotStart = False
    if config_dict["Advanced_SQL_Backups"] == True and type(config_dict["Advanced_SQL_Restore_Command"]) is not bool:
        print_log("config.json is invalid on Advanced_SQL_Restore_Command. Please edit it accordingly.")
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
    


if AllowBotStart:
    bot = lightbulb.BotApp(prefix=None, token=config_dict["token"], default_enabled_guilds=config_dict["Discord_Server_IDs"], help_slash_command=True)

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
        if len(config_dict["Start_Server_Script_Location"]) > 0 and os.path.isfile(config_dict["Start_Server_Script_Location"]):
            @bot.command()
            @lightbulb.command("start", "Start the server", guilds=config_dict["Discord_Server_IDs"]) #, auto_defer=True
            @lightbulb.implements(lightbulb.SlashCommand)
            async def start_command(ctx: lightbulb.Context) -> None:
                if ctx.author.id in config_dict["Discord_Remote_Control_User_IDs"]:
                    os.system(config_dict["Start_Server_Script_Location"])
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
                    response = await ctx.respond(
                        hikari.Embed(
                            title="Not allowed",
                            description="You do not have permission to use this command."
                            ),
                        flags=hikari.MessageFlag.EPHEMERAL
                    )

        if len(config_dict["Stop_Server_Script_Location"]) > 0 and os.path.isfile(config_dict["Stop_Server_Script_Location"]):
            @bot.command()
            @lightbulb.command("stop", "Stop the server", guilds=config_dict["Discord_Server_IDs"]) #, auto_defer=True
            @lightbulb.implements(lightbulb.SlashCommand)
            async def stop_command(ctx: lightbulb.Context) -> None:
                if ctx.author.id in config_dict["Discord_Remote_Control_User_IDs"]:
                    os.system(config_dict["Stop_Server_Script_Location"])
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
                    response = await ctx.respond(
                        hikari.Embed(
                            title="Not allowed",
                            description="You do not have permission to use this command."
                            ),
                        flags=hikari.MessageFlag.EPHEMERAL
                    )

        if len(config_dict["Restart_Server_Script_Location"]) > 0 and os.path.isfile(config_dict["Restart_Server_Script_Location"]):
            @bot.command()
            @lightbulb.command("restart", "Restart the server", guilds=config_dict["Discord_Server_IDs"]) #, auto_defer=True
            @lightbulb.implements(lightbulb.SlashCommand)
            async def restart_command(ctx: lightbulb.Context) -> None:
                if ctx.author.id in config_dict["Discord_Remote_Control_User_IDs"]:
                    os.system(config_dict["Restart_Server_Script_Location"])
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
                    response = await ctx.respond(
                        hikari.Embed(
                            title="Not allowed",
                            description="You do not have permission to use this command."
                            ),
                        flags=hikari.MessageFlag.EPHEMERAL
                    )


    if config_dict["Advanced_SQL_Backups"] == True and config_dict["Advanced_SQL_Restore_Command"] is True:
        if config_dict["Remote_Stop_Start_Restart"] == True and len(config_dict["Start_Server_Script_Location"]) > 0 and os.path.isfile(config_dict["Start_Server_Script_Location"])and len(config_dict["Stop_Server_Script_Location"]) > 0 and os.path.isfile(config_dict["Stop_Server_Script_Location"]):
            @bot.command()
            @lightbulb.command("restore", "Restore the server from a backup", guilds=config_dict["Discord_Server_IDs"]) #, auto_defer=True
            @lightbulb.implements(lightbulb.SlashCommand)
            async def restore_command(ctx: lightbulb.Context) -> None:
                pass
        else:
            print_log("ERROR: You must have a start and stop script to use the restore command.")





    #TASKS
    if config_dict["Automatic_SQL_Backup_Minutes"] > 0:
        if config_dict["Advanced_SQL_Backups"] == True:
            if len(config_dict["Advanced_SQL_Backup_Location"]) > 0:
                if not os.path.isdir(config_dict["Advanced_SQL_Backup_Location"]):
                    print_log("Creating specified directory for backups...")
                    os.mkdir(config_dict["Advanced_SQL_Backup_Location"])
                @tasks.task(m=config_dict["Automatic_SQL_Backup_Minutes"])
                async def AdvancedAutomaticBackupSQL():
                    print_log("Backing up SQL...")
                    pass
            else:
                print_log("Advanced_SQL_Backup_Location is not set in config.json. Please set it accordingly.")
        else:
            if len(config_dict["Basic_SQL_Backup_Script_Location"]) > 0:
                if os.path.isfile(config_dict["Basic_SQL_Backup_Script_Location"]):
                    @tasks.task(m=config_dict["Automatic_SQL_Backup_Minutes"])
                    async def AutomaticBackupSQL():
                        print_log("Backing up SQL...")
                        os.system(config_dict["Basic_SQL_Backup_Script_Location"])
                else:
                    print_log("Basic_SQL_Backup_Script_Location is not set in config.json. Please set it accordingly.")
            else:
                print_log("Basic_SQL_Backup_Script_Location is not set in config.json. Please set it accordingly.")

    @tasks.task(h=1)
    async def updateLoggingFile():
        logFilePath = "logs/startedAt"+time.strftime("%Y-%m-%d")+".log"
        logging.basicConfig(filename=logFilePath, format='%(asctime)s - %(levelname)s - %(name)s - %(message)s', datefmt='%m/%d/%Y %I:%M:%S %p', encoding='utf-8', level=logging.INFO)
        logging.getLogger("lightbulb").setLevel(logging.INFO)

    tasks.load(bot)
    bot.run()