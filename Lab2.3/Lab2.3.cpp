#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    short const r1 = 1, r2 = 2, r5 = 5, r10 = 10;
    int money;
    std::cout << "������� ����� � ������ ��� �������: ";
    std::cin >> money;
    std::cout << "���� �����: " << money << " ���. ����� ���� �������� ��: " << std::endl;

    int s10 = 0, s5, s2 = 0, s1;
    if (money >= r10)
    {
        do {
            money -= r10;
            ++s10;
        } while (money >= r10);
        std::cout << "10-�� �������� ������ - " << s10 << " ��." << std::endl;
    }
    if (money < r10 && money >= r5)
    {
        money -= r5;
        s5 = 1;
        std::cout << "5-�� �������� ������ - " << s5 << " ��." << std::endl;
    }
    if (money < r5 && money >= r2)
    {
        do {
            money -= r2;
            ++s2;
        } while (money >= r2);
        std::cout << "2-� �������� ������ - " << s2 << " ��." << std::endl;
    }
    if (money == 1)
    {
        s1 = 1;
        std::cout << "1-�� �������� ������ - " << s1 << " ��." << std::endl;
    }
}