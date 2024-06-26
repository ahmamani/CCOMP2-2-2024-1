#include <iostream>

/* iterativo */
int fibo(int n) {
    int t1 = 1;
    int t2 = 1;
    int t3 = 1;
    for(int i = 1; i <= n; i++){
        if( i == 1){            
            continue; 
        }
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    return t3;
}

/* recursivo */
int fibo_rec(int n) {
    if(n == 1 || n == 0) {
        return 1;
    } else {
        return fibo_rec(n-2) + fibo_rec(n - 1);
    }
}

/*factorial 
 n! = n * (n-1)!
*/
int factorial(int n) {
    if(n == 1)
        return 1;
    else
        return n * factorial(n-1);
}

using namespace std;
 int main(){
    int numero;
    int t1=1;
    int t2=1;
    int t3;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    cout << "El " << numero << " fib es: " << fibo(numero) << endl;
    cout << "El " << numero << " fib es: " << fibo_rec(numero);

    cout << "El " << numero << " \n\nfactorial de N es: " << factorial(numero);
    return 0;
 }