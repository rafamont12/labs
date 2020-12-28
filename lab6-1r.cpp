#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* r, const int size, const int Low, const int High, int i)
{
	r[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(r, size, Low, High, i + 1);
}

void Print(int* r, const int size, int i)
{
	cout << setw(4) << r[i];
	if (i < size - 1)
		Print(r, size, i + 1);
	else
		cout << endl;
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

void Replacing(int* r, const int size, int i)
{
	if ((r[i] > 0) && (r[i] % 4 != 0))
		cout << 0 << "  ";
	else
		cout << r[i] << "  ";
	if (i < size - 1)
		return Replacing(r, size, i + 1);
}

int Count(int* r, const int size, int i, int j)
{
	if ((r[i] > 0) && (r[i] % 4 != 0))
		j++;
	if (i < size - 1)
		return Count(r, size, i + 1, j);
	else
		return j;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 23;
	int r[n];

	int Low = -19;
	int High = 25;

	Create(r, n, Low, High, 0);
	cout << "Original masive" << endl;
	Print(r, n, 0);
	cout << endl;

	cout << "Calculating sum" << endl;
	cout << "S = " << Sum(r, n, 0, 0) << endl;
	cout << endl;

	cout << "Calculating count" << endl;
	cout << "j = " << Count(r, n, 0, 0) << endl;
	cout << endl;

	cout << "Replaced elements" << endl;
	Replacing(r, n, 0);
	cout << endl;

	system("pause");
	return 0;
}
