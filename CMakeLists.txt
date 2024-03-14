cmake_minimum_required(VERSION 3.0)
project(finalProject)

# Include the GoogleTest library
add_subdirectory(googletest)

# Define your source files
set(SRC_FILES
    src/room.cpp
    src/Player.cpp 
    src/Type_A.cpp 
    src/Type_B.cpp 
    src/Type_C.cpp 
    src/Output.cpp 
    src/wrongInput.cpp 
)

# Main executable
add_executable(runGame
    main.cpp
    ${SRC_FILES}
)

# Test executable
add_executable(test
    tests/outputTests.cpp
    tests/playerTests.cpp
    tests/roomTests.cpp
    tests/typeATests.cpp
    tests/typeBTests.cpp
    tests/typeCTests.cpp
    ${SRC_FILES}
)

# Link against GoogleTest
target_link_libraries(test gtest)
target_compile_definitions(test PRIVATE gtest_disable_pthreads=ON)


# CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

# project(finalProject)

# ADD_SUBDIRECTORY(googletest)

# ADD_EXECUTABLE(runGame
#     src/room.cpp
#     src/Player.cpp 
#     src/Type_A.cpp 
#     src/Type_B.cpp 
#     src/Type_C.cpp 
#     main.cpp
#     src/Output.cpp 
#     src/wrongInput.cpp 

# )

# ADD_EXECUTABLE(test
#     tests/outputTests.cpp
#     tests/playerTests.cpp
#     tests/roomTests.cpp
#     # tests/typeATests.cpp
#     # tests/typeBTests.cpp
#     # tests/typeCTests.cpp
# )

# TARGET_LINK_LIBRARIES(test gtest)
# TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)