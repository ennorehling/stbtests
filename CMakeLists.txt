cmake_minimum_required(VERSION 3.22)
project(stbtests C)
include_directories(stb utest)
enable_testing()

add_compile_options(
       -Wall -Werror -Wextra
	$<$<CONFIG:RELEASE>:-Ofast>
	$<$<CONFIG:DEBUG>:-O0>
	$<$<CONFIG:DEBUG>:-ggdb3>
				    )
file(GLOB tests "tests/*.c")
foreach(filename ${tests})
	cmake_path(GET filename STEM test)
	add_executable(${test} main.c ${filename})
	add_test(NAME ${test} COMMAND ${test})
endforeach()

