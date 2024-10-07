CXX = g++
CXXFLAGS = -Wall -std=c++11

all: complex_sort
 
complex_sort: main.o complex.o sort.o
	$(CXX) main.o complex.o sort.o -o complex_sort
 
main.o: main.cpp complex.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o
 
complex.o: complex.cpp complex.h
	$(CXX) $(CXXFLAGS) -c complex.cpp -o complex.o

sort.o: sort.cpp sort.h
	$(CXX) $(CXXFLAGS) -c sort.cpp -o sort.o
 
clean:
	rm -f *.o complex_sort

