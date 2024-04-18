#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if( n % 2 == 0 || n == 0 || n == 1) return false;
    for(int i = 2; i <= n/2; i++){
        if( n % i == 0){
            return false;
        }
    }
    return true;
}

/*
* Implemente una función que reciba un entero n e imprima
* los n primeros nros primos.
*/
void printNPrimos(int n) {          // n = 5
    /*                              
    contador = 1 
    tmp = 2
    MIENTRAS contador <= n                1 < 5         2 < 5       3 < 5       3 < 5       4 < 5       4 < 5       5 <= 5  5 <= 5  5 <= 5      5 <= 5  6 <= 5
        SI tmp es PRIMO                     
            imprimir tmp                       2          3                      5                         7                                        11
            incremento contador             2           3                       4                       5                                       6
        incremento a tmp                    3           4             5         6              7        8           9       10      11          12
    */
    int counter = 1, tmp = 2;
    while(counter <= n) {
        if(esPrimo(tmp)) {
            cout << tmp << " ";
            counter++;
        }
        tmp++;
    }
}

int main(){

    long long numero;
    bool noEsPrimo = false;

    cout<<"Introduce el numero: ";cin>>numero;

    printNPrimos(numero);
    /*if( esPrimo(numero) ) {
        cout << numero << " ES PRIMO" << endl;
    }else{
        cout << numero << " NO ES PRIMO" << endl;
    }*/

    return 0;
}