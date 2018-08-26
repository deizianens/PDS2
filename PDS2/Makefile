exec: data.o
	 -std=c99 -pedantic data.o -o exec
data.o: data.cpp data.h
	g++ -g -c data.cpp
clean:
	rm *.o *.gch
	rm exec