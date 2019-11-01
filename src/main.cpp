/// @name main.cpp
/// @author Ivans Saponenko
/// @macro iDEBUG = self-defined debug macro
/// @abstract Provides main routine


// Includes
#include <iostream>
#include <vector>
#include <chrono> /// @todo Set-up application timing

// CPU GPU Queries
#include "include/queries.hpp"


// Define iDEBUG to print debug info to the terminal
#ifndef iDEBUG
#define iDEBUG
#endif

#ifdef iDEBUG
void onelineprint(std::string s)
{
    std::cout<< s << " \n";
}
#endif

// Define the output file extention
#define OUTPUT_EXTENTION "txt"
#define PROGRAM_NAME "rd"
#define DEFAULT_FILE_NAME "unnamed"


// Defining globals
static std::string dir;
static std::string dist;
static std::string filepath;
static std::string program_name;

/// @todo move to queries, and extern it here using a query class. Use accessors to query,
/// make the queries do all the work, and declare a global way to access the file. By externing it


int main(int argc,char *argv[])
{
    // Getting a name
    program_name = PROGRAM_NAME;

    // Reading the arguments
    std::vector<std::string> args;

    for (int a=0; a < argc; ++a) {
            args.push_back(argv[a]);
    }

#ifdef iDEBUG // @debug Printing received arguments
    onelineprint("\nPassed in arguments:");
    for (std::string arg : args) {
        std::cout<< arg << "; ";
    }
    onelineprint("\nNo more arguments passed");
#endif

    // Setting filepaths
    dir = args[0];

    { // Deleting the program name from the distination
        size_t strsize = dir.size();
        size_t namesize;
        std::string n = std::string(OUTPUT_EXTENTION);
        namesize = n.size();
        dir.resize(strsize - namesize);
    }

    dist = args[1];

    int idx_scanargs = 2; // Set a argument scan index to 2, 0 - filepath, 1 - output file
    // If output file is not specified, set scan to start with idx[1]

    char compare = dist[0];
    if(compare == 45) // Check for the output file specification, 45 = "-" in ascii
        // @todo Change to more versatile scanner
    {
        std::cout<<"Output file has not been specified"<<"\n";
        std::cout<<"Setting default output destination to "<<
                   dir + "/" + DEFAULT_FILE_NAME + "." + OUTPUT_EXTENTION <<
                   "\n";

        dist = std::string(DEFAULT_FILE_NAME)+ "." + OUTPUT_EXTENTION;
        filepath = dir + dist;
    }

    std::cout<<dir<<std::endl;

#ifdef iDEBUG // @DEBUG Printing received arguments
    onelineprint("Working directory and distination directory");
    onelineprint("DIR: "+dir);
    onelineprint("DIST: "+dist);
    onelineprint("FILEPATH: "+filepath);
#endif


    int running = 0;
    // Load and initialize


    // execution loop
    while(running)
    {

    }
    /// @todo Make a possible restart if the application has failed execution,
    ///       log and debug data, saving working data and execution breakline

    return EXIT_SUCCESS;
} // End of program
