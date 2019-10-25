// main.cpp
// Provides main routine

/// @author Ivans Saponenko
/// @macro iDEBUG = self-defined debug macro
/// @abstract Setting the globals and uptime of the software

// Includes
#include <iostream>
#include <vector>
#include <chrono> ///@TODO Set-up application timing


// Define DEBUG to print debug info to the terminal
#ifndef iDEBUG
#define iDEBUG
#endif

#ifdef iDEBUG
void onelineprint(std::string s)
{
    std::cout<< s << " \n";
}
#endif

// Defining globals
static std::string dir;
static std::string dist;

int main(int argc,char *argv[])
{
    // Reading the arguments
    std::vector<std::string> args;

    for (int a=0; a < argc; ++a) {
            args.push_back(argv[a]);
    }
#ifdef iDEBUG // @DEBUG Printing received arguments
    onelineprint("\nPassed in arguments:");
    for (std::string arg : args) {
        std::cout<< arg << "; ";
    }
    onelineprint("\nNo more arguments passed");
#endif

    // Setting filepaths
    dir = args[0];
    dist = args[1];

} // End of program
