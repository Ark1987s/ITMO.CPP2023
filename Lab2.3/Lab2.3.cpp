#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    short const r1 = 1, r2 = 2, r5 = 5, r10 = 10;
    int money;
    std::cout << "Введите сумму в рублях для размена: ";
    std::cin >> money;
    std::cout << "Ваша сумма: " << money << " руб. может быть обменена на: " << std::endl;

    int s10 = 0, s5, s2 = 0, s1;
    if (money >= r10)
    {
        do {
            money -= r10;
            ++s10;
        } while (money >= r10);
        std::cout << "10-ти рублевая монета - " << s10 << " шт." << std::endl;
    }
    if (money < r10 && money >= r5)
    {
        money -= r5;
        s5 = 1;
        std::cout << "5-ти рублевая монета - " << s5 << " шт." << std::endl;
    }
    if (money < r5 && money >= r2)
    {
        do {
            money -= r2;
            ++s2;
        } while (money >= r2);
        std::cout << "2-х рублевая монета - " << s2 << " шт." << std::endl;
    }
    if (money == 1)
    {
        s1 = 1;
        std::cout << "1-на рублевая монета - " << s1 << " шт." << std::endl;
    }
}