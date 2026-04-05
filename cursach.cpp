#include <iostream>
#include <iomanip>
using namespace std;

void print_matrix(int n, double x[][10], double y[]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(10) << x[i][j];
		}
		cout << setw(10) << y[i] << endl;
	}return;
}

int main() {
	setlocale(LC_ALL, "RUS");
	int n;
	double a[10][10], b[10];
	cout << "Введите размерность матрицы (системы уравнений без столбца свободных членов): ";cin >> n;
	cout << "Введите матрицу коэффициентов А построчно: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	cout << "Введите столбец свободных членов b :" << endl;
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	double t;
	for (int k = 0; k < n; k++) {
		t = a[k][k];for (int j = 0; j < n; j++) {
			a[k][j] = a[k][j] / t;
		}
		b[k] = b[k] / t;
		for (int i = 0; i < n; i++) {
			if (i != k) {
				t = a[i][k];
				//cout << "t = " << t << endl;
				for (int j = 0; j < n;j++) {
					a[i][j] = a[i][j] - a[k][j] * t;
				}
				b[i] = b[i] - b[k] * t;
			}}
	}
	 cout << "Результат: " << endl;
    print_matrix(n, a, b);
    
    // Вместо _getch();
    cout << "\nНажмите Enter, чтобы выйти...";
    cin.ignore(10000, '\n'); // Игнорируем остатки данных в буфере
    cin.get(); 
    
    return 0;
}