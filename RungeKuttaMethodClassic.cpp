#include <stdio.h>
#include "vector.h"

int main() {
    float t=0, dt = 0.05;
    float vx = 1, vy = 2;
    float x = 0, y = 0;
    vector U(x, y, vx, vy);
    vector k1, k2, k3, k4;
    while(U.y >= 0) {
        k1 = F(U, t)*dt;
        k2 = F(U + 0.5*k2, t + 0.5*dt)*dt;
        k3 = F(U + 0.5*k2, t + 0.5*dt)*dt;
        k4 = F(U + k3, t + dt)*dt;
        U = U + 1.0/6.0 * (k1 + 2*k2 + 2*k3 + k4);
        t += dt;
        printf("t=%f    x=%f    y=%f\n", t, U.x, U.y);
    }
    return 0;
}
