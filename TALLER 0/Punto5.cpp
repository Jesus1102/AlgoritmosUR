#include <iostream>
using namespace std;

int main() {
    
    int Distancia, v1, v2, tiempo = 0;
    
    cout << "ingrese la distancia entre las dos ciudades: ";
    cin >> Distancia;
    
    cout << "Ingrese la velocidad del primer carro: ";
    cin >> v1;
    cout << "Ingrese la velocidad del segundo carro:: ";
    cin >> v2;
    
    if (v1 <= v2) {
        cout << "Los automóviles nunca se encuentran o ya se han encontrado." << endl;
    } else {
        tiempo = Distancia / (v1 - v2);
        cout << "El tiempo en el que se encuentran es: " << tiempo << " horas." << endl;
    }
    
    

    return 0;
}
