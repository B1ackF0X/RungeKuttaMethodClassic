all: RungeKuttaMethodClassic

RungeKuttaMethodClassic: main.o Vector.o function.o
		g++ main.o Vector.o function.o -o RungeKuttaMethodClassic
	
main.o: main.cpp
		g++ -c main.cpp

Vector.o: Vector.cpp
		g++ -c Vector.cpp

function.o: function.cpp
		g++ -c function.cpp

clean:
		rm -rf *.o RungeKuttaMethodClassic
