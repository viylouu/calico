cmake_minimum_required(VERSION 3.23)

project(calico)

add_executable(out)

target_sources(out
    PRIVATE
        core/platf/platf.c
        core/core.c
        impls/platf/glfw/glfw.c
        impls/platf/glfw/glfwimpl.c
        state/state.c
        src/main.c
)

target_include_directories(out
    PRIVATE
        .
        calico
)

target_compile_options(out
    PRIVATE
        -pedantic
        -Wall
        -Wextra
        -flto
        -std=c99
)

set(MODE "release" CACHE STRING "build mode")

if (MODE STREQUAL "debug")
    target_compile_options(out PRIVATE -g -O0)
else ()
    target_compile_options(out PRIVATE -O2)
endif ()

target_link_options(out
    PRIVATE
        -flto
)
