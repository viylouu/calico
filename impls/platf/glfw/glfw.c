#include "glfw.h"

/* FUNCS */

calp_Impl* calp_glfw_get_impl(void) {
    calp_Impl* impl = cal_alloc(1, calp_Impl);
    return impl;
}
