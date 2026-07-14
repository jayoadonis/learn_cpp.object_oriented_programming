
file(GLOB_RECURSE
  learn_cpp.object_oriented_programming.encapsulation.CMAKE_PRIVATE_CXX_MAIN_SOURCES
  CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/private/*.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/private/*.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/private/*.cxx

  # ${CMAKE_CURRENT_SOURCE_DIR}/private/*.ixx
  # ${CMAKE_CURRENT_SOURCE_DIR}/private/*.cppm
)

# file(GLOB_RECURSE
# learn_cpp.object_oriented_programming.encapsulation.CMAKE_PUBLIC_CXX_MAIN_SOURCES
# CONFIGURE_DEPENDS
# ${CMAKE_CURRENT_SOURCE_DIR}/public/*.cc
# ${CMAKE_CURRENT_SOURCE_DIR}/public/*.cpp
# ${CMAKE_CURRENT_SOURCE_DIR}/public/*.cxx
# ${CMAKE_CURRENT_SOURCE_DIR}/public/*.ixx
# ${CMAKE_CURRENT_SOURCE_DIR}/public/*.cppm)
add_executable(${PROJECT_NAME}_target_main_app)

set_target_properties(${PROJECT_NAME}_target_main_app
  PROPERTIES
  OUTPUT_NAME
  ${learn_cpp.object_oriented_programming.encapsulation.CMAKE_GENEXP_OUTPUT_NAME})

target_sources(${PROJECT_NAME}_target_main_app
  PRIVATE
  # FILE_SET TYPE CXX FILES
  ${learn_cpp.object_oriented_programming.encapsulation.CMAKE_PRIVATE_CXX_MAIN_SOURCES})

target_include_directories(${PROJECT_NAME}_target_main_app
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/private

  # PUBLIC
  # $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/public>
  # $<INSTALL_INTERFACE:include>
)


set(learn_cpp.object_oriented_programming.encapsulation.CMAKE_PRIVATE_OBJ_CXX_MAIN_SOURCES
  ${learn_cpp.object_oriented_programming.encapsulation.CMAKE_PRIVATE_CXX_MAIN_SOURCES})
list(FILTER
  learn_cpp.object_oriented_programming.encapsulation.CMAKE_PRIVATE_OBJ_CXX_MAIN_SOURCES
  EXCLUDE REGEX "main\\.(cc|cxx|cpp)$")

add_library(${PROJECT_NAME}_target_main_lib OBJECT)
add_library(
  learn_cpp.object_oriented_programming::${PROJECT_NAME}
  ALIAS ${PROJECT_NAME}_target_main_lib)

set_target_properties(${PROJECT_NAME}_target_main_lib
  PROPERTIES
  OUTPUT_NAME
  ${learn_cpp.object_oriented_programming.encapsulation.CMAKE_GENEXP_OUTPUT_NAME})

target_sources(${PROJECT_NAME}_target_main_lib
  PRIVATE
  # FILE_SET TYPE CXX FILES
  ${learn_cpp.object_oriented_programming.encapsulation.CMAKE_PRIVATE_OBJ_CXX_MAIN_SOURCES})

target_include_directories(${PROJECT_NAME}_target_main_lib
  # PRIVATE
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/private

  # PUBLIC
  # $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/public>
  # $<INSTALL_INTERFACE:include>
)

install(TARGETS
  ${PROJECT_NAME}_target_main_app
  # deps_library_target_i
  # deps_library_target_ii

  ARCHIVE DESTINATION lib
  COMPONENT ${learn_cpp.object_oriented_programming.encapsulation.CMAKE_INSTALL_COMPONENT_NAME}

  LIBRARY DESTINATION lib
  COMPONENT ${learn_cpp.object_oriented_programming.encapsulation.CMAKE_INSTALL_COMPONENT_NAME}

  RUNTIME DESTINATION bin
  COMPONENT ${learn_cpp.object_oriented_programming.encapsulation.CMAKE_INSTALL_COMPONENT_NAME})

# install(
# DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/public/
# DESTINATION include
# COMPONENT ${PROJECT_NAME}_component
# FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp")
