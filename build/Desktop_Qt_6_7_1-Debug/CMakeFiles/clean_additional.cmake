# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appTryingCoffee_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appTryingCoffee_autogen.dir/ParseCache.txt"
  "appTryingCoffee_autogen"
  )
endif()
