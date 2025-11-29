#include <core/platf/platf.h>
#include <impls/platf/glfw/glfw.h>

int main(void) {
    calp_start(&(calp_Desc){
            .impl = calp_glfw_get_impl(),
            .title = "title",
            .width = 800,
            .height = 600
        });
    
    calp_stop();
    return 0;
}
