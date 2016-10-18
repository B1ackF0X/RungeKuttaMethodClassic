#include "Vector.h"


Vector F(Vector U, float t)
{
    Vector res;
    
    float g = 9.81;
    
    res.x = U.vx;
    res.y = U.vy;
    res.vx = 0;
    res.vy = - g;
    
    return res;
}
