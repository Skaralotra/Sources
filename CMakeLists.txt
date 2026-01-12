cmake_minimum_required(VERSION 4.1)
project(Sources_repo C)

set(CMAKE_C_STANDARD 11)

include_directories(Sources/include)

add_executable(Sources_repo
        Sources/include/define.h
        Sources/include/error.h
        Sources/include/my_print.h
        Sources/include/nbr.h
        Sources/include/str.h
        Sources/include/tab.h
        Sources/include/typedef.h
        Sources/lib/error/call_error.c
        Sources/lib/my_print/flag_char.c
        Sources/lib/my_print/flag_nbr.c
        Sources/lib/my_print/flag_str.c
        Sources/lib/my_print/flag_tab.c
        Sources/lib/my_print/my_print.c
        Sources/lib/nbr/display_base.c
        Sources/lib/nbr/display_nbr.c
        Sources/lib/nbr/nbr_len.c
        Sources/lib/nbr/power.c
        Sources/lib/nbr/str_to_nbr.c
        Sources/lib/str/concat_stack.c
        Sources/lib/str/concat_str.c
        Sources/lib/str/create_str.c
        Sources/lib/str/display_error.c
        Sources/lib/str/display_str.c
        Sources/lib/str/nbr_to_str.c
        Sources/lib/str/str_identical.c
        Sources/lib/str/str_len.c
        Sources/lib/tab/concat_tab.c
        Sources/lib/tab/create_tab.c
        Sources/lib/tab/display_tab.c
        Sources/lib/tab/free_tab.c
        Sources/lib/tab/tab_len.c
        Sources/src/main.c
        Sources/lib/error/error_free.c)
