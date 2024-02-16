#include <iostream>

using namespace std;

int main(){

    int Sueldo = 0, Horas;

    cout << "Ingrese las horas de trabajo " << endl;
    cin >> Horas;

    if (Horas <= 35){

        Sueldo = Horas * 40000;
        cout << "El sueldo total es: " << Sueldo;
    }
    else if(Horas > 35){
        
        Sueldo = Horas * 50000;
        cout << "El sueldo total es: " << Sueldo;
    }
    

    return 0;
}