#ifndef QUERIES_HPP
#define QUERIES_HPP

/// @name queries.hpp
/// @author Ivans Saponenko
/// @abstract Query the system hardware/software

/// @brief This file is designed to query computer parameters to access them later in any part
/// of the software. This file is designed with reason to be able to create multiplatform applications
/// that are not hardware dependant or OS dependant. You will see a lot of defines and typesettings in
/// this file. The classes and structures are kept basic to allow any version of compilers to work
/// with this code. This structure can be dynamically updated to allow run-time hardware swapping and
/// detection
/// @todo Add QT signals that will invoke an update if hardware was changed, thread this process



struct cpu_data
{
    int init;
};

struct gpu_data
{
    int init;
};

#endif // QUERIES_HPP
