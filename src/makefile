CC=g++
CFLAGS= -Wall -g
RM=del

TARGET=cbaseball

default: main

main: main.o CGame.o
	$(CC) $(CFLAGS) -o main main.o

main.o: main.cpp CGame.cpp CGame.h
	$(CC) $(CFLAGS) -c main.cpp

CGame.o: CGame.cpp CGame.h
	$(CC) $(CFLAGS) -c CGame.cpp

clean: 
	$(RM) *.o *.exe *~