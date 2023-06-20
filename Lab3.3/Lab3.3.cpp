#include <iostream>
#include <cmath>
#include <windows.h>

double triSquare(double a)
{
    double square = (sqrt(3) * pow(a, 2)) / 4;
    return square;
}

double triSquare(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    double square = sqrt(p * (p - a) * (p - b) * (p - c));
    return square;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::cout << "Выберите треугольник, площадь которого вы хотите вычислить:\n 1 - равносторонний треугольник \
        \n 2 - разносторонний треугольник\n";
    char choose;
    std::cin >> choose;

    switch (choose)
    {
    case '1':
        std::cout << "Введите размер одной стороны: ";
        double side;
        std::cin >> side;
        std::cout << "Площадь равностороннего треугольника составляет" << triSquare(side) << std::endl;
        break;
    case '2':
        std::cout << "Введите размеры каждой из трёх сторон: ";
        double side1, side2, side3;
        std::cin >> side1 >> side2 >> side3;
        std::cout << "Площадь разностороннего треугольника составляет " << triSquare(side1, side2, side3) << std::endl;
        break;
    default:
        std::cout << "Некорректный выбор";
    }
}