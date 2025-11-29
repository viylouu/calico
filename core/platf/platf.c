#include "platf.h"

#include <state/state.h>

/* FUNCS */

void calp_start(calp_Desc* desc) {
    state.p_impl = desc->impl;
    state.p_impl->start(state.p_impl, desc->title, desc->width,desc->height);
}

void calp_stop(void) {
    state.p_impl->stop(state.p_impl);
}
