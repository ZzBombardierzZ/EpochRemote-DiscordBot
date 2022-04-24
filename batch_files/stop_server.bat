@echo off

taskkill /f /fi "status eq not responding" /im arma2oaserver.exe
taskkill /f /im arma2oaserver.exe

::Uncomment if you are using BEC
::taskkill /im Bec.exe