CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_EXECUTABLE(runGame
    src/room.cpp
    src/Player.cpp 
    src/Type_A.cpp 
    src/Type_B.cpp 
    src/Type_C.cpp 
    main.cpp
    src/Output.cpp 
    src/wrongInput.cpp 
    
)

ADD_EXECUTABLE(Tests
    tests/outputTests.cpp
    tests/playerTests.cpp
    tests/roomTests.cpp
    tests/typeATests.cpp
    tests/typeBTests.cpp
    tests/typeCTests.cpp
)