# module implementation unit MUST NOT be part of the FILE_SET CXX_MODULES (strange error messages)
add_library(math math_geometry_impl.cpp)
# Add the module file to the library
target_sources(math
  PUBLIC
    FILE_SET CXX_MODULES FILES
      math.cpp
      math_statistics.cpp
      math_print.cpp
      math_concepts.cpp
      math_geometry.cpp)