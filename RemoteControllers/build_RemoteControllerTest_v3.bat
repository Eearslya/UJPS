echo off

REM SET PATHS (line 4 to be updated with the paths that match your installation of Qt)
echo Setting up environment for Qt 5.11 usage...
set PATH=C:\Qt\5.11.0\mingw53_32\bin;C:\Qt\Tools\mingw530_32\bin;%PATH%
echo.


REM COMPILATION
echo compiling RemoteControllerTest_v3
echo.
cd %~dp0\RemoteControllerTest_v3
qmake
mingw32-make release
cd ..
echo.
echo.


echo build finished
pause

