#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    double x, x1, eps;
    int i = 0;

    cout << "Введите значение погрешности: ";
    cin >> eps;

    x1 = 1.2;  // начальное приближение
    do {
        x = x1 - 0.025 * (pow(x1, 5) - x1 - 2);
        i++;
        if (abs(pow(x, 5) - x - 2) <= eps) break;
        x1 = x;
    } while (true);

    cout << "Результат:" << endl;
    cout << "x = " << x << endl;
    cout << "Значение функции f(x) = " << pow(x, 5) - x - 2 << endl;
    cout << "Количество итераций: " << i << endl;
    cin.get();
    return 0;
}