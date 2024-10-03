CXX = g++
CXXFLAGS = -Wall -std=c++11

SRC = main.cpp complex.cpp sort.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = complex_sort

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
