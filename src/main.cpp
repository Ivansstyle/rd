// main.cpp
// Provides main routine

/// @author Ivans Saponenko
/// @macro iDEBUG = self-defined debug macro

// Includes
#include <iostream>
#include <vector>


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



int main(int argc,char *argv[])
{
    // Checking if there are any arguments
    std::vector<std::string> args;

    for (int a=0; a < argc; ++a) {
            args.push_back(argv[a]);
    }
#ifdef iDEBUG //Printing received arguments in the defined function
    onelineprint("\nPassed in arguments:");
    for (std::string arg : args) {
        std::cout<< arg << "; ";
    }
    onelineprint("\nNo more arguments passed");
#endif

    // Setting filepaths
    std::string dir = args[0];
    std::string dist = args[1];
} // End of program
