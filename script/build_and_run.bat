@echo off
pushd .

call script/clean.bat
call script/build.bat
call script/run.bat

popd