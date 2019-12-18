#ifndef SDFSIMPLETRACER_H
#define SDFSIMPLETRACER_H

#include <iostream>

struct vec4{
    float x;
    float y;
    float z;
    float w;
};


struct vec3{
    float x;
    float y;
    float z;
};


class SDFSimpleTracer
{
public:
    SDFSimpleTracer();
    bool trace();

private:
    vec3 object;
};

#endif // SDFSIMPLETRACER_H
