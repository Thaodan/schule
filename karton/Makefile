CXX=g++
TARGET=karton
OBJS=create.o input.o main.o output.o

all: $(TARGET)

%.o: %.cc
	$(CXX) -c  $<  -o $@

clean:
	rm -f $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@


.PHONY: all clean
