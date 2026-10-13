// Lab_05_2.cpp
// Мацун Софія
// Лабораторна робота № 5.2
// Обчислення суми ряду Тейлора за допомогою функцій
// Варіант 19

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

int main()
{
    double xp, xk, x, dx, eps, s = 0;
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << "   |"
        << setw(10) << "asin(x)" << "   |"
        << setw(10) << "S" << "   |"
        << setw(5) << "n" << "   |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        if (x > -1 && x < 1)
        {
            S(x, eps, n, s);

            cout << "|" << setw(7) << setprecision(3) << x << "   |"
                << setw(10) << setprecision(5) << asin(x) << "   |"
                << setw(10) << setprecision(5) << s << "   |"
                << setw(5) << n << "   |"
                << endl;
        }
        else
        {
            cout << "x must be in the interval (-1, 1)" << endl;
        }

        x += dx;
    }

    cout << "-------------------------------------------------" << endl;

    return 0;
}

void S(const double x, const double eps, int& n, double& s)
{
    n = 0;
    double a = x;
    s = a;

    do
    {
        n++;
        A(x, n, a);
        s += a;
    } while (abs(a) >= eps);
}

void A(const double x, const int n, double& a)
{
    double R = ((2 * n - 1) * (2 * n - 1) * x * x)
        / (2.0 * n * (2 * n + 1));

    a *= R;
}
