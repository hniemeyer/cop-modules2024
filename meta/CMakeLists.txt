# module implementation unit MUST NOT be part of the FILE_SET CXX_MODULES (strange error messages)
add_library(meta)
# Add the module file to the library
target_sources(meta
  PUBLIC
    FILE_SET CXX_MODULES FILES
      meta.cpp
    )