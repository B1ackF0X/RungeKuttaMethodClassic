#include <iostream>
#include <iomanip>
#include "Vector.h"

#define T 0
#define dT 0.05
#define X 0
#define Y 0
#define VX 1
#define VY 2

int main()
{
    double t = T, dt = dT;
    
    Vector U(X, Y, VX, VY);
    Vector k1, k2, k3, k4;
    
    for(; U.y >= 0; t += dt)
    {
        k1 = F(U, t)*dt;
        k2 = F(U + 0.5*k2, t + 0.5*dt)*dt;
        k3 = F(U + 0.5*k2, t + 0.5*dt)*dt;
        k4 = F(U + k3, t + dt)*dt;
        
        U = U + 1/6.0 * (k1 + 2*k2 + 2*k3 + k4);
        
        cout << "t=" << setw(8) << left << t;
        cout << "x=" << setw(8) << left << U.x;
        cout << "y=" << U.y << endl;
    }
    
    return 0;
}
