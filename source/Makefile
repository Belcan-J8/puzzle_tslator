OBJS	= Car.o FuelGauge.o Logger.o Factory.o main.o
SOURCE  = Car.cpp FuelGauge.cpp Logger.cpp Factory.cpp main.cpp
HEADER  = Car.h FuelGauge.h Logger.h Factory.h termcolor.hpp
OUT     = puzzle
CC      = g++
FLAGS   = -g -c -Wall -std=c++17
LFLAGS  =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

Car.o: Car.cpp
	$(CC) $(FLAGS) Car.cpp

FuelGauge.o: FuelGauge.cpp
	$(CC) $(FLAGS) FuelGauge.cpp

Logger.o: Logger.cpp
	$(CC) $(FLAGS) Logger.cpp

Factory.o: Factory.cpp
	$(CC) $(FLAGS) Factory.cpp

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

clean:
	rm -f $(OBJS) $(OUT)