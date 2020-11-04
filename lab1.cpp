#include <iostream>
#include <math.h>

struct Wektor2D
{
public:
    Wektor2D()
    {
        x = 0;
        y = 0;
    };
    Wektor2D(double a, double b)
    {
        x = a;
        y = b;
    };
    void   setX(double a) { x = a; };
    void   setY(double b) { y = b; };
    double getX() { return x; };
    double getY() { return y; };

    double x;
    double y;
};

Wektor2D operator+(Wektor2D a, Wektor2D b)
{
    Wektor2D w1;
    w1.x = a.x + b.x;
    w1.y = a.y + b.y;
    return w1;
}
double operator*(Wektor2D a, Wektor2D b)
{
    double iloczyn;
    iloczyn = a.x * b.x;
    iloczyn += a.y * b.y;
    return iloczyn;
}

int main()
{
    Wektor2D v1{3, 4};
    Wektor2D v2{5, 12};
    Wektor2D sum;
    sum         = v1 + v2;
    double prod = v1 * v2;
    std::cout << sum.x << " " << sum.y << '\n' << prod;
}
