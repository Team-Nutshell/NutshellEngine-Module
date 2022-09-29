cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
set(NAME NutshellModule)
project(${NAME} VERSION 0.0.1 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(external/Common)

set(UTILS_HEADERS
	src/utils/ntsh_module_defines.h
	src/utils/ntsh_dynamic_library.h)

set(SOURCES
	src/ntsh_module.cpp)
set(HEADERS ${UTILS_HEADERS}
	src/ntsh_module.h)

add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})

target_link_libraries(${PROJECT_NAME} PRIVATE NutshellEngine::Common)

target_compile_options(${PROJECT_NAME} PRIVATE
	$<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
	$<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Werror>)