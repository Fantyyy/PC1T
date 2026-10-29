# CMakeList.txt : CMake project for knihovna, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (knihovna "knihovna.cpp" "knihovna.h" "Body2d.h" "Body2d.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET knihovna PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
