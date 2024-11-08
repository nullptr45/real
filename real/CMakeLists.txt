cmake_minimum_required(VERSION 3.16)
project(real-engine)

add_library(real-engine)

file(GLOB_RECURSE REAL_SOURCES CONFIGURE_DEPENDS src/*.cpp)
target_sources(${PROJECT_NAME} PRIVATE ${REAL_SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC src)
