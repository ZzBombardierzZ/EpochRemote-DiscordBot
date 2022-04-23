# Arma / DayZ Epoch Remote Control Discord Bot
If you want to package the bot yourself to make sure nothing funny was added to the exe, you can install the `nuitka` python module and run the following command:
~~~py
python -m nuitka --onefile bot.py
~~~

## Features
- Remote control of a Arma / DayZ Epoch server, allowing you to start / stop / restart the server remotely from discord.

## Installation
- Download the latest release from [here](https://github.com/ZzBombardierzZ/EpochRemote-DiscordBot/archive/refs/heads/main.zip) and extract the bot.exe file into it's own folder. It's important to put it in a containing folder as it spits out a config file and log folder when it starts.
- Set up your own discord bot account and get a bot token from [here](https://discordapp.com/developers/applications/me).
- Invite the bot to your discord server using the OAuth2 URL Generator from the discord bot page, you **MUST** have the `bot` and `applications.commands` scopes enabled in the bot invite.

## Config
- The bot will look for a config file in the same folder as the bot.exe file. If it doesn't exist, it will create one.
- Copy the token from the discord bot page into the config file.
- Copy the discord server ID from your discord application.
- Copy your discord user ID from your discord application.
- Configure which commands you want to use.
- For the XXX_Script_Location, it is best to use the full path to the script. This would look like: `C:/DayZ Epoch/scripts/server/XXX.sqf` and you should use `/` instead of `\` for the path separator. Th
- If you don't want automatic SQL backups, set the `Automatic_SQL_Backup_Minutes` to 0.


## Future plans
- Add a restore sql server command. This would require getting the sql login info in the config file, causing more security concerns.
- Add RCON commands to the bot and add option for RCON warnings to be sent when stopping/restarting/restoring the server.