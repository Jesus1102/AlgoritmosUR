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
    
    tiempo = Distancia /(v1-v2);
    
    cout << "El tiempo de tiempo en el que se encuentran es: " << timepo << endl;
    
    
    

    return 0;
}