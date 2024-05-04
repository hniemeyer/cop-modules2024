cmake_minimum_required(VERSION 3.28)
project(copmodules2024 CXX)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 23)

Include(FetchContent)

# doctest
FetchContent_Declare(
    doctest
    GIT_REPOSITORY https://github.com/doctest/doctest.git
    # corresponds to doctest v2.4.11 - good practice to specify the commit hash as tags can be moved
    GIT_TAG "ae7a13539fb71f270b87eb2e874fbac80bc8dda2" )

# make the dependencies available to the build system
FetchContent_MakeAvailable(doctest)

include(CTest)

add_subdirectory(math)
add_subdirectory(app)
add_subdirectory(math_test)