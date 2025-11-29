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

#ifndef cal_unused
    #define cal_unused(var) \
        (void)(var)
#endif

#ifndef cal_alloc
    #include <stdlib.h>
    #define cal_alloc(count, type) \
        malloc(sizeof(type) * (count))
#endif

#ifndef cal_realloc
    #include <stdlib.h>
    #define cal_realloc(prev, new_count, type) \
        realloc((prev), sizeof(type) * (new_count))
#endif

#ifndef cal_free
    #include <stdlib.h>
    #define cal_free(var) \
        free(var)
#endif

