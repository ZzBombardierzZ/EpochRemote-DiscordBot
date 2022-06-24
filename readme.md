# Arma / DayZ Epoch Remote Control Discord Bot (EARLY ACCESS)
*Note: This bot is currently in early access and is not guaranteed to work.*

For your security, this bot only runs batch files so that my bot isn't reading any of your private information. Although it is open source and therefor you should be able to see for yourself that none of your information is being taken. If you want to package the bot yourself to make sure nothing funny was added to the exe, you can install the `lightbulb`, `hikari`, and `pyinstaller` python modules and run the following command in the directory containing bot.py:
~~~py
pyinstaller --onefile --icon=discord_bot.ico bot.py
~~~

## Features
- Remote control of a Arma / DayZ Epoch server, allowing you to start / stop / restart the server remotely from discord.
- Automatic backups of the server's database.
- Manually backup the server's database.
- Easily restore your database from a backup.
- Includes a batch file to easily pull updates from a remote git repository.
- Add custom commands to the discord server that can call other batch files.
- Ability to download logs remotely from the server from desired folders.

## Installation
- Download the latest release from [here](https://github.com/ZzBombardierzZ/EpochRemote-DiscordBot/archive/refs/heads/main.zip) and extract the bot.exe file into it's own folder. It's important to put it in a containing folder as it spits out a config file and log folder when it starts.
- Set up your own discord bot account and get a bot token from [here](https://discordapp.com/developers/applications/me). First create an application, then got to the bot's page and create a bot. Then go to the bot's page and click the "token" button. Copy the token and paste it into the config file.
- Invite the bot to your discord server using the OAuth2 URL Generator from the discord bot page, you **MUST** have the `bot` and `applications.commands` scopes enabled in the bot invite.
- There are some included batch files which are examples but also a suggestion if you don't already have something similar. If you decide to use these, configure them accordingly with your server.

## Config
- The bot will look for a config file in the same folder as the bot.exe file. If it doesn't exist, it will create one.
- Copy the token from the discord bot page into the config file if you haven't already. Keep this token secret, it will be used to authenticate the bot to discord.
- Copy the discord server ID from your discord application, you can do this by enabling the developer setting in discord and right clicking your discord server.
- Copy your discord user ID from your discord application, you can do this by enabling the developer setting in discord and right clicking your user.
- Configure which commands you want to use.
- For the XXX_Script_Location, it is best to use the full path to the script. This would look like: `"C:/DayZ Epoch/scripts/server/XXX.bat"` and you should use `/` instead of `\` for the path separator. Th
- If you don't want automatic SQL backups but still want the manual option, set the `SQL_Backups` to `true` and `Automatic_SQL_Backup_Minutes` to `0`.
- If you are using SQL backups, it is best to follow the same path format as the script location.
- **If you are using my included batch files** you will need to configure each one correctly. You can also simply change the path of the XXX_Script_Location to your own batch files.
- You can now download logs from your server. It currently allows any file within the given directory to be downloaded (discord only allows 8MB max size per file), so be sure you trust the users you add to Discord_Remote_Control_User_IDs list in the config file if using this feature.
    - You can have as many folder locations as you want for this feature.
    - An example of the name of the discord command is "Rotated Logs", which will be turned into a slash command named /Rotated_Logs
    - The location of that folder is "C:/DZE_Server_Config/RotatedLogs"
    - You can edit these to your liking.

## Recent Changes:
- 6/24/22 - Added ability to download logs/files remotely from the server from desired folders. Also added a icon for the executable.

## Possible Future Plans
- Add RCON commands to the bot and add option for RCON warnings to be sent when stopping/restarting/restoring the server. This would require getting RCON info in the config, adding potential security concerns from owners.
- Make the exe into a GUI enabled application?
- Add an automatic startup script if the armaserver.exe is not running?
- Add option to automatically stop/start the server at certain times, replacing the need for BEC? Could use RCON for restart warnings too.
- If you have any other ideas, please let me know by either creating an issue on github or by sending a message to my discord `ZzBombardierzZ#5945`.

### Legal
This bot is open source, made by yours truly. The batch files are either customized by me or community scripts that I have put all in one place. I allow anyone to modify or use this however they want. I do not take any responsibility for any damage done to your server. If you have any questions, please contact me on discord.