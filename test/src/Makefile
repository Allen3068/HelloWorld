CXX = g++
#CXXFLAGS = -g -L/opt/gtest/lib -lgtest -lgtest_main -lpthread
CXXFLAGS = -g -L/opt/gtest/lib -lgtest -lgtest_main -lpthread -fprofile-arcs -ftest-coverage -fPIC -O0
INCS = -I./ -I../../src -I/opt/gtest/include
OBJS = ../../src/Addition.o AdditionTest.o ../../src/Multiply.o MultiplyTest.o

testAll: $(OBJS)
	$(CXX) -o testAll  Main_TestAll.cpp $(OBJS) $(CXXFLAGS) $(INCS)

.cpp.o:
	$(CXX) -c $< -o $@ $(CXXFLAGS) $(INCS)

clean:
	rm -f testAll *.o testAll.xml
