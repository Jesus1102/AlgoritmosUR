#include <iostream>

using namespace std;

int main(){

    int Sueldo, Aumento = 0,NuevoSueldo = 0;

    cout << "Ingrese el sueldo del trabajador " << endl;
    cin >> Sueldo;

    if(Sueldo < 1000000){
        Aumento = Sueldo *(15/100);
        NuevoSueldo = Sueldo + Aumento;

        cout << "Su nuevo sueldo es: " << NuevoSueldo;

    }

    return 0;
}