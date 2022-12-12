#include "Factory.h"

namespace factory
{
    Logger *CreateCarLogger()
    {
        return new ColorLogger(ColorLogger::Color::Red);
    }

    Logger *CreateFuelGaugeLogger()
    {
        return new ColorLogger(ColorLogger::Color::Blue);
    }
}