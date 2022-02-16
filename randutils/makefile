CC=g++
CFLAGS=-std=c++11 -g -Wall 

all: coinflip

randutils.o: randutils.cpp randutils.h
	$(CC) $(CFLAGS) -c randutils.cpp

coinflip: coinflip.cpp randutils.o
	$(CC) $(CFLAGS) -o coinflip randutils.o coinflip.cpp 

clean:
	rm randutils.o coinflip