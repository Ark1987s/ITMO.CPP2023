#include <iostream>

template<class T>
double getAverage(T&, int);

int main()
{
    int arrInt[] = { 9, 7, 6, 6, 5, 3 };
    long arrLong[] = { 1000, 500, 5 };
    double arrDouble[] = { 1.1, 109.8, 46.4 };
    char arrChar[] = "Template";

    int sizeInt = sizeof(arrInt) / sizeof(arrInt[0]);
    int sizeLong = sizeof(arrLong) / sizeof(arrLong[0]);
    int sizeDouble = sizeof(arrDouble) / sizeof(arrDouble[0]);
    int sizeChar = sizeof(arrChar) / sizeof(arrChar[0]);

    std::cout << getAverage(arrInt, sizeInt) << std::endl;
    std::cout << getAverage(arrLong, sizeLong) << std::endl;
    std::cout << getAverage(arrDouble, sizeDouble) << std::endl;
    std::cout << getAverage(arrChar, sizeChar) << std::endl;
}

template<class T>
double getAverage(T& arr, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum / size;
}