cmake_minimum_required(VERSION 3.10)
project(cookienumberprinter)

set(CMAKE_CXX_STANDARD 14)

find_package(Boost REQUIRED COMPONENTS)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIR})
    message("-- Boost found: ${Boost_VERSION_STRING}")
    set(Boost_USE_STATIC_LIBS ON)
    set(Boost_USE_MULTITHREADED ON)
    set(Boost_USE_STATIC_RUNTIME ON)
else()
    message(FATAL_ERROR "Boost not found!")
endif()

add_executable(cookienumberprinter main.cpp)

if(Boost_FOUND)
    target_link_libraries (cookienumberprinter ${Boost_LIBRARIES})
else()
    message(FATAL_ERROR "Boost not found!")
endif()
