CXX=g++
TARGET=bruch
OBJS=main.o meth.o
HEADER=bruch.hpp
override CXXFLAGS+=-std=c++11 -Wall

all: $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c  $<  -o $@

clean:
	rm -f $(TARGET)
	rm -rf $(OBJS)

$(TARGET): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@


.PHONY: all clean
