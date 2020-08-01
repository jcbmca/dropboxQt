@echo off

REM Windows script to configure dropboxQt and solution file in IDE
REM requirement: Qt 5 should be installed and path to qmake
REM should listed in PATH environment variable
REM *note: usually this script is run from Visual Studio Command Prompt


cd ..\prj
echo "configuring %cd%"
rem qmake -tp vc
qmake -tp

cd ..\examples
for /D %%d in (*) do (
        echo "configuring %%d"
        cd "%%d"
rem        qmake -tp vc
        qmake -tp
        cd ..
)

cd ..\bin

echo "opening IDE.."
rem ..\prj\dropboxQt.sln
..\prj\dropboxQt.pro

pause
