# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/csmajs/imcke003/final-project-buong001-alau030-byu064-imcke003

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csmajs/imcke003/final-project-buong001-alau030-byu064-imcke003

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csmajs/imcke003/final-project-buong001-alau030-byu064-imcke003/CMakeFiles /home/csmajs/imcke003/final-project-buong001-alau030-byu064-imcke003//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csmajs/imcke003/final-project-buong001-alau030-byu064-imcke003/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named runGame

# Build rule for target.
runGame: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 runGame
.PHONY : runGame

# fast build rule for target.
runGame/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/build
.PHONY : runGame/fast

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/main.cpp.s
.PHONY : main.cpp.s

src/Output.o: src/Output.cpp.o
.PHONY : src/Output.o

# target to build an object file
src/Output.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Output.cpp.o
.PHONY : src/Output.cpp.o

src/Output.i: src/Output.cpp.i
.PHONY : src/Output.i

# target to preprocess a source file
src/Output.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Output.cpp.i
.PHONY : src/Output.cpp.i

src/Output.s: src/Output.cpp.s
.PHONY : src/Output.s

# target to generate assembly for a file
src/Output.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Output.cpp.s
.PHONY : src/Output.cpp.s

src/Player.o: src/Player.cpp.o
.PHONY : src/Player.o

# target to build an object file
src/Player.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Player.cpp.o
.PHONY : src/Player.cpp.o

src/Player.i: src/Player.cpp.i
.PHONY : src/Player.i

# target to preprocess a source file
src/Player.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Player.cpp.i
.PHONY : src/Player.cpp.i

src/Player.s: src/Player.cpp.s
.PHONY : src/Player.s

# target to generate assembly for a file
src/Player.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Player.cpp.s
.PHONY : src/Player.cpp.s

src/Type_A.o: src/Type_A.cpp.o
.PHONY : src/Type_A.o

# target to build an object file
src/Type_A.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Type_A.cpp.o
.PHONY : src/Type_A.cpp.o

src/Type_A.i: src/Type_A.cpp.i
.PHONY : src/Type_A.i

# target to preprocess a source file
src/Type_A.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Type_A.cpp.i
.PHONY : src/Type_A.cpp.i

src/Type_A.s: src/Type_A.cpp.s
.PHONY : src/Type_A.s

# target to generate assembly for a file
src/Type_A.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Type_A.cpp.s
.PHONY : src/Type_A.cpp.s

src/Type_B.o: src/Type_B.cpp.o
.PHONY : src/Type_B.o

# target to build an object file
src/Type_B.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Type_B.cpp.o
.PHONY : src/Type_B.cpp.o

src/Type_B.i: src/Type_B.cpp.i
.PHONY : src/Type_B.i

# target to preprocess a source file
src/Type_B.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Type_B.cpp.i
.PHONY : src/Type_B.cpp.i

src/Type_B.s: src/Type_B.cpp.s
.PHONY : src/Type_B.s

# target to generate assembly for a file
src/Type_B.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Type_B.cpp.s
.PHONY : src/Type_B.cpp.s

src/Type_C.o: src/Type_C.cpp.o
.PHONY : src/Type_C.o

# target to build an object file
src/Type_C.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Type_C.cpp.o
.PHONY : src/Type_C.cpp.o

src/Type_C.i: src/Type_C.cpp.i
.PHONY : src/Type_C.i

# target to preprocess a source file
src/Type_C.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Type_C.cpp.i
.PHONY : src/Type_C.cpp.i

src/Type_C.s: src/Type_C.cpp.s
.PHONY : src/Type_C.s

# target to generate assembly for a file
src/Type_C.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/Type_C.cpp.s
.PHONY : src/Type_C.cpp.s

src/room.o: src/room.cpp.o
.PHONY : src/room.o

# target to build an object file
src/room.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/room.cpp.o
.PHONY : src/room.cpp.o

src/room.i: src/room.cpp.i
.PHONY : src/room.i

# target to preprocess a source file
src/room.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/room.cpp.i
.PHONY : src/room.cpp.i

src/room.s: src/room.cpp.s
.PHONY : src/room.s

# target to generate assembly for a file
src/room.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/room.cpp.s
.PHONY : src/room.cpp.s

src/wrongInput.o: src/wrongInput.cpp.o
.PHONY : src/wrongInput.o

# target to build an object file
src/wrongInput.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/wrongInput.cpp.o
.PHONY : src/wrongInput.cpp.o

src/wrongInput.i: src/wrongInput.cpp.i
.PHONY : src/wrongInput.i

# target to preprocess a source file
src/wrongInput.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/wrongInput.cpp.i
.PHONY : src/wrongInput.cpp.i

src/wrongInput.s: src/wrongInput.cpp.s
.PHONY : src/wrongInput.s

# target to generate assembly for a file
src/wrongInput.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runGame.dir/build.make CMakeFiles/runGame.dir/src/wrongInput.cpp.s
.PHONY : src/wrongInput.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... runGame"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... src/Output.o"
	@echo "... src/Output.i"
	@echo "... src/Output.s"
	@echo "... src/Player.o"
	@echo "... src/Player.i"
	@echo "... src/Player.s"
	@echo "... src/Type_A.o"
	@echo "... src/Type_A.i"
	@echo "... src/Type_A.s"
	@echo "... src/Type_B.o"
	@echo "... src/Type_B.i"
	@echo "... src/Type_B.s"
	@echo "... src/Type_C.o"
	@echo "... src/Type_C.i"
	@echo "... src/Type_C.s"
	@echo "... src/room.o"
	@echo "... src/room.i"
	@echo "... src/room.s"
	@echo "... src/wrongInput.o"
	@echo "... src/wrongInput.i"
	@echo "... src/wrongInput.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

