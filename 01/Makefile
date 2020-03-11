all: alloc

alloc: main.o alloc.o
	g++ main.o alloc.o -o alloc

main.o: main.cpp
	g++  -c main.cpp  --std=c++14

alloc.o: alloc.cpp
	g++ -c alloc.cpp --std=c++14

test: alloc
	./alloc

run: alloc
	./alloc