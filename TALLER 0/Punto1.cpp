#include <iostream>

using namespace std;

int main(){

    int Deuda, Descuento = 0, ValorT;

    cout << "Ingrese el valor de su deuda: " << endl;
    cin >> Deuda;

    if (Deuda > 60000 && Deuda <= 150000){

        Descuento = Deuda *(20/100);
        ValorT = Deuda - Descuento;
        cout <<"Su descuento es de: " << Descuento << "el valor total es: " << ValorT << endl;
    }

    if (Deuda > 150000 && Deuda <= 300000){

        Descuento = Deuda *(30/100);
        ValorT = Deuda - Descuento;
        cout <<"Su descuento es de: " << Descuento << "el valor total es: " << ValorT << endl;
    }

    if (Deuda > 300000 && Deuda <= 800000){

        Descuento = Deuda *(40/100);
        ValorT = Deuda - Descuento;
        cout <<"Su descuento es de: " << Descuento << "el valor total es: " << ValorT << endl;
    }

    if (Deuda > 800000){

        Descuento = Deuda *(50/100);
        ValorT = Deuda - Descuento;
        cout <<"Su descuento es de: " << Descuento << "el valor total es: " << ValorT << endl;
    }

    return 0;
}