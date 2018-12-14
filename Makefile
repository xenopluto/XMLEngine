SRC=main.cpp Node.cpp

all: test

test: main.cpp Node.cpp Node.h
	g++ -o test $(SRC)
