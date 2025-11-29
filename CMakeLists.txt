cmake_minimum_required(VERSION 3.23)

project(calico)

add_executable(out)

target_sources(out
    PRIVATE
        core/platf/platf.c
        src/main.c
)

target_include_directories(out
    PRIVATE
        .
        calico
)

target_compile_options(out
    PRIVATE
        -Wall
        -Wextra
        -O3
        -flto
        -std=c99
)

target_link_options(out
    PRIVATE
        -flto
)
