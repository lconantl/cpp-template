cmake_minimum_required(VERSION 4.4)

project(
        todo-name
        VERSION 0.0.0
        DESCRIPTION "TODO: Describe console application"
        LANGUAGES CXX)

# TODO: Добавить исходные файлы приложения
add_executable(
        ${PROJECT_NAME}
        src/main.cpp)

if (MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /std:c++latest)
else ()
    target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_23)
endif ()
