/// @author Ivans Saponenko
/// @brief This is a part of control flow of the sowftware


#ifndef PROCESS_HPP
#define PROCESS_HPP


class process
{
public:
    process();

    virtual int run();
    virtual void kill();
};

#endif // PROCESS_HPP
