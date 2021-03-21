cmake_minimum_required(VERSION 3.1.0)

project(StaticExample CXX)

set(PROJECT_NAME StaticExample)
set(SFML_STATIC_LIBRARIES TRUE)

find_package(SFML 2 REQUIRED system window graphics audio)

add_executable(${PROJECT_NAME} main.cpp)

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    target_compile_options(${PROJECT_NAME} PRIVATE "$<$<CONFIG:Debug>:/MTd>")
    target_compile_options(${PROJECT_NAME} PRIVATE "$<$<CONFIG:Release>:/MT>")
    target_compile_options(${PROJECT_NAME} PRIVATE "$<$<CONFIG:RelWithDebInfo>:/MT>")
    target_compile_options(${PROJECT_NAME} PRIVATE "$<$<CONFIG:MinSizeRel>:/MT>")
endif()

target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window sfml-audio sfml-system)
