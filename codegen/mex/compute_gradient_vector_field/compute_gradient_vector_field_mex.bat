@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=compute_gradient_vector_field
set MEX_NAME=compute_gradient_vector_field
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for compute_gradient_vector_field > compute_gradient_vector_field_mex.mki
echo CC=%COMPILER%>> compute_gradient_vector_field_mex.mki
echo CXX=%CXXCOMPILER%>> compute_gradient_vector_field_mex.mki
echo CFLAGS=%COMPFLAGS%>> compute_gradient_vector_field_mex.mki
echo CXXFLAGS=%CXXCOMPFLAGS%>> compute_gradient_vector_field_mex.mki
echo LINKER=%LINKER%>> compute_gradient_vector_field_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> compute_gradient_vector_field_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> compute_gradient_vector_field_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> compute_gradient_vector_field_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> compute_gradient_vector_field_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> compute_gradient_vector_field_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> compute_gradient_vector_field_mex.mki
echo OMPFLAGS= >> compute_gradient_vector_field_mex.mki
echo OMPLINKFLAGS= >> compute_gradient_vector_field_mex.mki
echo EMC_COMPILER=mingw64>> compute_gradient_vector_field_mex.mki
echo EMC_CONFIG=optim>> compute_gradient_vector_field_mex.mki
"C:\Program Files\MATLAB\R2018b\bin\win64\gmake" -j 1 -B -f compute_gradient_vector_field_mex.mk
