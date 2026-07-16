file(GLOB_RECURSE
  learn_cpp.object_oriented_programming.inheritance.CMAKE_PRIVATE_CXX_MAIN_SOURCES
  CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/private/*.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/private/*.cxx
  ${CMAKE_CURRENT_SOURCE_DIR}/private/*.cpp)

add_library(${PROJECT_NAME}_target_main_static STATIC)
add_librarY(learn_cpp.object_oriented_programming::${PROJECT_NAME}_static
  ALIAS ${PROJECT_NAME}_target_main_static)

set_target_properties(${PROJECT_NAME}_target_main_static
  PROPERTIES
  OUTPUT_NAME
  ${learn_cpp.object_oriented_programming.inheritance.CMAKE_GENEXP_OUTPUT_NAME})

target_sources(${PROJECT_NAME}_target_main_static
  PRIVATE
  # FILE_SET TYPE CXX FILES
  ${learn_cpp.object_oriented_programming.inheritance.CMAKE_PRIVATE_CXX_MAIN_SOURCES})

target_include_directories(${PROJECT_NAME}_target_main_static
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/private
  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/public>
  $<INSTALL_INTERFACE:${learn_cpp.object_oriented_programming.inheritance.CMAKE_INSTALL_INFIX_DIR}/include>)

install(TARGETS
  ${PROJECT_NAME}_target_main_static
  EXPORT ${PROJECT_NAME}_targets
  
  ARCHIVE DESTINATION ${learn_cpp.object_oriented_programming.inheritance.CMAKE_INSTALL_INFIX_DIR}/lib
  COMPONENT ${learn_cpp.object_oriented_programming.inheritance.CMAKE_INSTALL_COMPONENT_NAME}
  
  LIBRARY DESTINATION ${learn_cpp.object_oriented_programming.inheritance.CMAKE_INSTALL_INFIX_DIR}/lib
  COMPONENT ${learn_cpp.object_oriented_programming.inheritance.CMAKE_INSTALL_COMPONENT_NAME}
  
  RUNTIME DESTINATION ${learn_cpp.object_oriented_programming.inheritance.CMAKE_INSTALL_INFIX_DIR}/bin
  COMPONENT ${learn_cpp.object_oriented_programming.inheritance.CMAKE_INSTALL_COMPONENT_NAME})

install(
  DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/public/
  DESTINATION ${learn_cpp.object_oriented_programming.inheritance.CMAKE_INSTALL_INFIX_DIR}/include
  COMPONENT
  ${learn_cpp.object_oriented_programming.inheritance.CMAKE_INSTALL_COMPONENT_NAME}
  FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp")

install(
  EXPORT ${PROJECT_NAME}_targets
  FILE ${PROJECT_NAME}-targets.cmake
  NAMESPACE learn_cpp.object_oriented_programming::
  DESTINATION ${learn_cpp.object_oriented_programming.inheritance.CMAKE_INSTALL_INFIX_DIR}/lib/cmake/${PROJECT_NAME}
  COMPONENT
  ${learn_cpp.object_oriented_programming.inheritance.CMAKE_INSTALL_COMPONENT_NAME})


file(MAKE_DIRECTORY ${learn_cpp.object_oriented_programming.inheritance.CMAKE_GENERATE_DIR})

include(CmakePackageConfigHelpers)
write_basic_package_version_file(
  ${learn_cpp.object_oriented_programming.inheritance.CMAKE_GENERATE_DIR}/${PROJECT_NAME}-config-version.cmake
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY SameMajorVersion)

file(WRITE
  ${learn_cpp.object_oriented_programming.inheritance.CMAKE_GENERATE_DIR}/${PROJECT_NAME}-config.cmake
  "include(\"\${CMAKE_CURRENT_LIST_DIR}/\${PROJECT_NAME}-targets.cmake\")")

install(
  FILES
  ${learn_cpp.object_oriented_programming.inheritance.CMAKE_GENERATE_DIR}/${PROJECT_NAME}-config.cmake
  ${learn_cpp.object_oriented_programming.inheritance.CMAKE_GENERATE_DIR}/${PROJECT_NAME}-config-version.cmake
  DESTINATION ${learn_cpp.object_oriented_programming.inheritance.CMAKE_INSTALL_INFIX_DIR}/lib/cmake/${PROJECT_NAME}
  COMPONENT 
  ${learn_cpp.object_oriented_programming.inheritance.CMAKE_INSTALL_COMPONENT_NAME})