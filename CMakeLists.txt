cmake_minimum_required(VERSION 3.22)
project(stbtests C)
include_directories(stb utest)

add_executable(stb_ds main.c tests/stb_ds.c)
