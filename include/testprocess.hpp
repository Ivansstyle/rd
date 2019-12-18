#ifndef TESTPROCESS_HPP
#define TESTPROCESS_HPP

//#ifndef iDEBUG
//#define iDEBUG
//#endif


#include "include/process.hpp"
#include "sdf/src/SDFSimpleTracer.hpp"

class testprocess : public process
{
public:
    testprocess();
    ~testprocess();

    int run();
    void kill();

    bool running = false;
private:
    SDFSimpleTracer tracer;

};

#endif // TESTPROCESS_HPP
