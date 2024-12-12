#include <iostream>

using namespace std;

int main()     //crear un arreglo con los pares del 1 al 1000.
{ int numeros_pares[500];  //declaro mi arreglo, puede ser mayor en teoria, pero aca solo necesito que guarde 500 variables porque del 0 al mil hay 500 pares

int k=0; // este numero lo defini para que cuando el i sea 2, ese 2 se guarde en k[0]

for (int i=0; i<1000 ; i=i+2) {
	numeros_pares[k]= i+2;   //aumento el i en 2 en dos para que me imprima solo los pares
	k=k+1;                    //y por ultimo sumo k+1 para que en la proxima asignacion, el i+2 se guarde en el k+1.
	
}

for (int i=0; i<500 ; i++) { cout <<numeros_pares [i]<< endl; //aca solicito imprimir mis numeros, el 500 porque solo guarda 500 variables las cuales son pares hasta el 1000
}



}
