#pragma once

#include <core/core.h>

/* TYPES */

typedef struct calp_Impl calp_Impl;
struct calp_Impl {
    void* state;

    void (*start)(calp_Impl* self, char* title, int width, int height);
    void (*stop)(calp_Impl* self);
};

typedef struct calp_Desc {
    calp_Impl* impl;

    char* title;
    int width;
    int height;
} calp_Desc;

/* FUNCS */

void calp_start(calp_Desc* desc);
void calp_stop(void);
