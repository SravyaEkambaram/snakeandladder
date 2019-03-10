CXX=g++
CXXFLAGS=-c -std=c++11 -Wall
OBJECTS=main.o dye.o player.o
all:prog

prog:$(OBJECTS)
	$(CXX) $(OBJECTS) -o prog
%o:%.cpp
	$(CXX) $(CXXFLAGS) $<
clean:
	rm -rf *.o
