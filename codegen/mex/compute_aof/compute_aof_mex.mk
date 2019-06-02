MATLAB_ROOT = C:\PROGRA~1\MATLAB\R2018b
MAKEFILE = compute_aof_mex.mk

include compute_aof_mex.mki


SRC_FILES =  \
	compute_aof_data.c \
	compute_aof_initialize.c \
	compute_aof_terminate.c \
	compute_aof.c \
	_coder_compute_aof_info.c \
	_coder_compute_aof_api.c \
	_coder_compute_aof_mex.c \
	compute_aof_emxutil.c \
	c_mexapi_version.c

MEX_FILE_NAME_WO_EXT = compute_aof
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = -llibmwblas 


#
#====================================================================
# gmake makefile fragment for building MEX functions using MinGW
# Copyright 2015-2017 The MathWorks, Inc.
#====================================================================
#

SHELL = cmd
LD = $(LINKER)
OBJEXT = o
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLISTCPP  = $(OBJLISTC:.cpp=.$(OBJEXT))
OBJLIST  = $(OBJLISTCPP:.cu=.$(OBJEXT))

target: $(TARGET)

ML_INCLUDES = -I "$(MATLAB_ROOT)/simulink/include"
ML_INCLUDES+= -I "$(MATLAB_ROOT)/toolbox/shared/simtargets"
SYS_INCLUDE = $(ML_INCLUDES)

# Additional includes

SYS_INCLUDE += -I "C:\Users\morte\Documents\GitHub\3DAOFSkeletons\codegen\mex\compute_aof"
SYS_INCLUDE += -I "C:\Users\morte\Documents\GitHub\3DAOFSkeletons"
SYS_INCLUDE += -I ".\interface"
SYS_INCLUDE += -I "$(MATLAB_ROOT)\extern\include"
SYS_INCLUDE += -I "."

EML_LIBS = -llibemlrt -llibcovrt -llibut -llibmwmathutil 
SYS_LIBS += $(CLIBS) $(EML_LIBS)

EXPORTFILE = $(MEX_FILE_NAME_WO_EXT)_mex.map
EXPORTOPT = -Wl,--version-script,$(EXPORTFILE)
LINK_FLAGS = $(filter-out /export:mexFunction, $(LINKFLAGS))
COMP_FLAGS = $(CFLAGS) $(OMPFLAGS) -D__USE_MINGW_ANSI_STDIO=1
CXX_FLAGS = $(CXXFLAGS) $(OMPFLAGS) -D__USE_MINGW_ANSI_STDIO=1
LINK_FLAGS = $(LINKFLAGS) 
LINK_FLAGS += $(OMPLINKFLAGS)
ifeq ($(EMC_CONFIG),optim)
  COMP_FLAGS += $(OPTIMFLAGS)
  CXX_FLAGS += $(OPTIMFLAGS)
  LINK_FLAGS += $(LINKOPTIMFLAGS)
else
  COMP_FLAGS += $(DEBUGFLAGS)
  CXX_FLAGS += $(DEBUGFLAGS)
  LINK_FLAGS += $(LINKDEBUGFLAGS)
endif
LINK_FLAGS += -o $(TARGET)
LINK_FLAGS +=  -L"$(MATLAB_ROOT)\extern\lib\win64\mingw64"

CCFLAGS = $(COMP_FLAGS) -std=c99   $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS = $(CXX_FLAGS) -std=c++11   $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CXX) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : C:\Users\morte\Documents\GitHub\3DAOFSkeletons/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : C:\Users\morte\Documents\GitHub\3DAOFSkeletons\codegen\mex\compute_aof/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : C:\Users\morte\Documents\GitHub\3DAOFSkeletons/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : C:\Users\morte\Documents\GitHub\3DAOFSkeletons\codegen\mex\compute_aof/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CXX) $(CPPFLAGS) "$<"



%.$(OBJEXT) : C:\Users\morte\Documents\GitHub\3DAOFSkeletons/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : C:\Users\morte\Documents\GitHub\3DAOFSkeletons\codegen\mex\compute_aof/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.cu
	$(CC) $(CCFLAGS) "$<"




$(TARGET): $(OBJLIST) $(MAKEFILE)
	$(LD) $(EXPORTOPT) $(OBJLIST) $(LINK_FLAGS) $(SYS_LIBS)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

#====================================================================

