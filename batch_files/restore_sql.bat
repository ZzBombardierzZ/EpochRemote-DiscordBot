:: **Config Area here!**

SET mysqldir="C:\Program Files\MySQL\MySQL Server 5.7\bin"
SET mysqlpassword=YOUR_PASSWORD
SET mysqluser=YOUR_USERNAME

:: **End of Config Area**

:: The discord bot sends the file path to the batch file, so do not edit this unless you know what you are doing.
set SQL_Backup_File=%1

echo -----------------------------------------
echo *** Restoring SQL Database ***
echo -----------------------------------------

echo File to restore: %SQL_Backup_File%

TIMEOUT 2

cd %mysqldir%

mysql -u %mysqluser% -p%mysqlpassword% < %SQL_Backup_File%