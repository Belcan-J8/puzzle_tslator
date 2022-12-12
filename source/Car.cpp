#include "Car.h"
#include "Factory.h"

Car::Car()
    : logger(factory::CreateCarLogger())
{
}
void Car::TurnLeft()
{
    logger->Log("Turning left");
    fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
    logger->Log("Turning right");
    fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
    logger->Log("Moving ahead");
    fuelGauge.DecrementFuelLevel();
    fuelGauge.DecrementFuelLevel();
}
