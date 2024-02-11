#include <iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main(){
    srand(time(NULL));

    int random, Eleccion;

    random = rand()%2;
      
    cout << "Eliga una opcion:" << endl;
    cout << "0. para cara" << endl;
    cout << "1. para sello" << endl;
    cin >> Eleccion ;

    while(Eleccion == random){

        cout << "Felicidades, Ganaste" << endl;

    }
    while(Eleccion != random){

        cout << "Lo siento, Perdiste" << endl;
    }
    return 0;

}