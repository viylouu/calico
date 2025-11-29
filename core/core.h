#pragma once

#ifndef cal_assert
    #include <stdio.h>
    #include <stdlib.h>
    #define cal_assert(cond) do { \
        if (!(cond)) { \
            printf("ASSERTION FAILED! (%s) (\"%s\":%d)\n", #cond, __FILE__, __LINE__); \
            exit(1); \
        } \
    } while(0)
#endif

#ifndef cal_unreachable
    #include <stdio.h>
    #include <stdlib.h>
    #define cal_unreachable() do { \
        printf("UNREACHABLE! (\"%s\":%d)\n", __FILE__, __LINE__); \
        exit(1); \
    } while (0)
#endif

#ifdef cal_unused
    #define cal_unused(var) \
        (void)(var)
#endif
