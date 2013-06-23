CXX=g++
TARGET=karton
OBJS=create.o input.o main.o output.o
HEADER=karton.hpp
override CXXFLAGS+=-std=c++11 -Wall

all: $(TARGET)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c  $<  -o $@

clean:
	rm -f $(TARGET)
	rm -rf $(OBJS)

$(TARGET): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@


.PHONY: all clean
