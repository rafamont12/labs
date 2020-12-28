#include <iostream>
#include <cmath>

using namespace std;

double S0(const int N)
{
    double s = 0;
    for (int j = 2; j <= N; j++)
        s += ((j * 1.) * (N * 1. - j * 1.)) / ((j * 1. * j * 1.) + (N * 1. - (j * 1. * j * 1.)));
    return s;
}

double S1(const int N, const int j)
{
    if (j > N)
        return 0;
    else
        return ((j * 1.) * (N * 1. - j * 1.)) / ((j * 1. * j * 1.) + (N * 1. - (j * 1. * j * 1.))) + S1(N, j + 1);
}

double S2(const int N, const int j)
{
    if (j < 2)
        return 0;
    else
        return ((j * 1.) * (N * 1. - j * 1.)) / ((j * 1. * j * 1.) + (N * 1. - (j * 1. * j * 1.))) + S2(N, j - 1);
}

double S3(const int N, const int j, double t)
{
    t = t * 1. + ((j * 1.) * (N * 1. - j * 1.)) / ((j * 1. * j * 1.) + (N * 1. - (j * 1. * j * 1.)));
    if (j >= N)
        return t;
    else
        return S3(N, j + 1, t);
}

double S4(const int N, const int j, double t)
{
    t = t * 1. + ((j * 1.) * (N * 1. - j * 1.)) / ((j * 1. * j * 1.) + (N * 1. - (j * 1. * j * 1.)));
    if (j <= 2)
        return t;
    else
        return S4(N, j - 1, t);
}

int main()
{
    int  N;

    cout << "N = "; cin >> N;
    cout << "(iter) S0 = " << S0(N) << endl;
    cout << "(rec up ++) S1 = " << S1(N, 2) << endl;
    cout << "(rec up --) S2 = " << S2(N, N) << endl;
    cout << "(rec down ++) S3 = " << S3(N, 2, 0) << endl;
    cout << "(rec down --) S4 = " << S4(N, N, 0) << endl;
    system("pause");
    return 0;
}
