#include <iostream>

using namespace std;

int main(){
    int OpcionLlamada, DuracionLlamada, ValorLlamada = 0; 
    cout << "Cual es tu tipo de llamada?" << endl;
    cout << " 1. para llamada nacional $200/min" << endl;
    cout << " 2. para llamada celular $300/min" << endl;
    cout << " 3. para llamada internacional $500/min" << endl;
    cin >> OpcionLlamada;

    cout << "Cuanto dura tu llamada?" << endl;
    cin >> DuracionLlamada;

    
    
    switch (OpcionLlamada)
    {
    case 1:
        ValorLlamada = DuracionLlamada * 200;
        cout << "El costo de la llamada es: " << ValorLlamada << endl; 
        break;
    case 2:
        ValorLlamada = DuracionLlamada * 300;
        cout << "El costo de la llamada es: " << ValorLlamada << endl; 
        break;
    case 3:
        ValorLlamada = DuracionLlamada * 500;
        cout << "El costo de la llamada es: " << ValorLlamada << endl; 
        break;
    default:
        cout << "Numero ingresado no valido" << endl;
        break;
    }

    

    return 0;
}       