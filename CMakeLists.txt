cmake_minimum_required(VERSION 3.22)
project(reader)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/aa2e91fd6918519dafa3bee4aa706d04857e7d06.zip
)
FetchContent_MakeAvailable(googletest)

file(GLOB SRC_FILES *.cpp)
add_executable(reader ${SRC_FILES})

target_link_libraries(reader gtest_main gmock)

add_test(NAME reader COMMAND reader)