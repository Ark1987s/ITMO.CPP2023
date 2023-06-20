#include <iostream>
#include <windows.h>

using namespace std;

int toBinary(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 2 + 10 * toBinary(n / 2));
}


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "Введите положительное число десятичной системы исчисления для преобразования в двоичную: ";
    int decimal;
    cin >> decimal;
    cout << decimal << " (DEC) перевод в (BIN): " << toBinary(decimal) << endl;
}