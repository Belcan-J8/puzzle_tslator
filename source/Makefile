OBJS	= Car.o FuelGauge.o Logger.o main.o
SOURCE  = Car.cpp FuelGauge.cpp Logger.cpp main.cpp
HEADER  = Car.h FuelGauge.h Logger.h
OUT     = puzzle
CC      = g++
FLAGS   = -g -c -Wall
LFLAGS  =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

Car.o: Car.cpp
	$(CC) $(FLAGS) Car.cpp

FuelGauge.o: FuelGauge.cpp
	$(CC) $(FLAGS) FuelGauge.cpp

Logger.o: Logger.cpp
	$(CC) $(FLAGS) Logger.cpp

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

clean:
	rm -f $(OBJS) $(OUT)