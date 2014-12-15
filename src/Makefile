CXX = gcc
#CXXFLAGS = -g 
CXXFLAGS = -g -fprofile-arcs -ftest-coverage -fPIC -O0
INCS = -I./
OBJS = Addition.o Multiply.o

exampleapp: ExampleApp.cpp $(OBJS)
	$(CXX) $(CXXFLAGS) -o exampleapp ExampleApp.cpp $(OBJS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCS)

clean:
	rm -f *.o exampleapp 
