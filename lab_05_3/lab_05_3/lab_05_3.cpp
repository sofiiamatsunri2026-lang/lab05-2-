// Lab_05_3.cpp
// Мацун Софія
// Лабораторна робота № 5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями
// Варіант 19

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double f(const double x);

int main()
{
    double yp, yk, y, dy;
    int n;

    cout << "yp = "; cin >> yp;
    cout << "yk = "; cin >> yk;
    cout << "n = "; cin >> n;

    if (n <= 0)
    {
        cout << "Error: n must be positive!" << endl;
        return 1;
    }

    dy = (yk - yp) / n;

    cout << fixed;
    cout << "---------------------------------" << endl;
    cout << "|" << setw(10) << "y" << "   |"
        << setw(14) << "F(y)" << "   |" << endl;
    cout << "---------------------------------" << endl;

    for (int i = 0; i <= n; i++)
    {
        y = yp + i * dy;

        double a = f(1) + pow(f(y * y), 2);
        double result = f(1 + y * y) + pow(f(a), 2);

        cout << "|" << setw(10) << setprecision(3) << y << "   |"
            << setw(14) << setprecision(6) << result << "   |" << endl;
    }

    cout << "---------------------------------" << endl;

    return 0;
}

double f(const double x)
{
    if (fabs(x) >= 1)
        return cos(x / 2) / (1 + pow(sin(x), 2));
    else
    {
        double a = 1;
        double S = a;

        for (int i = 1; i <= 6; i++)
        {
            double R = x * x * x / ((2 * i - 1) * (2 * i));
            a *= R;
            S += a;
        }

        return S;
    }
}