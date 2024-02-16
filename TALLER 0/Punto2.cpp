#include <iostream>

using namespace std;

int main(){

    int Valor, Descuento = 0,Plan;

    cout << "Que plan elegiste 1. Prepago o 2. Pospago: " << endl;
    cin >> Plan;

    cout << "Ingrese el valor de telefono: " << endl;
    cin >> Valor;

    if (Plan == 1){

        if(Valor > 100000 && Valor < 900000){
            Descuento = Valor *(10/100);
        }
        else if(Valor > 1000000){
            Descuento = Valor *(20/100);
        }
        
    }

    if (Plan == 2){
        if(Valor < 500000){
            Descuento = Valor *(15/100);
        }
        else if(Valor > 500000 && Valor < 1000000){
            Descuento = Valor *(20/100);
        }
        else if( Valor > 1000000){
            Descuento = Valor *(25/100);
        }
        
    }

    

    return 0;
}