cmake_minimum_required(VERSION 3.10)
project(ChaosGomokuUtils)

add_library(ChaosGomokuUtils SHARED ChaosGomokuUtils.cpp ChaosGomokuUtils.h)

target_include_directories(ChaosGomokuUtils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(ChaosGomokuUtils PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ChaosGomokuUtils PROPERTY CXX_STANDARD 20)
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")

