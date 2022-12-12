#include "FuelGauge.h"
#include "Factory.h"

FuelGauge::FuelGauge()
    : fuelLevel(5)
    , logger(factory::CreateFuelGaugeLogger())
{
}
void FuelGauge::DecrementFuelLevel()
{
    --fuelLevel;
    if (fuelLevel < 2)
    {
        logger->Log("Low fuel!");
    }
}
