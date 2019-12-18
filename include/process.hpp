/// @author Ivans Saponenko
/// @brief This is a part of control flow of the sowftware


#ifndef PROCESS_HPP
#define PROCESS_HPP


class process
{
public:
    process();
    virtual ~process();

    virtual int run() = 0;
    virtual void kill() = 0;

private:


};

#endif // PROCESS_HPP
