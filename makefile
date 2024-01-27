all: compile run
nesneler:= ./lib/AVL.o ./lib/LinkedList.o ./lib/LinkedListNode.o ./lib/Stack.o 

compile:
	g++ -I ./include/ -o ./lib/AVL.o -c ./src/AVL.cpp
	g++ -I ./include/ -o ./lib/LinkedList.o -c ./src/LinkedList.cpp
	g++ -I ./include/ -o ./lib/LinkedListNode.o -c ./src/LinkedListNode.cpp
	g++ -I ./include/ -o ./lib/Stack.o -c ./src/Stack.cpp
	g++ -I ./include/ -o ./bin/main $(nesneler) ./src/main.cpp
run:
	./bin/main