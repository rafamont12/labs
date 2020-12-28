#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

void Inverse(int* a, const int n)
{
	int tmp;
	for (int i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}

int Sum(int* r, const int size)
{
	int j = 0;
	int S = 0;
	for (int i = 0; i < size; i++)
		if ((r[i] > 0) && (r[i] % 4 != 0))
			S += r[i];
	return S;
}


// 2 way of templates usages
template <typename T>
T Create(T* a, const int size, T Low, T High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

template <typename T>
T Print(T* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

template <typename T>
T Inverse(T* a, const int n)
{
	T tmp;
	for (int i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}

template <typename T>
T Sum(T* r, const int size)
{

	T S = 0;
	for (int i = 0; i < size; i++)
		if ((r[i] > 0) && (r[i] % 4 != 0))
			S += r[i];
	return S;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 9;
	int a[n];
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High);
	Print(a, n);
	Inverse(a, n);
	Print(a, n);
	return 0;
}
