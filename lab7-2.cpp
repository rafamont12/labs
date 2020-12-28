#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int** a, const int rowCount, const int colCount, const int Low, const int High);
void Print(int** a,const int rowCount, const int colCount);
void Inverse(int** a, const int rowCount, const int colCount);
int SearchMinOdd(int** a, const int rowCount, const int colCount);
int SearchMaxOdd(int** a, const int rowCount, const int colCount);

int main()
{
	srand((unsigned)time(NULL));
	int rowCount;
	int colCount;
	int Low = 7;
	int High = 65;
	cout << "rowCount = "; cin >> rowCount;
	cout << "colCount = "; cin >> colCount;

	int** a = new int* [rowCount];
	for (int i = 0; i < rowCount; i++)
		a[i] = new int[colCount];
	Create(a, rowCount, colCount, Low, High);
	Print(a, rowCount, colCount);
	Inverse(a, rowCount, colCount);
	Print(a, rowCount, colCount);
	for (int i = 0; i < rowCount; i++)
		delete[] a[i];
	delete[] a;
	return 0;
}

void Inverse(int** a, const int rowCount, const int colCount)
{
	int min, max, imin, imax;
	for (int j = 1; j < colCount; j++)
	{
             if (!(j % 2 == 0))
		imax = SearchMaxOdd(a, rowCount, j);
		max = a[imax][j];
		imin = SearchMinOdd(a, rowCount, j);
		min = a[imin][j];
		a[imax][j] = min;
		a[imin][j] = max;
	}
}

void Create(int** a, const int rowCount, const int colCount, const int Low, const int High)
{
	for (int i = 0; i < rowCount; i++)
		for (int j = 0; j < colCount; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}

void Print(int** a, const int rowCount, const int colCount)
{
	cout << endl;
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0; j < colCount; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}

int SearchMinOdd(int** a, const int rowCount, const int colCount)
{
	int min = a[0][colCount];
	int imin = 0;
	for (int i = 0; i < rowCount; i++)
	{
		if (a[i][colCount] < min)
		{
			min = a[i][colCount];
			imin = i;
		}
	}
	return imin;
}

int SearchMaxOdd(int** a, const int rowCount, const int colCount)
{
	int max = a[0][colCount];
	int imax = 0;
	for (int i = 0; i < rowCount; i++)
	{
		if (a[i][colCount] > max)
		{
			max = a[i][colCount];
			imax = i;
		}
	}
	return imax;
}
