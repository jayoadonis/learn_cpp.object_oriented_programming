```cmake
cmake_minimum_required(VERSION 3.12)
project(CrossPlatformStackTrace CXX)

# Force C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. ADD TARGET EXECUTABLE
add_executable(my_program main.cpp)

# 2. PLATFORM SPECIFIC CONFIGURATIONS (Linux / macOS / Windows)
if(MSVC)
    # --- WINDOWS OPTIMIZATIONS ---
    # Force MSVC to generate a .pdb file even in Release mode (/Zi)
    # and tell the linker to package it (/DEBUG)
    target_compile_options(my_program PRIVATE $<$<CONFIG:Release>:/Zi>)
    target_link_options(my_program PRIVATE $<$<CONFIG:Release>:/DEBUG /OPT:REF /OPT:ICF>)
    
    # Automatically link the Windows debugging library
    target_link_libraries(my_program PRIVATE dbghelp)

else()
    # --- LINUX & MACOS OPTIMIZATIONS ---
    # Force GCC/Clang to keep debug information (-g) in Release mode
    target_compile_options(my_program PRIVATE $<$<CONFIG:Release>:-g>)
    
    if(CMAKE_SYSTEM_NAME MATCHES "Linux")
        # Linux strictly requires -rdynamic so functions aren't hidden
        target_link_options(my_program PRIVATE -rdynamic)
        
    elseif(CMAKE_SYSTEM_NAME MATCHES "Darwin")
        # macOS handles dynamic lookup automatically, but needs frames preserved
        target_compile_options(my_program PRIVATE -fno-omit-frame-pointer)
    endif()
endif()

```