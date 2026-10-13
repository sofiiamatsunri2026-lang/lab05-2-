// Lab_05_1.cpp
// Мацун Софія
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;

double h(const double a, const double b);   // прототип

int main()
{
    double g, s;

    cout << "g = "; cin >> g;
    cout << "s = "; cin >> s;

    double z = (h(g + 1, s) + pow(h(g, s + 1), 2)) /
        (1 + pow(h(g * g, s * s), 3));

    cout << "z = " << z << endl;

    return 0;
}

double h(const double a, const double b)    // визначення
{
    return a * a - b * b;
}