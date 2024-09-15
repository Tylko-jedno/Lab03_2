// Lab_03_2.cpp
// Головенко Костянтин
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 2
#include <iostream>

using namespace std;

int main()
{
    double a, b, c, x; //вхідні дані
    double f; //результат

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    if ((x + 5) < 0 && c == 0)
        f = 1 / (a * x) - b;
    if ((x + 5) > 0 && c != 0)
        f = (x - a) / x;
    if (!((x + 5) < 0 && c == 0) && !((x + 5) > 0 && c != 0))
        f = (10 * x) / (c - 4);

    cout << "1)F = " << f << endl;

    if ((x + 5) < 0 && c == 0)
        f = 1 / (a * x) - b;
    else 
    {
        if ((x + 5) > 0 && c != 0)
            f = (x - a) / x;
        else
            f = (10 * x) / (c - 4);
    }

    cout << "2)F = " << f << endl;

}

