#include <iostream>
#include <iomanip>
#include "Vector.h"

Vector::Vector()
{
    x = 0;
    y = 0;
    vx = 0;
    vy = 0;
}

Vector::Vector(double ax, double ay, double avx, double avy)
{
    x = ax;
    y = ay;
    vx = avx;
    vy = avy;
}

void Vector::out()
{
    using namespace std;
    
    cout << "x=" << setw(8) << left << x;
    cout << "y=" << setw(8) << left << y;
    cout << "vx=" << setw(8) << left << vx;
    cout << "vy=" << setw(8) << left << vy;
}

Vector operator +(Vector a, Vector b)
{
    Vector c;
    
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    c.vx = a.vx + b.vx;
    c.vy = a.vy + b.vy;
    
    return c;
}

Vector operator -(Vector a, Vector b)
{
    Vector c;
    
    c.x = a.x - b.x;
    c.y = a.y + b.y;
    c.vx = a.vx + b.vx;
    c.vy = a.vy + b.vy;
    
    return c;
}

Vector operator *(double a, Vector b)
{
    Vector c;
    
    c.x = a * b.x;
    c.y = a * b.y;
    c.vx = a * b.vx;
    c.vy = a * b.vy;
    
    return c;
}

Vector operator *(Vector b, double a)
{
    Vector c;
    
    c.x = a * b.x;
    c.y = a * b.y;
    c.vx = a * b.vx;
    c.vy = a * b.vy;
    
    return c;
}
