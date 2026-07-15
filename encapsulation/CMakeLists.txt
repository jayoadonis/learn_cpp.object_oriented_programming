cmake_minimum_required(VERSION 3.28)
project(encapsulation
  VERSION 0.1.0
  DESCRIPTION ""
  HOMEPAGE_URL ""
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#REM: work with 'single-config', with the exception for 'ninja multi-config'
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Build type" FORCE)
endif()

set(learn_cpp.object_oriented_programming.encapsulation.CMAKE_GENEXP_OUTPUT_NAME
  $<LOWER_CASE:${PROJECT_NAME}-${PROJECT_VERSION}-$<CONFIG>-$<PLATFORM_ID>>)

set(learn_cpp.object_oriented_programming.encapsulation.CMAKE_INSTALL_INFIX_DIR
  ${PROJECT_NAME}/${PROJECT_VERSION})

string(TOLOWER "${PROJECT_NAME}_component"
  learn_cpp.object_oriented_programming.encapsulation.CMAKE_INSTALL_COMPONENT_NAME)

#REM: 'ON' by default, we can set -DBUILD_TESTING=OFF
include(CTest) 

add_subdirectory(src/main/cpp)
if(BUILD_TESTING)
  add_subdirectory(src/test/cpp)
endif()

include(CPack)