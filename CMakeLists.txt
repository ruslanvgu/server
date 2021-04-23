cmake_minimum_required(VERSION 3.16)

include_directories(include)

#file(GLOB SOURCES "src/*.cpp")

#add_executable(server ${SOURCES})

add_executable(server src/main.cpp include/ManagerConnection.h src/ManagerConnection.cpp)