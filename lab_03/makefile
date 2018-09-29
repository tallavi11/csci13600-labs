OBJ = main.o

main: main.o
		g++ -o main main.o
		rm -f main.o

main.o: main.cpp
		g++ -c main.cpp

clean:
		rm -f main.o
