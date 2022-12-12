#include "Logger.h"

#include <iostream>

void Logger::Log(std::string string)
{
    std::cout << string << std::endl;
}


namespace factory
{
    Logger *CreateLogger()
    {
        return new Logger();
    }
}