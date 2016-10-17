#include <stdio.h>
#include "vector.h"

vector::vector()
{
    x = 0;
    y = 0;
    vx = 0;
    vy = 0;
}

vector::vector(float ax, float ay, float avx, float avy)
{
    x = ax;
    y = ay;
    vx = avx;
    vy = avy;
}

void vector::out()
{
    printf("x=%f\t", x);
    printf("y=%f\t", y);
    printf("vx=%f\t", vx);
    printf("vy=%f\t", vy);
}

vector operator +(vector a, vector b){
    vector c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    c.vx = a.vx + b.vx;
    c.vy = a.vy + b.vy;
    return(c);
}
vector operator -(vector a, vector b){
    vector c;
    c.x = a.x - b.x;
    c.y = a.y + b.y;
    c.vx = a.vx + b.vx;
    c.vy = a.vy + b.vy;
    return(c);
}
vector operator *(float a, vector b){
    vector c;
    c.x = a * b.x;
    c.y = a * b.y;
    c.vx = a * b.vx;
    c.vy = a * b.vy;
    return(c);
}
vector operator *(vector b, float a){
    vector c;
    c.x = a * b.x;
    c.y = a * b.y;
    c.vx = a * b.vx;
    c.vy = a * b.vy;
    return(c);
}
