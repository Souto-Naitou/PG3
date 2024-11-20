@echo off
set /p filename="BranchName: "
replvar template.yml ..\.github\workflows\%filename%.yml