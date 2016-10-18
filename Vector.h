class Vector
{
    public:
            double x, y, vx, vy;
            
            Vector();
            
            Vector(double ax, double ay, double avx, double avy);
            
            void out();
};

Vector operator +(Vector a, Vector b);
Vector operator -(Vector a, Vector b);
Vector operator *(double a, Vector b);
Vector operator *(Vector b, double a);
