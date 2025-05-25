# Usage:
# make FILE=your_file.cpp

CXX = g++
CXXFLAGS = -Wall -std=c++17

all:
	$(CXX) $(CXXFLAGS) $(FILE) -o $(basename $(FILE)).out
	./$(basename $(FILE)).out

clean:
	rm -f *.out

