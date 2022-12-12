#pragma once

#include <string>

struct ILogger
{
    virtual void Log(std::string string) = 0;
};

class Logger : public ILogger
{
public:
    void Log(std::string string);
};

class ColorLogger : public Logger
{
public:
    enum class Color { Red, Blue };

    ColorLogger(Color color);
    void Log(std::string string);
private:
    Color color_;
};
