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

    if (random == Eleccion){
        cout << "Es un empate" << endl;
    }
    else if(Eleccion == 0 && random == 2){
        cout << "ganaste" << endl;
    }
    else if(Eleccion == 1 && random == 0){
        cout << "ganaste" << endl;
    }
    else if(Eleccion == 2 && random == 1){
        cout << "ganaste" << endl;
    }
    else{
        cout << "Perdiste" << endl;
    }
    
    return 0;
}   