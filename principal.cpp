/* la sentencia if
if (condicion){
    instrucciones1;
}
else{
    instruciones2;
}
*/

#include <iostream>

using namespace std;

int main(){
    int numero, entrada = 18;
    
    cout<<"Digite su edad:";
    cin>> numero;
    
    if (numero >= entrada){
       cout<<"Su edad es mayor o igual a 18, usted es mayor de edad";
        
    }
    else {
        cout<<"Su edad es menor a 18, usted es menor de edad";
    }
    return 0;
}