all : main.o Sorting/ArrayList.o Sorting/Sorting.o
	g++ main.o Sorting/ArrayList.o Sorting/Sorting.o -o Sort

main.o : main.cpp
	g++ -c main.cpp -o main.o

Sorting/ArrayList.o : Sorting/ArrayList.cpp
	g++ -c Sorting/ArrayList.cpp -o Sorting/ArrayList.o

Sorting/Sorting.o : Sorting/Sorting.cpp
	g++ -c Sorting/Sorting.cpp -o Sorting/Sorting.o

clean :
	rm -f *.o Sorting/*.o Sort
