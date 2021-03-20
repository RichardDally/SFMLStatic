cmake_minimum_required(VERSION 2.8.7)



project(StaticExample CXX)



set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SFML_STATIC_LIBRARIES TRUE)

set(CMAKE_C_COMPILER /usr/bin/gcc)

set(CMAKE_CXX_COMPILER /usr/bin/g++)

set(SFML_COMPONENTS system window graphics audio)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})



find_package(OpenGL)

find_package(SFML 2 REQUIRED system window graphics audio)



include_directories(${SFML_INCLUDE_DIR})

add_executable(StaticExample main.cpp)

target_link_libraries(StaticExample ${SFML_LIBRARIES} ${SFML_DEPENDENCIES} ${OPENGL_LIBRARIES} ${CMAKE_DL_LIBS} -pthread)

