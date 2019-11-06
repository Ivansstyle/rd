#ifndef TESTPROCESS_HPP
#define TESTPROCESS_HPP

//#ifndef iDEBUG
//#define iDEBUG
//#endif

#include <iostream>

#include "include/process.hpp"


class testprocess : public process
{
public:
    testprocess();
    int run();
};

#endif // TESTPROCESS_HPP
