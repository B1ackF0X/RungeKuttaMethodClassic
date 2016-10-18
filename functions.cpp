#include <iostream>
#include <iomanip>
#include "Vector.h"
#include "functions.h"


Vector F(Vector U, double t)
{
    Vector res;
    
    double g = 9.81;
    
    res.x = U.vx;
    res.y = U.vy;
    res.vx = 0;
    res.vy = - g;
    
    return res;
}

void Out(double t, Vector U)
{
    using namespace std;
    
    cout << "t=" << setw(8) << left << t;
    cout << "x=" << setw(8) << left << U.x;
    cout << "y=" << U.y << endl;
}
