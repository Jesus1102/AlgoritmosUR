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
    

    return 0;
}