class Vector
{
    public:
            float x, y, vx, vy;
            
            Vector();
            
            Vector(float ax, float ay, float avx, float avy);
            
            void out();
};

Vector operator +(Vector a, Vector b);
Vector operator -(Vector a, Vector b);
Vector operator *(float a, Vector b);
Vector operator *(Vector b, float a);
Vector F(Vector U, float t);

using namespace std;
