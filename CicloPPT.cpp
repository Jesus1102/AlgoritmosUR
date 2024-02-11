#include <iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main(){
    srand(time(NULL));

    int random, Eleccion;
    
    random = rand()%3;

    cout << "Eliga una opcion:" << endl;
    cout << "0. para piedra" << endl;
    cout << "1. para papel" << endl;
    cout << "2. para tijera" << endl;
    cin >> Eleccion ;

    while (random == Eleccion){
        cout << "Es un empate" << endl;
        break;
    }
    while(Eleccion == 0 && random == 2){
        cout << "ganaste" << endl;
        break;
    }
    while(Eleccion == 1 && random == 0){
        cout << "ganaste" << endl;
        break;
    }
    while(Eleccion == 2 && random == 1){
        cout << "ganaste" << endl;
        break;
    }
    while(Eleccion == 2 && random == 0){
        cout << "Perdiste" << endl;
        break;
    }
    while(Eleccion == 1 && random == 2){
        cout << "Perdiste" << endl;
        break;
    }
    while(Eleccion == 0 && random == 1){
        cout << "Perdiste" << endl;
        break;
    }
    
    return 0;
}   