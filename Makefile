$(CXX) = g++ 
$(CXXFLAGS) = -Wall -std+c++17

main.o: includes.h system.h accessControl.h main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp


Banking System: main.o
	$(CXX) $(CXXFLAGS) -o Banking System main.o


clean:
	rm -f *.o Banking System
