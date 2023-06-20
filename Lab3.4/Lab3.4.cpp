#include <iostream>
#include <windows.h>

int recursion(int n) {
    if (n == 1)
        return 5 * n;
    else
        return (5 * n + recursion(n - 1));
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::cout << "������� ���������� ����������: ";
    int repeat;
    std::cin >> repeat;
    std::cout << "����� ���� ����������� ������� ����������: " << recursion(repeat) << std::endl;
}