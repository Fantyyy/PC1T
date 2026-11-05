# CMakeList.txt : CMake project for prunik, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (prunik "prunik.cpp" "prunik.h" "par.h" "par.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET prunik PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
