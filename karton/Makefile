CXX=g++
TARGET=karton
OBJS=create.o input.o main.o output.o
CXXFLAGS=-std=c++11

all: $(TARGET)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c  $<  -o $@

clean:
	rm -f $(TARGET)
	rm -rf $(OBJS)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@


.PHONY: all clean
