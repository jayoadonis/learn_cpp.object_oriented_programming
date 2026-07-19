file(GLOB_RECURSE
  learn_cpp.object_oriented_programming.abstraction.CMAKE_PRIVATE_CXX_TEST_SOURCES
  CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/private/*.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/private/*.cxx
  ${CMAKE_CURRENT_SOURCE_DIR}/private/*.cpp)

add_executable(${PROJECT_NAME}_target_test_app)

set_target_properties(${PROJECT_NAME}_target_test_app
  PROPERTIES
  OUTPUT_NAME ${learn_cpp.object_oriented_programming.abstraction.CMAKE_GENEXP_PROJECT_OUTPUT_NAME})

target_compile_options(${PROJECT_NAME}_target_test_app
  PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/UNDEBUG>
  $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-UNDEBUG>)

target_sources(${PROJECT_NAME}_target_test_app
  PRIVATE
  # FILE_SET TYPE CXX FILES
  ${learn_cpp.object_oriented_programming.abstraction.CMAKE_PRIVATE_CXX_TEST_SOURCES})

target_include_directories(${PROJECT_NAME}_target_test_app
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/private)

target_link_libraries(${PROJECT_NAME}_target_test_app
  PRIVATE
  learn_cpp.object_oriented_programming::abstraction_obj)

add_test(NAME ${PROJECT_NAME}_unit_test
  COMMAND ${PROJECT_NAME}_target_test_app unit)
set_tests_properties(${PROJECT_NAME}_unit_test
  PROPERTIES LABELS "unit_test")

add_test(NAME ${PROJECT_NAME}_integration_test
  COMMAND ${PROJECT_NAME}_target_test_app integration)
set_tests_properties(${PROJECT_NAME}_integration_test
  PROPERTIES LABELS "integration_test")