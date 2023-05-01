cmake_minimum_required(VERSION 3.12)
project(YourProjectName)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

set(PROJECT_NAME showmethedatastructures)

# Add the source files for your project
set(SOURCES
    main.cpp
    ./DataStructures/linkedList/linkedList.cpp
    ./DataStructures/stack/stack.cpp
    ./DataStructures/queue/queue.cpp
)

# Add the header files for your project
set(HEADERS
    ./DataStructures/linkedList/linkedList.h
    ./DataStructures/stack/stack.cpp
    ./DataStructures/queue/queue.cpp
)

# Add the executable target
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
