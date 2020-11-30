// 3.4.cpp
// Коменда Олег
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 16

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    if ((y <= -x * x + 2 && y <= x && y >= 0) ||
        (y <= -x * x + 2 && y >= x && y <= 0))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    system("pause");
    cin.get();
    return 0;
}

