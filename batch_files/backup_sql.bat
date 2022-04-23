:: **Config Area here!**

SET BackupDir="C:\SQL-Backups"
SET mysqldir="C:\Program Files\MySQL\MySQL Server 5.7\bin"
:: This is the default suggested schema, yours may vary.
SET mysqlschema=dayz_epoch
SET mysqlpassword=YOUR_PASSWORD
SET mysqluser=YOUR_USERNAME
:: This is how many days to keep of backups
SET housekeepafter=14

:: **End of Config Area**

For /f "tokens=2-4 delims=/ " %%a in ('date /t') do (set mydate=%%c-%%a-%%b)
For /f "tokens=1-2 delims=/:" %%a in ("%TIME%") do (set mytime=%%a.%%b)

set hour=%time:~0,2%
if "%time:~0,1%"==" " set hour=0%time:~1,1%
set datestamp=%date:~10,4%-%date:~4,2%-%date:~7,2%_%hour%%time:~3,2%

@REM *** EXECUTION ***
@REM Change to mysqldir
c:
cd %mysqldir%

@REM dump/backup ALL database, this is all in one line
mysqldump -u %mysqluser% -p%mysqlpassword% --databases %mysqlschema% --routines --events --triggers --quick  >%BackupDir%\%mysqlschema%_backup.%datestamp%.sql

@REM - Housekeeping
forfiles -p %BackupDir% -s -m *.sql -d -%housekeepafter% -c "cmd /c del @path"