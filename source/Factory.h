#pragma once

#include "Logger.h"

namespace factory
{
    Logger *CreateCarLogger();
    Logger *CreateFuelGaugeLogger();
}
