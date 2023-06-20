#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    float x, y;
    int scr = 0, qnty = 0;
    do {
        std::cout << "Введите координаты х и у вашей цели: \n";
        std::cin >> x >> y;
        qnty++;
        if (x * x + y * y <= 9)
            scr += 10;
        else if (x * x + y * y <= 100)
            scr += 5;
    } while (scr < 40);
    std::cout << "Количество Ваших выстрелов " << qnty << " раз(а)" << std::endl;
    if (qnty == 4)
        std::cout << "Вы снайпер!";
    else if (qnty <= 8)
        std::cout << "Вы стрелок!";
    else
        std::cout << "Вы новичок!";
}