CC=g++
CFLAGS=-std=c++11 -g -Wall 

all: holidays

dateutils.o: dateutils.cpp dateutils.h
	$(CC) $(CFLAGS) -c dateutils.cpp

holidays: holidays.cpp dateutils.o
	$(CC) $(CFLAGS) -o holidays dateutils.o holidays.cpp

clean:
	rm *.o *.exe *.stackdump holidays dateutils