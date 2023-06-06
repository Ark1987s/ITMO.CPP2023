#include <iostream>
#include<cmath>

int main()
{ 
    std::cout << "Enter the coordinates of the first point of the pentagon x1 & y1\n";
    double x1, y1;
    std::cin >> x1;
    std::cin >> y1;

    std::cout << "\nEnter the coordinates of the second point of the pentagon x2 & y2\n";
    double x2, y2;
    std::cin >> x2;
    std::cin >> y2;

    std::cout << "\nEnter the coordinates of the third point of the pentagon x3 & y3:\n";
    double x3, y3;
    std::cin >> x3;
    std::cin >> y3;

    std::cout << "\nEnter the coordinates of the fourth point of the pentagon x4 & y4:\n";
    double x4, y4;
    std::cin >> x4;
    std::cin >> y4;

    std::cout << "\nEnter the coordinates of the fifth point of the pentagon x5 & y5:\n";
    double x5, y5;
    std::cin >> x5;
    std::cin >> y5;

    double s = x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5;
    std::cout << "\nThe area of the pentagon is equal to: " << fabs(s) / 2 << std::endl;
}

