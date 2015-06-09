lab7: main.o
	g++ -o lab7 main.o
main.o:main.cpp manyblock.h
	g++ -c main.cpp
