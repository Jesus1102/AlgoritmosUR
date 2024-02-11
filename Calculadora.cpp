#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float num1, num2, suma = 0, resta = 0, multiplicacion = 0, division = 0, potencia1 = 0, potencia2 = 0, raiz1 = 0, raiz2 = 0;

    
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    suma = num1 + num2 ;
    resta = num1 + num2 ;
    multiplicacion =  num1 * num2;
    division = num1 / num2 ;
    potencia1 = num1 * num1 ;
    potencia2 = num2 * num2 ;
    raiz1  = sqrt(num1) ;
    raiz2  = sqrt(num2) ;


    return 0;
}