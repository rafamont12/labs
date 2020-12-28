#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

void Inverse(int* a, const int n, int i)
{
	int tmp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = tmp;
	if (i < n / 2 - 1)
		Inverse(a, n, i + 1);
}

int Sum(int* r, const int size, int i, int S)
{
	if ((r[i] > 0) && (r[i] % 4 != 0))
		S += r[i];
	if (i < size - 1)
		return Sum(r, size, i + 1, S);
	else
		return S;
}

// 2 way of templates usage
template <typename T>
T Create(T* a, const int size, T Low, T High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

template <typename T>
T Print(T* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

template <typename T>
T Inverse(T* a, const int n, int i)
{
	T tmp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = tmp;
	if (i < n / 2 - 1)
		Inverse(a, n, i + 1);
}

template <typename T>
T Sum(T* r, const int size, int i, T S)
{
	if ((r[i] > 0) && (r[i] % 4 != 0))
		S += r[i];
	if (i < size - 1)
		return Sum(r, size, i + 1, S);
	else
		return S;
}

int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 9;
	int a[n];
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	Inverse(a, n, 0);
	Print(a, n, 0);
	return 0;
}
