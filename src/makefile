CC=g++
CFLAGS= -Wall -g
RM=del
BIN=./bin/

TARGET=cbaseball

default: main

$(BIN)main: $(BIN)main.o $(BIN)CGame.o
	$(CC) $(CFLAGS) -o main main.o

$(BIN)main.o: main.cpp CGame.cpp CGame.h
	$(CC) $(CFLAGS) -c main.cpp

$(BIN)CGame.o: CGame.cpp CGame.h
	$(CC) $(CFLAGS) -c CGame.cpp

clean: 
	$(RM) *.o *.exe *~