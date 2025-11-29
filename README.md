# calico
calico is a game engine designed around how sokol is used.  
thats basically it.  

## design
based around sokol (like i said earlier).  
```c
/* the idea:
    so like uh, sokol, but less codegen.
        (what i mean is, no SHADER.glsl.h, instead you do that yourself lazy ahh)
 */

typedef struct cal_VertAttrDesc {
    cal_GpuFormat format; // scalar type
    int offset;
} cal_VertAttrDesc;

typedef struct cal_VertLayout {
    cal_VertAttrDesc* attrs; // MAY BE STACK ALLOCATED
    int attr_count;
    int stride;
} cal_VertLayout;

/* ^^^^ this will be used as such:

[some vertex layout using function](
    ...
    &(cal_VertLayout){
        .attrs = (cal_VertAttrDesc[]){ {...}, {...}, ... },
        .attr_count = ...,
        .stride = ...
    },
    ...
);

 */

// will use position in enum to determine binding, but this is defined by the user
typedef enum v_attrs {
    ATTR_position,
    ATTR_color0,
    ATTR_COUNT
} v_attrs;

//... blah blah blah, continue later (maybe)

```
