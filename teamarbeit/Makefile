CXX=g++
TARGET=teamarbeit
OBJS=main.o eingabe.o ausgabe.o berechnen.o faku.o
HEADER=teamarbeit.hpp
CXXFLAGS=-std=c++11 -Wall

all: $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c  $<  -o $@

clean:
	rm -f $(TARGET)
	rm -rf $(OBJS)

$(TARGET): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@


.PHONY: all clean
