#include <iostream>
using namespace std;

int main(){

    int Numero;
    
    cout << "Ingrese el numeor que desea : ";
    cin >> Numero;
    
    if (Numero % 2 == 0){
        cout << "El numero es par ";
    }
    else {
        cout << "El numero es impar ";
    }
    return 0;

}