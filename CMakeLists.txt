cmake_minimum_required(VERSION 2.8...3.15)

project(family)

set(CMAKE_CXX_STANDARD 11)

find_package(SWIG 4.0)
find_package(Python3 REQUIRED COMPONENTS Development)

include(${SWIG_USE_FILE})

set_property(SOURCE family.i PROPERTY CPLUSPLUS ON)

swig_add_library(${PROJECT_NAME}
    LANGUAGE python
    TYPE SHARED
    SOURCES family.i lib/parent.cpp lib/child.cpp
)

add_subdirectory(py_test)

set_property(TARGET ${PROJECT_NAME}
    PROPERTY
    SWIG_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}
)

set_property(TARGET ${PROJECT_NAME}
    PROPERTY
    INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE Python3::Python
)

if(APPLE)
    set_target_properties(${PROJECT_NAME}
        PROPERTIES
        SUFFIX ".so"
    )
endif()
