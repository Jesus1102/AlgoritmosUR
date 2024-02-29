#include <iostream>

using namespace std;

int main(){

    int opcion;

    string NombreUsuario, ClaveUsuario, NombreUsuario1, ClaveUsuario1;

    cout << "Bienvenido, 1. para registrarse " << endl << "2. para inciar sesion " << endl << "0. para salir" << endl;
    cin >> opcion;

    while (true){
        if (opcion == 1){

            cout << "Ingrese su nombre se usuario" << endl;
            cin>> NombreUsuario;

            cout << "Ingrese su clave" << endl;
            cin>> ClaveUsuario;

        }
        if (opcion == 2){
            
            cout << "Ingrese su nombre se usuario" << endl;
            cin>> NombreUsuario1;

            cout << "Ingrese su clave" << endl;
            cin>> ClaveUsuario1;

            if (NombreUsuario1 == NombreUsuario && ClaveUsuario1 == ClaveUsuario){

                cout << "Bienvenido " << endl;
                
            }
            

        }
        if (opcion == 0){

            break;

        }
        
        
        
    }
    



    return 0;
}