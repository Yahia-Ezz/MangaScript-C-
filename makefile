CC = g++
SRC = .\src\main.cpp

CFLAGS = -std=c++11
CFLAGS += #-O3

all:$(SRC)
	$(CC) $(CFLAGS) -c  $(SRC) -o .\src\main.o
	$(CC) -g -o .\src\main.exe .\src\main.o

clean:
	rm .\src\main.o
	rm .\src\main.exe