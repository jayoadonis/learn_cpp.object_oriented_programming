file(GLOB_RECURSE
  learn_cpp.object_oriented_programming.abstraction.CMAKE_PRIVATE_CXX_MAIN_SOURCES
  CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/private/*.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/private/*.cxx
  ${CMAKE_CURRENT_SOURCE_DIR}/private/*.cpp)

set(learn_cpp.object_oriented_programming.abstraction.CMAKE_OBJ_PRIVATE_CXX_MAIN_SOURCES
  ${learn_cpp.object_oriented_programming.abstraction.CMAKE_PRIVATE_CXX_MAIN_SOURCES})

list(FILTER 
  learn_cpp.object_oriented_programming.abstraction.CMAKE_OBJ_PRIVATE_CXX_MAIN_SOURCES
  EXCLUDE REGEX "main\\.(cc|cxx|cpp)")

add_library(${PROJECT_NAME}_target_main_obj OBJECT)
add_library(learn_cpp.object_oriented_programming::${PROJECT_NAME}_obj
  ALIAS ${PROJECT_NAME}_target_main_obj)

set_target_properties(${PROJECT_NAME}_target_main_obj
  PROPERTIES
  OUTPUT_NAME
  ${learn_cpp.object_oriented_programming.abstraction.CMAKE_GENEXP_PROJECT_OUTPUT_NAME})

target_sources(${PROJECT_NAME}_target_main_obj
  PRIVATE
  # FILE_SET TYPE CXX FILES
  ${learn_cpp.object_oriented_programming.abstraction.CMAKE_OBJ_PRIVATE_CXX_MAIN_SOURCES})

target_include_directories(
  ${PROJECT_NAME}_target_main_obj
  PUBLIC
  #REM: For testing, however, at 'install' don't include
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/private>
  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/public>
  $<INSTALL_INTERFACE:${learn_cpp.object_oriented_programming.abstraction.CMAKE_INSTALL_DESTINATION_INCLUDE_DIR}>)

# install(TARGETS
#   ${PROJECT_NAME}_target_main_obj
#   EXPORT ${PROJECT_NAME}_targets
  
#   ARCHIVE DESTINATION 
#   ${learn_cpp.object_oriented_programming.abstraction.CMAKE_INSTALL_DESTINATION_LIB_DIR}
#   COMPONENT
#   ${learn_cpp.object_oriented_programming.abstraction.CMAKE_INSTALL_COMPONENT_NAME})

# install(
#   DIRECTORY
#   ${CMAKE_CURRENT_SOURCE_DIR}/public/
#   DESTINATION
#   ${learn_cpp.object_oriented_programming.abstraction.CMAKE_INSTALL_DESTINATION_INCLUDE_DIR}
  
#   COMPONENT
#   ${learn_cpp.object_oriented_programming.abstraction.CMAKE_INSTALL_COMPONENT_NAME}
  
#   FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp")