# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Dany2\OneDrive\Documents\Sapi\DTS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DTS.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/DTS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DTS.dir/flags.make

CMakeFiles/DTS.dir/sapi_sales/main.c.obj: CMakeFiles/DTS.dir/flags.make
CMakeFiles/DTS.dir/sapi_sales/main.c.obj: CMakeFiles/DTS.dir/includes_C.rsp
CMakeFiles/DTS.dir/sapi_sales/main.c.obj: ../sapi_sales/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/DTS.dir/sapi_sales/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\DTS.dir\sapi_sales\main.c.obj -c C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\main.c

CMakeFiles/DTS.dir/sapi_sales/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DTS.dir/sapi_sales/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\main.c > CMakeFiles\DTS.dir\sapi_sales\main.c.i

CMakeFiles/DTS.dir/sapi_sales/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DTS.dir/sapi_sales/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\main.c -o CMakeFiles\DTS.dir\sapi_sales\main.c.s

CMakeFiles/DTS.dir/sapi_sales/src/models/user.c.obj: CMakeFiles/DTS.dir/flags.make
CMakeFiles/DTS.dir/sapi_sales/src/models/user.c.obj: CMakeFiles/DTS.dir/includes_C.rsp
CMakeFiles/DTS.dir/sapi_sales/src/models/user.c.obj: ../sapi_sales/src/models/user.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/DTS.dir/sapi_sales/src/models/user.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\DTS.dir\sapi_sales\src\models\user.c.obj -c C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\src\models\user.c

CMakeFiles/DTS.dir/sapi_sales/src/models/user.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DTS.dir/sapi_sales/src/models/user.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\src\models\user.c > CMakeFiles\DTS.dir\sapi_sales\src\models\user.c.i

CMakeFiles/DTS.dir/sapi_sales/src/models/user.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DTS.dir/sapi_sales/src/models/user.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\src\models\user.c -o CMakeFiles\DTS.dir\sapi_sales\src\models\user.c.s

CMakeFiles/DTS.dir/sapi_sales/src/models/product.c.obj: CMakeFiles/DTS.dir/flags.make
CMakeFiles/DTS.dir/sapi_sales/src/models/product.c.obj: CMakeFiles/DTS.dir/includes_C.rsp
CMakeFiles/DTS.dir/sapi_sales/src/models/product.c.obj: ../sapi_sales/src/models/product.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/DTS.dir/sapi_sales/src/models/product.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\DTS.dir\sapi_sales\src\models\product.c.obj -c C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\src\models\product.c

CMakeFiles/DTS.dir/sapi_sales/src/models/product.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DTS.dir/sapi_sales/src/models/product.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\src\models\product.c > CMakeFiles\DTS.dir\sapi_sales\src\models\product.c.i

CMakeFiles/DTS.dir/sapi_sales/src/models/product.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DTS.dir/sapi_sales/src/models/product.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\src\models\product.c -o CMakeFiles\DTS.dir\sapi_sales\src\models\product.c.s

CMakeFiles/DTS.dir/sapi_sales/src/manager/lab2.c.obj: CMakeFiles/DTS.dir/flags.make
CMakeFiles/DTS.dir/sapi_sales/src/manager/lab2.c.obj: CMakeFiles/DTS.dir/includes_C.rsp
CMakeFiles/DTS.dir/sapi_sales/src/manager/lab2.c.obj: ../sapi_sales/src/manager/lab2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/DTS.dir/sapi_sales/src/manager/lab2.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\DTS.dir\sapi_sales\src\manager\lab2.c.obj -c C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\src\manager\lab2.c

CMakeFiles/DTS.dir/sapi_sales/src/manager/lab2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DTS.dir/sapi_sales/src/manager/lab2.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\src\manager\lab2.c > CMakeFiles\DTS.dir\sapi_sales\src\manager\lab2.c.i

CMakeFiles/DTS.dir/sapi_sales/src/manager/lab2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DTS.dir/sapi_sales/src/manager/lab2.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\src\manager\lab2.c -o CMakeFiles\DTS.dir\sapi_sales\src\manager\lab2.c.s

CMakeFiles/DTS.dir/sapi_sales/src/manager/lab_manager.c.obj: CMakeFiles/DTS.dir/flags.make
CMakeFiles/DTS.dir/sapi_sales/src/manager/lab_manager.c.obj: CMakeFiles/DTS.dir/includes_C.rsp
CMakeFiles/DTS.dir/sapi_sales/src/manager/lab_manager.c.obj: ../sapi_sales/src/manager/lab_manager.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/DTS.dir/sapi_sales/src/manager/lab_manager.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\DTS.dir\sapi_sales\src\manager\lab_manager.c.obj -c C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\src\manager\lab_manager.c

CMakeFiles/DTS.dir/sapi_sales/src/manager/lab_manager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DTS.dir/sapi_sales/src/manager/lab_manager.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\src\manager\lab_manager.c > CMakeFiles\DTS.dir\sapi_sales\src\manager\lab_manager.c.i

CMakeFiles/DTS.dir/sapi_sales/src/manager/lab_manager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DTS.dir/sapi_sales/src/manager/lab_manager.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\sapi_sales\src\manager\lab_manager.c -o CMakeFiles\DTS.dir\sapi_sales\src\manager\lab_manager.c.s

CMakeFiles/DTS.dir/shared/src/errors.c.obj: CMakeFiles/DTS.dir/flags.make
CMakeFiles/DTS.dir/shared/src/errors.c.obj: CMakeFiles/DTS.dir/includes_C.rsp
CMakeFiles/DTS.dir/shared/src/errors.c.obj: ../shared/src/errors.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/DTS.dir/shared/src/errors.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\DTS.dir\shared\src\errors.c.obj -c C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\shared\src\errors.c

CMakeFiles/DTS.dir/shared/src/errors.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DTS.dir/shared/src/errors.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\shared\src\errors.c > CMakeFiles\DTS.dir\shared\src\errors.c.i

CMakeFiles/DTS.dir/shared/src/errors.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DTS.dir/shared/src/errors.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\shared\src\errors.c -o CMakeFiles\DTS.dir\shared\src\errors.c.s

CMakeFiles/DTS.dir/shared/src/messages.c.obj: CMakeFiles/DTS.dir/flags.make
CMakeFiles/DTS.dir/shared/src/messages.c.obj: CMakeFiles/DTS.dir/includes_C.rsp
CMakeFiles/DTS.dir/shared/src/messages.c.obj: ../shared/src/messages.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/DTS.dir/shared/src/messages.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\DTS.dir\shared\src\messages.c.obj -c C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\shared\src\messages.c

CMakeFiles/DTS.dir/shared/src/messages.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DTS.dir/shared/src/messages.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\shared\src\messages.c > CMakeFiles\DTS.dir\shared\src\messages.c.i

CMakeFiles/DTS.dir/shared/src/messages.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DTS.dir/shared/src/messages.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\shared\src\messages.c -o CMakeFiles\DTS.dir\shared\src\messages.c.s

# Object files for target DTS
DTS_OBJECTS = \
"CMakeFiles/DTS.dir/sapi_sales/main.c.obj" \
"CMakeFiles/DTS.dir/sapi_sales/src/models/user.c.obj" \
"CMakeFiles/DTS.dir/sapi_sales/src/models/product.c.obj" \
"CMakeFiles/DTS.dir/sapi_sales/src/manager/lab2.c.obj" \
"CMakeFiles/DTS.dir/sapi_sales/src/manager/lab_manager.c.obj" \
"CMakeFiles/DTS.dir/shared/src/errors.c.obj" \
"CMakeFiles/DTS.dir/shared/src/messages.c.obj"

# External object files for target DTS
DTS_EXTERNAL_OBJECTS =

DTS.exe: CMakeFiles/DTS.dir/sapi_sales/main.c.obj
DTS.exe: CMakeFiles/DTS.dir/sapi_sales/src/models/user.c.obj
DTS.exe: CMakeFiles/DTS.dir/sapi_sales/src/models/product.c.obj
DTS.exe: CMakeFiles/DTS.dir/sapi_sales/src/manager/lab2.c.obj
DTS.exe: CMakeFiles/DTS.dir/sapi_sales/src/manager/lab_manager.c.obj
DTS.exe: CMakeFiles/DTS.dir/shared/src/errors.c.obj
DTS.exe: CMakeFiles/DTS.dir/shared/src/messages.c.obj
DTS.exe: CMakeFiles/DTS.dir/build.make
DTS.exe: CMakeFiles/DTS.dir/linklibs.rsp
DTS.exe: CMakeFiles/DTS.dir/objects1.rsp
DTS.exe: CMakeFiles/DTS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable DTS.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DTS.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DTS.dir/build: DTS.exe
.PHONY : CMakeFiles/DTS.dir/build

CMakeFiles/DTS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DTS.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DTS.dir/clean

CMakeFiles/DTS.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Dany2\OneDrive\Documents\Sapi\DTS C:\Users\Dany2\OneDrive\Documents\Sapi\DTS C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\cmake-build-debug C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\cmake-build-debug C:\Users\Dany2\OneDrive\Documents\Sapi\DTS\cmake-build-debug\CMakeFiles\DTS.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DTS.dir/depend
