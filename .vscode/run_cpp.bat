@echo off
setlocal

set "SRC=%~1"
set "OUT=%~2"
set "ERRFILE=%TEMP%\run_cpp_error_%RANDOM%.txt"

if "%SRC%"=="" (
    echo Error: source file path is missing.
    exit /b 1
)

if "%OUT%"=="" (
    for %%I in ("%SRC%") do set "OUT=%%~nI"
)

pushd "%~dp1" >nul 2>&1
if errorlevel 1 (
    type "%ERRFILE%"
    del "%ERRFILE%" >nul 2>&1
    echo Error: cannot change directory to source folder.
    exit /b 1
)

taskkill /F /IM "%OUT%.exe" /T >nul 2>&1

C:\MinGW\bin\g++.exe -std=c++17 "%SRC%" -o "%OUT%.exe" 1>nul 2>"%ERRFILE%"
set "RC=%ERRORLEVEL%"
if %RC% neq 0 (
    type "%ERRFILE%"
    del "%ERRFILE%" >nul 2>&1
    popd >nul 2>&1
    exit /b %RC%
)

del "%ERRFILE%" >nul 2>&1
"%OUT%.exe"
set "RC=%ERRORLEVEL%"
popd >nul 2>&1
exit /b %RC%
