#include <iostream>
#include <windows.h>
using namespace std;

bool Checkvalue(long long value)
{

	int num10 = value % 100;
	long long div = 1000;
	long long div2 = 100;
	int arr[9] = { 0 };
	for (int i = 0; i < 9; i++)
	{
		arr[i] = value % div % div / div2;
		div *= 10;
		div2 *= 10;
	}
	bool flag = true;
	for (int i = 0; i < 8; i++)
	{		
		if (arr[i] == arr[i + 1])
			flag = false;
	}

	int sum = 0;
	if (flag)
	{
		for (int i = 0; i < 9; i++)
			sum += arr[i] * (i + 1);
		if (((sum < 100 && num10 == sum) || ((sum == 100 || sum == 101) && num10 == 0)) || ((sum > 101) \
			&& ((sum % 101 < 100 && num10 == sum % 101) || (sum % 101 == 100 && num10 == 0))))
			return flag;
		else
			return flag;
	}
	else
		return flag;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	long long value;
	cout << "Введите номер СНИЛС: ";
	cin >> value;
	cout << "Ваш номер СНИЛС (true - корректен, false - некорректен): " << boolalpha << Checkvalue(value) << endl;
}