@echo off
pushd .

if not exist build/microFunction.exe (
    echo "microFunction not exist!"
    popd
    exit(1)
)

cd build
microFunction.exe

popd