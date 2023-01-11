#include "Car.h"
#include "Logger.h"

int main(int argc, char* argv[])
{
    Logger logger;

    logger.Log("Starting application");

    Car car1(new CyanLogger());
    car1.TurnLeft();
    car1.TurnRight();
    car1.Accelerate();

    Car car2(new MagentaLogger());
    car2.TurnLeft();
    car2.TurnRight();
    car2.Accelerate();

    logger.Log("Exiting application");
}
