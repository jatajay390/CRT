@echo off
echo Auto-committing changes...
powershell -ExecutionPolicy Bypass -File "%~dp0auto-commit.ps1"
echo Done!
pause