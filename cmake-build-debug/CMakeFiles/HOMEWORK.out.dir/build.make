# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/Clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/Clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tzw/Software/Project/C_CPP/Homework

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tzw/Software/Project/C_CPP/Homework/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HOMEWORK.out.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/HOMEWORK.out.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HOMEWORK.out.dir/flags.make

CMakeFiles/HOMEWORK.out.dir/src/binaryTree.c.o: CMakeFiles/HOMEWORK.out.dir/flags.make
CMakeFiles/HOMEWORK.out.dir/src/binaryTree.c.o: ../src/binaryTree.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tzw/Software/Project/C_CPP/Homework/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/HOMEWORK.out.dir/src/binaryTree.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/HOMEWORK.out.dir/src/binaryTree.c.o -c /home/tzw/Software/Project/C_CPP/Homework/src/binaryTree.c

CMakeFiles/HOMEWORK.out.dir/src/binaryTree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HOMEWORK.out.dir/src/binaryTree.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tzw/Software/Project/C_CPP/Homework/src/binaryTree.c > CMakeFiles/HOMEWORK.out.dir/src/binaryTree.c.i

CMakeFiles/HOMEWORK.out.dir/src/binaryTree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HOMEWORK.out.dir/src/binaryTree.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tzw/Software/Project/C_CPP/Homework/src/binaryTree.c -o CMakeFiles/HOMEWORK.out.dir/src/binaryTree.c.s

CMakeFiles/HOMEWORK.out.dir/src/linkList.c.o: CMakeFiles/HOMEWORK.out.dir/flags.make
CMakeFiles/HOMEWORK.out.dir/src/linkList.c.o: ../src/linkList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tzw/Software/Project/C_CPP/Homework/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/HOMEWORK.out.dir/src/linkList.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/HOMEWORK.out.dir/src/linkList.c.o -c /home/tzw/Software/Project/C_CPP/Homework/src/linkList.c

CMakeFiles/HOMEWORK.out.dir/src/linkList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HOMEWORK.out.dir/src/linkList.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tzw/Software/Project/C_CPP/Homework/src/linkList.c > CMakeFiles/HOMEWORK.out.dir/src/linkList.c.i

CMakeFiles/HOMEWORK.out.dir/src/linkList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HOMEWORK.out.dir/src/linkList.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tzw/Software/Project/C_CPP/Homework/src/linkList.c -o CMakeFiles/HOMEWORK.out.dir/src/linkList.c.s

CMakeFiles/HOMEWORK.out.dir/src/main.c.o: CMakeFiles/HOMEWORK.out.dir/flags.make
CMakeFiles/HOMEWORK.out.dir/src/main.c.o: ../src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tzw/Software/Project/C_CPP/Homework/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/HOMEWORK.out.dir/src/main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/HOMEWORK.out.dir/src/main.c.o -c /home/tzw/Software/Project/C_CPP/Homework/src/main.c

CMakeFiles/HOMEWORK.out.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HOMEWORK.out.dir/src/main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tzw/Software/Project/C_CPP/Homework/src/main.c > CMakeFiles/HOMEWORK.out.dir/src/main.c.i

CMakeFiles/HOMEWORK.out.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HOMEWORK.out.dir/src/main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tzw/Software/Project/C_CPP/Homework/src/main.c -o CMakeFiles/HOMEWORK.out.dir/src/main.c.s

CMakeFiles/HOMEWORK.out.dir/src/queue.c.o: CMakeFiles/HOMEWORK.out.dir/flags.make
CMakeFiles/HOMEWORK.out.dir/src/queue.c.o: ../src/queue.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tzw/Software/Project/C_CPP/Homework/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/HOMEWORK.out.dir/src/queue.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/HOMEWORK.out.dir/src/queue.c.o -c /home/tzw/Software/Project/C_CPP/Homework/src/queue.c

CMakeFiles/HOMEWORK.out.dir/src/queue.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HOMEWORK.out.dir/src/queue.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tzw/Software/Project/C_CPP/Homework/src/queue.c > CMakeFiles/HOMEWORK.out.dir/src/queue.c.i

CMakeFiles/HOMEWORK.out.dir/src/queue.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HOMEWORK.out.dir/src/queue.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tzw/Software/Project/C_CPP/Homework/src/queue.c -o CMakeFiles/HOMEWORK.out.dir/src/queue.c.s

CMakeFiles/HOMEWORK.out.dir/src/seqList.c.o: CMakeFiles/HOMEWORK.out.dir/flags.make
CMakeFiles/HOMEWORK.out.dir/src/seqList.c.o: ../src/seqList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tzw/Software/Project/C_CPP/Homework/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/HOMEWORK.out.dir/src/seqList.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/HOMEWORK.out.dir/src/seqList.c.o -c /home/tzw/Software/Project/C_CPP/Homework/src/seqList.c

CMakeFiles/HOMEWORK.out.dir/src/seqList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HOMEWORK.out.dir/src/seqList.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tzw/Software/Project/C_CPP/Homework/src/seqList.c > CMakeFiles/HOMEWORK.out.dir/src/seqList.c.i

CMakeFiles/HOMEWORK.out.dir/src/seqList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HOMEWORK.out.dir/src/seqList.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tzw/Software/Project/C_CPP/Homework/src/seqList.c -o CMakeFiles/HOMEWORK.out.dir/src/seqList.c.s

CMakeFiles/HOMEWORK.out.dir/src/stack.c.o: CMakeFiles/HOMEWORK.out.dir/flags.make
CMakeFiles/HOMEWORK.out.dir/src/stack.c.o: ../src/stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tzw/Software/Project/C_CPP/Homework/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/HOMEWORK.out.dir/src/stack.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/HOMEWORK.out.dir/src/stack.c.o -c /home/tzw/Software/Project/C_CPP/Homework/src/stack.c

CMakeFiles/HOMEWORK.out.dir/src/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HOMEWORK.out.dir/src/stack.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tzw/Software/Project/C_CPP/Homework/src/stack.c > CMakeFiles/HOMEWORK.out.dir/src/stack.c.i

CMakeFiles/HOMEWORK.out.dir/src/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HOMEWORK.out.dir/src/stack.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tzw/Software/Project/C_CPP/Homework/src/stack.c -o CMakeFiles/HOMEWORK.out.dir/src/stack.c.s

# Object files for target HOMEWORK.out
HOMEWORK_out_OBJECTS = \
"CMakeFiles/HOMEWORK.out.dir/src/binaryTree.c.o" \
"CMakeFiles/HOMEWORK.out.dir/src/linkList.c.o" \
"CMakeFiles/HOMEWORK.out.dir/src/main.c.o" \
"CMakeFiles/HOMEWORK.out.dir/src/queue.c.o" \
"CMakeFiles/HOMEWORK.out.dir/src/seqList.c.o" \
"CMakeFiles/HOMEWORK.out.dir/src/stack.c.o"

# External object files for target HOMEWORK.out
HOMEWORK_out_EXTERNAL_OBJECTS =

HOMEWORK.out: CMakeFiles/HOMEWORK.out.dir/src/binaryTree.c.o
HOMEWORK.out: CMakeFiles/HOMEWORK.out.dir/src/linkList.c.o
HOMEWORK.out: CMakeFiles/HOMEWORK.out.dir/src/main.c.o
HOMEWORK.out: CMakeFiles/HOMEWORK.out.dir/src/queue.c.o
HOMEWORK.out: CMakeFiles/HOMEWORK.out.dir/src/seqList.c.o
HOMEWORK.out: CMakeFiles/HOMEWORK.out.dir/src/stack.c.o
HOMEWORK.out: CMakeFiles/HOMEWORK.out.dir/build.make
HOMEWORK.out: CMakeFiles/HOMEWORK.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tzw/Software/Project/C_CPP/Homework/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable HOMEWORK.out"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HOMEWORK.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HOMEWORK.out.dir/build: HOMEWORK.out
.PHONY : CMakeFiles/HOMEWORK.out.dir/build

CMakeFiles/HOMEWORK.out.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HOMEWORK.out.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HOMEWORK.out.dir/clean

CMakeFiles/HOMEWORK.out.dir/depend:
	cd /home/tzw/Software/Project/C_CPP/Homework/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tzw/Software/Project/C_CPP/Homework /home/tzw/Software/Project/C_CPP/Homework /home/tzw/Software/Project/C_CPP/Homework/cmake-build-debug /home/tzw/Software/Project/C_CPP/Homework/cmake-build-debug /home/tzw/Software/Project/C_CPP/Homework/cmake-build-debug/CMakeFiles/HOMEWORK.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HOMEWORK.out.dir/depend

