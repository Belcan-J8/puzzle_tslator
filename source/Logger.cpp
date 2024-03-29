#include "Logger.h"

#include "termcolor.hpp"
#include <iostream>

#include "termcolor.hpp"

void Logger::Log(std::string string)
{
    std::cout << termcolor::reset << string << std::endl;
}
void BlueLogger::Log(std::string string)
{
	std::cout << termcolor::blue << string << std::endl;
}
void RedLogger::Log(std::string string)
{
	std::cout << termcolor::red << string << std::endl;
}
