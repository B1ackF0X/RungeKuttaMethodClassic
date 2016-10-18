#include "Vector.h"
#include "RungeKuttaMethod.h"
#include "functions.h"

Vector RungeKuttaMethod(Vector U, double t, double dt)
{
    Vector k1, k2, k3, k4;
    
    k1 = F(U, t)*dt;
    k2 = F(U + 0.5*k2, t + 0.5*dt)*dt;
    k3 = F(U + 0.5*k2, t + 0.5*dt)*dt;
    k4 = F(U + k3, t + dt)*dt;
        
    U = U + 1/6.0 * (k1 + 2*k2 + 2*k3 + k4);
    
    return U;
}
