cmake_minimum_required(VERSION 3.20)

project(spore-meta-example)

find_package(spore-meta CONFIG REQUIRED)
find_package(spore-codegen CONFIG REQUIRED)

list(APPEND CMAKE_MODULE_PATH ${SPORE_META_SCRIPTS} ${SPORE_CODEGEN_SCRIPTS})

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} src/main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE include)

target_link_libraries(${PROJECT_NAME} spore::spore-meta)

include(SporeMeta)

spore_add_meta(${PROJECT_NAME})