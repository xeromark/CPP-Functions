#include <stdio.h>
#include <iostream>
using namespace std;

//La conjetura primos gemelos dice que existen infinitos numeros A y B positivos
//enteros, de forma que A = B+2, y tanto A como B son primos.
//(En otras palabras, primos separados por 2, por ejemplo: 3 y 5, o bien 29 y 31, etc.)
//Se pide crear un programa, que para un N dado por el usuario, indique el los primos gemelos
//más grandes menores a N. (A y B < N).
//por ejemplo si N = 8, A=7, y B=5

bool esPrimo(int n){
    for(int i=2;i<n;i++) if(n%i==0) return false;
    return true;
}

int main()
{
    int N;
    cout << "Ingrese el N para buscar primos gemelos" << endl;
    cin >> N;
    for(int i=N;i>1;i--){
        if(esPrimo(i) && esPrimo(i-2)){
            cout << i << " y " << i-2 << endl;
            break;
        }
    }
    return 0;
}





