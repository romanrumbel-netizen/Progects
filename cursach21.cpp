#include <iostream>
#include <cmath>
using namespace std;
double f( double x){
    return pow(x,5)-x-2;
}
int main() {
     setlocale(LC_ALL, "RUS");
     double x1=1.0, x2=2.0;
     double eps, x;
     int i=0;
     cout<<" Введите значение погрешности: ";
     cin>>eps;
     if(f(x1)*f(x2)>=0){
        cout<<"На заданном интервале нет корней."<<endl;
        return 1;
     }
     do {
        x=(x1+x2)/2;
        if(f(x)*f(x1)<0){
            x2=x;
        }
        else{
            x1=x;
        }
        i++;
     } while (abs(x1-x2)>=eps);
     cout<<"Резульат:";
     cout<<"x="<<x<<endl;
     cout<<"Значение погрешности:"<<eps<<endl;
     cout<<"Колличество итераций:"<<i<<endl;
     cout<<"Значение функции в x f(x)="<<f(x)<<endl;
     return 0;
}