@echo off

set FOXIT_OCX_NAME=FoxitPDFSDK_AX_Pro.ocx

cd /d %~dp0
regsvr32 /u %FOXIT_OCX_NAME%

pause