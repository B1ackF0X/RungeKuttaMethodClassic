#include "Vector.h"
#include "RungeKuttaMethod.h"
#include "functions.h"

#define T 0.0
#define dT 0.05
#define X 0
#define Y 0
#define VX 1
#define VY 2


int main()
{
    Vector U(X, Y, VX, VY);
    
    for(double t = T; U.y >= 0; t += dT)
    {
        U = RungeKuttaMethod(U, t, dT);
        
        Out(t+dT, U);
    }
    
    return 0;
}
