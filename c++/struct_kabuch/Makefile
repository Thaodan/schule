CXXFLAGS = -Wall
OBJS_T = ${wildcard *.cpp} 
OBJS   = ${OBJS_T:.cpp=.o}
PROGRAMM = kabuch

all: $(PROGRAMM)

%.o: %.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@


$(PROGRAMM): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@


clean:
	rm -f $(OBJS) 
	rm -f $(PROGRAMM)

.PHONY: all clean
