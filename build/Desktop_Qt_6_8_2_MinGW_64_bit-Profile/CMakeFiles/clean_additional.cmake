# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "RelWithDebInfo")
  file(REMOVE_RECURSE
  "CMakeFiles\\SmartRecord_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SmartRecord_autogen.dir\\ParseCache.txt"
  "SmartRecord_autogen"
  )
endif()
