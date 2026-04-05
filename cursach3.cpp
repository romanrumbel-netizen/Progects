#include <iostream>  
#include <iomanip>   
#include <cmath>     
using namespace std;
double maximum(double x, double y) {
    return (x>=y) ? x : y ;
}
int main(){
    setlocale(LC_ALL, "RUS");
    double eps, x, x1, y, y1;
    int i=0;
    cout<<"Введите значение погрешности eps=";
    cin>>eps;
    x=0.7;
    y=0.7;
    do{
        x1=x;
        y1=y;
        x=x1+(0.56662)*(y1-sin(x1))+(-0.40473)*(x1*x1+y1*y1-1);
        y=y1+(-0.56662)*(y1-sin(x1))+(-0.30955)*(x1*x1+y1*y1-1);
        i++;
    }
    while (maximum(abs(x-x1), abs(y-y1))>=eps);
    cout<<fixed<<setprecision(6);
    cout<<"Решение найдено за "<<i<<" итераций"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    return 0;

}
