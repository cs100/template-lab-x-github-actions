CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(tests/googletest)

ADD_EXECUTABLE(area_calculator
    src/main.cpp
    src/rectangle.cpp
)

ADD_EXECUTABLE(test
    src/testMain.cpp
    tests/test.cpp
    src/rectangle.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
