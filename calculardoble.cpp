/*Diseñar
un programa que tenga una función  que
muestra en pantalla el doble del valor que se le pasa como parámetro*/

#include <iostream>

using namespace std;
int CalcularDoble(int n);
int main()
{
    int a;
    cout<<"ingrese un numero:  ";
    cin>>a;
    cout<<"el doble es : "<<CalcularDoble(a);

    return 0;
}
int CalcularDoble(int n){
    n=n*2;
    return n;
}