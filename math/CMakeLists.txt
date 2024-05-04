add_library(math)
# Add the module file to the library
target_sources(math
  PUBLIC
    FILE_SET CXX_MODULES FILES
      math.cpp
      math_arithmetic.cpp
      math_print.cpp
      math_concepts.cpp)