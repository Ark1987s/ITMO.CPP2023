#include <iostream>
#include <cmath>

struct SqrtRoot 
{
    double x1;
    double x2;
    int flag;
};

SqrtRoot Myroot(double a, double b, double c) 
{
    SqrtRoot SqrtRoots;
    double d = b * b - 4 * a * c;

    if (d > 0) 
    {
        SqrtRoots.x1 = (-b - sqrt(d)) / 2 * a;
        SqrtRoots.x2 = (-b + sqrt(d)) / 2 * a;
        SqrtRoots.flag = 1;
        return SqrtRoots;
    }
    else if (d == 0) 
    {
        SqrtRoots.x1 = SqrtRoots.x2 = -b / 2 * a;
        SqrtRoots.flag = 0;
        return SqrtRoots;
    }
    else 
    {
        SqrtRoots.flag = -1;
        return SqrtRoots;
    }
}

int main()
{
    double a = 1, b = 4, c = 3;
    SqrtRoot result = Myroot(a, b, c);
    switch (result.flag)
    {
    case 1:
        std::cout << "The roots of the equation are: x1 = " << result.x1 << ", x2 = " << result.x2 << std::endl;
        break;
    case 0:
        std::cout << "The roots of the equation are equal: x1 = x2 = " << result.x1 << std::endl;
        break;
    default:
        std::cout << "There are no roots in the equation";
    }
}