cmake_minimum_required(VERSION 3.20)
project(debug_warmup LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip 
)

FetchContent_MakeAvailable(googletest)
enable_testing()
include(CTest)
include(GoogleTest)
add_subdirectory(tests)

add_library(debugging_lib src/dw.cpp)
target_include_directories(debugging_lib PUBLIC include)

add_executable(debug_warmup app/main.cpp)
target_link_libraries(debug_warmup PRIVATE debugging_lib)

