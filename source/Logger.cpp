#include "Logger.h"

#include <iostream>

#include "termcolor.hpp"

void Logger::Log(std::string string)
{
    std::cout << termcolor::reset << string << std::endl;
}


ColorLogger::ColorLogger(Color color) : color_(color)
{
}

void ColorLogger::Log(std::string string)
{
    switch (color_)
    {
        case ColorLogger::Color::Red:
            std::cout << termcolor::red << string << std::endl;
            break;

        case ColorLogger::Color::Blue:
            std::cout << termcolor::blue << string << std::endl;
            break;

        // Unhandled enumeration - Fallback to base class
        default:
            Logger::Log(string);
            break;
    }
}