all: RungeKuttaMethodClassic

RungeKuttaMethodClassic: RungeKuttaMethodClassic.o vector.o function.o
		g++ RungeKuttaMethodClassic.o vector.o function.o -o RungeKuttaMethodClassic
	
RungeKuttaMethodClassic.o: RungeKuttaMethodClassic.cpp
		g++ -c RungeKuttaMethodClassic.cpp

vector.o: vector.cpp
		g++ -c vector.cpp

function.o: function.cpp
		g++ -c function.cpp

clean:
		rm -rf *.o RungeKuttaMethodClassic
