#include <iostream>
#include <cmath>

int Myroot(double, double, double, double&, double&);


int main()
{
    double x1, x2;
    double a = 1, b = 5, c = 4;
    int result = Myroot(a, b, c, x1, x2);
    switch (result)
    {
    case 1:
        std::cout << "Solution of the equation: x1 = " << x1 << ", x2 = " << x2 << std::endl;
        break;
    case 0:
        std::cout << "Solution of the equation: x1 = x2 = " << x1 << std::endl;
        break;
    default:
        std::cout << "There is no solution to the equation (roots are missing)";
    }
}

int Myroot(double a, double b, double c, double& x1, double& x2)
{
    double d = b * b - 4 * a * c;

    if (d > 0)
    {
        x1 = (-b - sqrt(d)) / 2 * a;
        x2 = (-b + sqrt(d)) / 2 * a;
        return 1;
    }
    else if (d == 0)
    {
        x1 = x2 = -b / 2 * a;
        return 0;
    }
    else
        return -1;
}