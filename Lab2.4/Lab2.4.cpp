#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    float x, y;
    int scr = 0, qnty = 0;
    do {
        std::cout << "������� ���������� � � � ����� ����: \n";
        std::cin >> x >> y;
        qnty++;
        if (x * x + y * y <= 9)
            scr += 10;
        else if (x * x + y * y <= 100)
            scr += 5;
    } while (scr < 40);
    std::cout << "���������� ����� ��������� " << qnty << " ���(�)" << std::endl;
    if (qnty == 4)
        std::cout << "�� �������!";
    else if (qnty <= 8)
        std::cout << "�� �������!";
    else
        std::cout << "�� �������!";
}