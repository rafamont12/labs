// 3.3.cpp
// Коменда Олег
// Лабораторна робота No 3.3
// Розгалуження, задане графіком функції.
// Варіант 16

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    double R1, R2;

    cout << "x = "; cin >> x;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    if (x < -R1)
        y = (-R1 * (x + 2)) / (-R1 + 2);
    else
        if (x >= -R1 && x <= 0)
            y = -R1*R1 + sqrt(R1*R1 - x*x);
        else
            if (x > 0 && x <= R2)
                y = R2 * R2 - sqrt(R2 * R2 - x * x);
            else
                if (x > R2 && x <= 4)
                    y = -R1;
                else
                    y = (R1 * (x - 6)) / 2;


    cout << "y = " << y << endl;

    system("pause");
    cin.get();
    return 0;

}
