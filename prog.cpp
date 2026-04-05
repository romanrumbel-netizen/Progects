#include <cmath>      
#include <iostream> 
using namespace std ; 

int main() {
    const double eps = 1e-9;   
    double x, y;

    cout << " первое число: ";
    cin >> x;

    cout << "второе число: ";
    cin >> y;

    if (fabs(x - y) < eps) {
        cout << "Числа равны в пределах погрешности " << eps << "\n";
    } else {
        cout << "Числа различаются\n";
    }

    return 0;
}
