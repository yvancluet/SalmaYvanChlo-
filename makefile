CFLAGS=-std=c++11 -Wall -Wextra

all: main

main: main.o String.o
	g++ $(CFLAGS) main.o String.o -o main

main.o: main.cpp String.h
	g++ $(CFLAGS) -c main.cpp -o main.o

String.o: String.cpp String.h
	g++ $(CFLAGS) -c String.cpp -o String.o

clean:
	rm -f *.o
