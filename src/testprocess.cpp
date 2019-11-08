#include "include/testprocess.hpp"

testprocess::testprocess()
{
    tracer = SDFSimpleTracer();
}

int testprocess::run()
{
    std::cout<<"running the tracer\n";
    tracer.trace();
    std::cout<<"Test process has finished running\n";
    return 0;
}

// End of testprocess class
