#include<iostream>
#include<stdio.h>

class vector{
    public:
            float x, y, vx, vy;
            vector(){
                x = 0;
                y = 0;
                vx = 0;
                vy = 0;
            }
            vector(float ax, float ay, float avx, float avy){
                x = ax;
                y = ay;
                vx = avx;
                vy = avy;
            }
            void out(){
                printf("x=%f\t", x);
                printf("y=%f\t", y);
                printf("vx=%f\t", vx);
                printf("vy=%f\t", vy);
            }
};

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
vector F(vector U, float t){
    vector res;
    float g = 9.81;
    res.x = U.vx;
    res.y = U.vy;
    res.vx = 0;
    res.vy = - g;
    return(res);
}
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
