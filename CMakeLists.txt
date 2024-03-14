cmake_minimum_required(VERSION 3.0)
project(finalProject)
add_subdirectory(googletest)

set(SRC_FILES
    src/room.cpp
    src/Player.cpp 
    src/Type_A.cpp 
    src/Type_B.cpp 
    src/Type_C.cpp 
    src/Output.cpp 
    src/wrongInput.cpp 
)

add_executable(runGame
    main.cpp
    ${SRC_FILES}
)

ADD_EXECUTABLE(test
    tests/outputTests.cpp
    tests/playerTests.cpp
    tests/roomTests.cpp
    tests/typeATests.cpp
    tests/typeBTests.cpp
    tests/typeCTests.cpp
    ${SRC_FILES}
)

target_link_libraries(test gtest)
target_compile_definitions(test PRIVATE gtest_disable_pthreads=ON)