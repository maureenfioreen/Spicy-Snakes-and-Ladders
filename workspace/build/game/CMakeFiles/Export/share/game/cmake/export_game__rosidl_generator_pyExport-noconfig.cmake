#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "game::game__rosidl_generator_py" for configuration ""
set_property(TARGET game::game__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(game::game__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgame__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libgame__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS game::game__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_game::game__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libgame__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
