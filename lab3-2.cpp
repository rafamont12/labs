// 3.2.cpp
// Коменда Олег
// Лабораторна робота No 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 16

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, x, b, c, F;

    cout << "a = "; cin >> a;
    cout << "c = "; cin >> c;
    cout << "b = "; cin >> b;
    cout << "x = "; cin >> x;

    if (x == 0 && b != 0)
        F = a * (x + c) * (x + c) - b;
    if (x == 0 && b == 0)
        F = (x - a) / -c;
    if (!(x == 0 && b != 0) && !(x == 0 && b == 0))
        F = a + x / c;

    cout << "1)F = " << F << endl;

    // Спосіб 2

    if (x == 0 && b != 0)
        F = a * (x + c) * (x + c) - b;
    else
        if (x == 0 && b == 0)
            F = (x - a) / -c;
        else
            F = a + x / c;

    cout << "2)F = " << F << endl;

    system("pause");
    cin.get();
    return 0;
}
