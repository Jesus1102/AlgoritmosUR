#include <iostream>

using namespace std;

int main(){

    int Fahrenheit, Celcius = 0;

    cout << "Ingrese la temperatura en grados fanrenheit" << endl;
    cin >> Fahrenheit;

    Celcius = (Fahrenheit - 32)/ 1.8;

    cout << "La temperatura en grados celcius es: " << Celcius << endl;

    return 0;

}