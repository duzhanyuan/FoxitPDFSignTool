@echo off

set FOXIT_OCX_NAME=FoxitPDFSDK_AX_Pro.OCX

cd /d %~dp0
regsvr32 %FOXIT_OCX_NAME%

pause