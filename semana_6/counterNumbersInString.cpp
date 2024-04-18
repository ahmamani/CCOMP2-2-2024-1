/**
 * Escriba una función que reciba una cadena y retorne cuantos numeros
 * tiene dicha cadena
*/
#include <iostream>

using namespace std;

int contarNumerosEnCadena(string cad) {
    int counter{0};
    for( int i = 0; i < cad.length()  ; i++ ) {                
        int val = static_cast<int>(cad.at(i));
        if(val >= 48 && val <= 59)
            counter++;
    }
    return counter;
}

int main(){
    string cad;
    cout << "Ingrese una cadena por favor: ";
    getline(cin, cad);

    cout << contarNumerosEnCadena(cad) << endl;
    return 0;
}
