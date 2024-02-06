#include <iostream>

using namespace std;

int main(){

    float DosisVacuna = 0, PesoBebe;
    int MesesBebe;
    
    cout << "Ingrese el peso del bebe: " << endl;
    cin >> PesoBebe;

    cout << "Ingrese la edad  del bebe: " << endl;
    cin >> MesesBebe;

    DosisVacuna = ((PesoBebe +10)/(MesesBebe*10)*8);

    cout << "La dosis adecuada es: " << DosisVacuna << endl;

    return 0;
}
