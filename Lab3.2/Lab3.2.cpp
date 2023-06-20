#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

double cbRt(double n) 
{
    double root = n / 3.0;
    for (int i = 0; i < 20; i++)
        root = (2 * root + n / (root * root)) / 3.0;
    return root;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "������� ����� ��� ���������� ����������� �����: ";
    double num;
    cin >> num;
    double cube = cbRt(num);
    cout.precision(4);
    cout << "���������� ����������� ����� ����������� ������������ ������� = " << cube << ", ���������� ������ �� ������� pow = " << pow(num, 1.0 / 3) << endl;
}