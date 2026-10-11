cmake_minimum_required(VERSION 4.4)

project(
        todo-name
        VERSION 0.0.0
        DESCRIPTION "TODO: Describe library"
        LANGUAGES CXX)

add_library(
        ${PROJECT_NAME}
        INTERFACE
        main.cpp)

target_compile_features(
        ${PROJECT_NAME}
        INTERFACE cxx_std_23)

target_sources(
        ${PROJECT_NAME}
        INTERFACE
        FILE_SET HEADERS
        BASE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/lib"
        FILES "${CMAKE_CURRENT_SOURCE_DIR}/lib/${PROJECT_NAME}.hpp")

if (PROJECT_IS_TOP_LEVEL)
    add_executable(${PROJECT_NAME}-example main.cpp)
    target_link_libraries(
            ${PROJECT_NAME}-example
            PRIVATE ${PROJECT_NAME})
endif ()