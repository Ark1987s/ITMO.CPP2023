#include <iostream>
using namespace std;

int sumArray(int, int*);
int sumNegative(int, int*);
int sumPositive(int, int*);
int sumOddIdx(int, int*);
int sumNotOddIdx(int, int*);


void sortArray(int, int*);


int main()
{
	const int n = 10;
	int mas[n] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> mas[i];
	}

	int sum = sumArray(n, mas);
	cout << "The sum of the elements in the array = " << sum << endl;
	cout << "The middle value of the elements in the array = " << (double)sum / n << endl;
	cout << "The sum of the negative elements in the array = " << sumNegative(n, mas) << endl;
	cout << "The sum of the positive elements in the array = " << sumPositive(n, mas) << endl;
	cout << "The sum of the elemenets with odd index = " << sumOddIdx(n, mas) << endl;
	cout << "The sum of the elemenets with not odd index = " << sumNotOddIdx(n, mas) << endl;

	sortArray(n, mas);
}



int sumArray(int n, int* mas)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	return s;
}

int sumNegative(int n, int* mas) {
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0)
			s += mas[i];
	}
	return s;
}

int sumPositive(int n, int* mas) {
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0)
			s += mas[i];
	}
	return s;
}

int sumOddIdx(int n, int* mas) {
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			s += mas[i];
	}
	return s;
}

int sumNotOddIdx(int n, int* mas) {
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
			s += mas[i];
	}
	return s;
}

void sortArray(int N, int* a) {
	int min = 0; 
	int buf = 0;

	for (int i = 0; i < N; i++)
	{
		min = i;
		for (int j = i + 1; j < N; j++)
			min = (a[j] < a[min]) ? j : min;	
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}
	cout << "Sorted array: \n";
	for (int i = 0; i < N; i++) {
		cout << "mas[" << i << "]=" << a[i] << '\t' << endl;
	}
}