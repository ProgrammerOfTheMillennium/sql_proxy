cmake_minimum_required(VERSION 3.5)
project(proxy)

# gcc
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -O0 -g3 -Wall")
# folders
set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")
set(LIBRARY_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

# search for headers
include_directories(
        include
        lib
)

# compile subprojects too (libs)
add_subdirectory(lib)
add_subdirectory(test)

# set project soruces
add_executable(proxy_bin src/main.cpp)

# add libraries to executable
target_link_libraries(proxy_bin proxy_lib)

