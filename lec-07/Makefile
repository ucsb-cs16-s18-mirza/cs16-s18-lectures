# Comment
# This is a Makefile

# output: dependency
#	recipe

all: testShapes

drawShapes.o: drawShapes.cpp
	g++ -c drawShapes.cpp

testDrawShapes.o: testDrawShapes.cpp 
	g++ -c testDrawShapes.cpp

tdd.o: tdd.cpp tdd.h
	g++ -c tdd.cpp 

testShapes: drawShapes.o testDrawShapes.o tdd.o
	g++ -o testShapes drawShapes.o testDrawShapes.o tdd.o

clean: 
	rm *.o 


