# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_snakes_and_ladders_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED snakes_and_ladders_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(snakes_and_ladders_FOUND FALSE)
  elseif(NOT snakes_and_ladders_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(snakes_and_ladders_FOUND FALSE)
  endif()
  return()
endif()
set(_snakes_and_ladders_CONFIG_INCLUDED TRUE)

# output package information
if(NOT snakes_and_ladders_FIND_QUIETLY)
  message(STATUS "Found snakes_and_ladders: 0.0.0 (${snakes_and_ladders_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'snakes_and_ladders' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${snakes_and_ladders_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(snakes_and_ladders_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${snakes_and_ladders_DIR}/${_extra}")
endforeach()
