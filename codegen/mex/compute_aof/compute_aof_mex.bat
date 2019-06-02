@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=compute_aof
set MEX_NAME=compute_aof
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for compute_aof > compute_aof_mex.mki
echo CC=%COMPILER%>> compute_aof_mex.mki
echo CXX=%CXXCOMPILER%>> compute_aof_mex.mki
echo CFLAGS=%COMPFLAGS%>> compute_aof_mex.mki
echo CXXFLAGS=%CXXCOMPFLAGS%>> compute_aof_mex.mki
echo LINKER=%LINKER%>> compute_aof_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> compute_aof_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> compute_aof_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> compute_aof_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> compute_aof_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> compute_aof_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> compute_aof_mex.mki
echo OMPFLAGS= >> compute_aof_mex.mki
echo OMPLINKFLAGS= >> compute_aof_mex.mki
echo EMC_COMPILER=mingw64>> compute_aof_mex.mki
echo EMC_CONFIG=optim>> compute_aof_mex.mki
"C:\Program Files\MATLAB\R2018b\bin\win64\gmake" -j 1 -B -f compute_aof_mex.mk
