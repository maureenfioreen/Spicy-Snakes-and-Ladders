# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/g209/ros2_ws/src/game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/g209/ros2_ws/build/game

# Include any dependencies generated for this target.
include CMakeFiles/snakes_and_ladders_game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/snakes_and_ladders_game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/snakes_and_ladders_game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/snakes_and_ladders_game.dir/flags.make

CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.o: CMakeFiles/snakes_and_ladders_game.dir/flags.make
CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.o: /home/g209/ros2_ws/src/game/src/board_controller.cpp
CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.o: CMakeFiles/snakes_and_ladders_game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/g209/ros2_ws/build/game/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.o -MF CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.o.d -o CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.o -c /home/g209/ros2_ws/src/game/src/board_controller.cpp

CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/g209/ros2_ws/src/game/src/board_controller.cpp > CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.i

CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/g209/ros2_ws/src/game/src/board_controller.cpp -o CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.s

# Object files for target snakes_and_ladders_game
snakes_and_ladders_game_OBJECTS = \
"CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.o"

# External object files for target snakes_and_ladders_game
snakes_and_ladders_game_EXTERNAL_OBJECTS =

snakes_and_ladders_game: CMakeFiles/snakes_and_ladders_game.dir/src/board_controller.cpp.o
snakes_and_ladders_game: CMakeFiles/snakes_and_ladders_game.dir/build.make
snakes_and_ladders_game: /opt/ros/humble/lib/librclcpp.so
snakes_and_ladders_game: /home/g209/ros2_ws/install/custom_msgs/lib/libcustom_msgs__rosidl_typesupport_fastrtps_c.so
snakes_and_ladders_game: /home/g209/ros2_ws/install/custom_msgs/lib/libcustom_msgs__rosidl_typesupport_introspection_c.so
snakes_and_ladders_game: /home/g209/ros2_ws/install/custom_msgs/lib/libcustom_msgs__rosidl_typesupport_fastrtps_cpp.so
snakes_and_ladders_game: /home/g209/ros2_ws/install/custom_msgs/lib/libcustom_msgs__rosidl_typesupport_introspection_cpp.so
snakes_and_ladders_game: /home/g209/ros2_ws/install/custom_msgs/lib/libcustom_msgs__rosidl_typesupport_cpp.so
snakes_and_ladders_game: /home/g209/ros2_ws/install/custom_msgs/lib/libcustom_msgs__rosidl_generator_py.so
snakes_and_ladders_game: /opt/ros/humble/lib/liblibstatistics_collector.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcl.so
snakes_and_ladders_game: /opt/ros/humble/lib/librmw_implementation.so
snakes_and_ladders_game: /opt/ros/humble/lib/libament_index_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcl_logging_spdlog.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcl_logging_interface.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_py.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcl_yaml_param_parser.so
snakes_and_ladders_game: /opt/ros/humble/lib/libyaml.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_py.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_py.so
snakes_and_ladders_game: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_py.so
snakes_and_ladders_game: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/libtracetools.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/libfastcdr.so.1.0.24
snakes_and_ladders_game: /opt/ros/humble/lib/librmw.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosidl_typesupport_introspection_cpp.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosidl_typesupport_introspection_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosidl_typesupport_cpp.so
snakes_and_ladders_game: /home/g209/ros2_ws/install/custom_msgs/lib/libcustom_msgs__rosidl_typesupport_c.so
snakes_and_ladders_game: /home/g209/ros2_ws/install/custom_msgs/lib/libcustom_msgs__rosidl_generator_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosidl_typesupport_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcpputils.so
snakes_and_ladders_game: /opt/ros/humble/lib/librosidl_runtime_c.so
snakes_and_ladders_game: /opt/ros/humble/lib/librcutils.so
snakes_and_ladders_game: /usr/lib/x86_64-linux-gnu/libpython3.10.so
snakes_and_ladders_game: CMakeFiles/snakes_and_ladders_game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/g209/ros2_ws/build/game/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable snakes_and_ladders_game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/snakes_and_ladders_game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/snakes_and_ladders_game.dir/build: snakes_and_ladders_game
.PHONY : CMakeFiles/snakes_and_ladders_game.dir/build

CMakeFiles/snakes_and_ladders_game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/snakes_and_ladders_game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/snakes_and_ladders_game.dir/clean

CMakeFiles/snakes_and_ladders_game.dir/depend:
	cd /home/g209/ros2_ws/build/game && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/g209/ros2_ws/src/game /home/g209/ros2_ws/src/game /home/g209/ros2_ws/build/game /home/g209/ros2_ws/build/game /home/g209/ros2_ws/build/game/CMakeFiles/snakes_and_ladders_game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/snakes_and_ladders_game.dir/depend

