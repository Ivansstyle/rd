#ifndef TESTPROCESS_HPP
#define TESTPROCESS_HPP

//#ifndef iDEBUG
//#define iDEBUG
//#endif

//#include <iostream>

#include "include/process.hpp"
#include "sdf/src/SDFSimpleTracer.h"

class testprocess : public process
{
public:
    testprocess();

    int run();
    void kill();

    bool running = false;
private:
    SDFSimpleTracer tracer;
};

#endif // TESTPROCESS_HPP
