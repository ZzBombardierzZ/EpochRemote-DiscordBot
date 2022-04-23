# Arma / DayZ Epoch Remote Control Discord Bot (EARLY ACCESS)
If you want to package the bot yourself to make sure nothing funny was added to the exe, you can install the `lightbulb`, `hikari`, and `nuitka` python modules and run the following command:
~~~py
python -m nuitka --onefile bot.py
~~~

## Features
- Remote control of a Arma / DayZ Epoch server, allowing you to start / stop / restart the server remotely from discord.
- Automatic backups of the server's database.
- Manually backup the server's database.
- Add custom commands to the discord server that can call other batch files.

## Installation
- Download the latest release from [here](https://github.com/ZzBombardierzZ/EpochRemote-DiscordBot/archive/refs/heads/main.zip) and extract the bot.exe file into it's own folder. It's important to put it in a containing folder as it spits out a config file and log folder when it starts.
- Set up your own discord bot account and get a bot token from [here](https://discordapp.com/developers/applications/me). First create an application, then got to the bot's page and create a bot. Then go to the bot's page and click the "token" button. Copy the token and paste it into the config file.
- Invite the bot to your discord server using the OAuth2 URL Generator from the discord bot page, you **MUST** have the `bot` and `applications.commands` scopes enabled in the bot invite.

## Config
- The bot will look for a config file in the same folder as the bot.exe file. If it doesn't exist, it will create one.
- Copy the token from the discord bot page into the config file if you haven't already. Keep this token secret, it will be used to authenticate the bot to discord.
- Copy the discord server ID from your discord application, you can do this by enabling the developer setting in discord and right clicking your discord server.
- Copy your discord user ID from your discord application, you can do this by enabling the developer setting in discord and right clicking your user.
- Configure which commands you want to use.
- For the XXX_Script_Location, it is best to use the full path to the script. This would look like: `C:/DayZ Epoch/scripts/server/XXX.sqf` and you should use `/` instead of `\` for the path separator. Th
- If you don't want automatic SQL backups but still want the manual option, set the `SQL_Backups` to `true` and `Automatic_SQL_Backup_Minutes` to `0`.
- If you are using SQL backups, it is best to follow the same path format as the script location.


## Future plans
- Add a restore sql server command. This would require getting the sql login info in the config file, causing more security concerns from potential users. This would have a neat menu that you can choose which backup to restore from.
- Add RCON commands to the bot and add option for RCON warnings to be sent when stopping/restarting/restoring the server.
- Add a git pull command to the bot?
- Make the exe into a GUI enabled application?
- If you have any other ideas, please let me know by either creating an issue on github or by sending a message to my discord `ZzBombardierzZ#5945`.