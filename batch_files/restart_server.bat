@echo off

set "ServerRoot=C:\My_Server\Server\"
set "ServerConfig=C:\My_Server\DZE_Server_Config\"
:: Uncomment and configure if you want it to pack the server/mission files on startup
::set "PBOManager=C:\Program Files\PBO Manager v.1.4 beta\"

taskkill /f /fi "status eq not responding" /im arma2oaserver.exe
taskkill /f /im arma2oaserver.exe

::Uncomment if you are using BEC
::taskkill /im Bec.exe


timeout 1

:: Uncomment and configure if you want it to pack the mission file on startup
::CALL "%PBOManager%PBOConsole.exe" -pack "%ServerRoot%MPMissions\DayZ_Epoch_1.Chernarus" "%ServerRoot%MPMissions\DayZ_Epoch_11.Chernarus.pbo"
:: Uncomment if you want it to pack the server file on startup
::CALL "%PBOManager%PBOConsole.exe" -pack "%ServerRoot%@DayZ_Epoch_Server\addons\dayz_server" "%ServerRoot%@DayZ_Epoch_Server\addons\dayz_server.pbo"

:: Uncomment if you want to rotate the Battleye and RPT logs on startup. Configure rotate_logs.bat to point to the correct log files.
::cd %ServerConfig%
::start "" "rotate_logs.bat"
::timeout 2

cd %ServerRoot%
:: I learned the hard way that you MUST write the full path instead of using %serverroot% or %serverconfig%
start "arma2" /min /high "C:\My_Server\Server\arma2oaserver.exe" -port=2302 "-config=C:\My_Server\DZE_Server_Config\11_chernarus.cfg" "-cfg=C:\My_Server\DZE_Server_Config\basic.cfg" "-profiles=C:\My_Server\DZE_Server_Config" -name=server "-mod=@DayZ_Epoch;@DayZ_Epoch_Server;"


::Uncomment and configure if you are using BEC
::timeout 10
::set becpath="C:\My_Server\BEC\"
::cd /d %becpath%
::start "" /min "Bec.exe" -f Config.cfg