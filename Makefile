all: RungeKuttaMethodClassic

RungeKuttaMethodClassic: main.o Vector.o functions.o RungeKuttaMethod.o
		g++ main.o Vector.o functions.o RungeKuttaMethod.o -o RungeKuttaMethodClassic
	
main.o: main.cpp
		g++ -c main.cpp

Vector.o: Vector.cpp
		g++ -c Vector.cpp

functions.o: functions.cpp
		g++ -c functions.cpp

RungeKuttaMethod.o: RungeKuttaMethod.cpp
		g++ -c RungeKuttaMethod.cpp

clean:
		rm -rf *.o RungeKuttaMethodClassic
