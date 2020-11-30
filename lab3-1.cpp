// Lab3.1.cpp
// Коменда Олег
// Лабораторна робота No 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 16

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double b;
    double x;
    double y;

    cout << "x = "; cin >> x;

    a = 5 * exp(3 * x);

    if (x < -1)
        b = sqrt(2) * x * x * x - 7;
    if (x >= -1 && x < 3)
        b = 2 * log10(1 - x / 4);
    if (x >= 3)
        b = cos(abs(x)) + 3;


    y = a - b;

    cout << "1) y = " << y << endl;


    // Спосіб 2


    if (x < -1)
        b = sqrt(2) * x * x * x - 7;
    else
        if (x >= -1 && x < 3)
            b = 2 * log10(1 - x / 4);
        else
            b = cos(abs(x)) + 3;

    y = a - b;

    cout << "2) y = " << y << endl;



    system("pause");

    cin.get();
    return 0;
};

