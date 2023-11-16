#include <iostream>

using namespace std;

int main(){
    
    int num1, num2, suma =0, resta =0, division =0, multiplicacion =0;
    
    cout<<"Digite un numero:"; cin>>num1;
    cout<<"Digite un segundo numero:"; cin>>num2;
    
    suma = num1 + num2;
    resta = num1 - num2;
    division = num1 / num2;
    multiplicacion = num1 * num2;
    
    cout<<"La suma de los numeros digitados es:"<<suma<<endl;
    cout<<"la resta de los numeros digitados es:"<<resta<<endl;
    cout<<"la division  de los numeros diguitados es:"<<division<<endl;
    cout<<"la multiplicacion de los numeros digitados es:"<<multiplicacion<<endl;
    
    return 0;
    
}
