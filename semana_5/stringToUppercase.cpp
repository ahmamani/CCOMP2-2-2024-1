/**
 * Implemente un programa que pida por teclado una cadena considerando espacios,
 * y convierta dicha cadena a Mayusculas
*/
#include <iostream>

using namespace std;

int main(){
    string cad;
    cout << "Ingrese una cadena por favor: ";
    getline(cin, cad);

    char c;
    for( int i = 0; i < cad.size(); i++ ) {        
        c = cad.at(i);
        int val = static_cast<int>(c);
        if(val >= 97 && val <= 122)
            cad.at(i) = c - 32;  //toupper(c);
    }
    
    cout << cad << endl;
    return 0;
}