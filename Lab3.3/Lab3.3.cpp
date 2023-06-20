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

    std::cout << "�������� �����������, ������� �������� �� ������ ���������:\n 1 - �������������� ����������� \
        \n 2 - �������������� �����������\n";
    char choose;
    std::cin >> choose;

    switch (choose)
    {
    case '1':
        std::cout << "������� ������ ����� �������: ";
        double side;
        std::cin >> side;
        std::cout << "������� ��������������� ������������ ����������" << triSquare(side) << std::endl;
        break;
    case '2':
        std::cout << "������� ������� ������ �� ��� ������: ";
        double side1, side2, side3;
        std::cin >> side1 >> side2 >> side3;
        std::cout << "������� ��������������� ������������ ���������� " << triSquare(side1, side2, side3) << std::endl;
        break;
    default:
        std::cout << "������������ �����";
    }
}