cmake_minimum_required(VERSION 3.26)
project(hello_world_etc)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        hello_world_etc src/main.cpp
        src/InputOutputPractice.cpp
        src/InputOutputPractice.h
        src/stringyPractice.cpp
        src/stringyPractice.h
        src/CodilityPractice.cpp
        src/CodilityPractice.h
)

# catch2 unit testing stuff
Include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.0.1 # or a later release
)
FetchContent_MakeAvailable(Catch2)

# add test file executable(s)
add_executable(tests test/test_helloWorld.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
