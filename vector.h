class vector{
    public:
            float x, y, vx, vy;
            
            vector();
            
            vector(float ax, float ay, float avx, float avy);
            
            void out();
};

vector operator +(vector a, vector b);
vector operator -(vector a, vector b);
vector operator *(float a, vector b);
vector operator *(vector b, float a);
vector F(vector U, float t);
