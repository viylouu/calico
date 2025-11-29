#pragma once

#include <core/core.h>

#include <core/platf/platf.h>

typedef struct cal_State {
    calp_Impl* p_impl; // haha pimple
} cal_State;

extern cal_State state;
