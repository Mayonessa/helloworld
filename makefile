all: run
run: Main.o util.o util.h
	g++ Main.o util.o -o run
Main.o: Main.cpp
	g++ -c Main.cpp
util.o: util.cpp
	g++ -c util.cpp
cleaan:
	rm *.o