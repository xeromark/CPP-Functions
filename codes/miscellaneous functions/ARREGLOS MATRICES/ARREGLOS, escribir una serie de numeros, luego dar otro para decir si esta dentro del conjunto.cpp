#include <iostream>

using namespace std;

int main()
{//Escriba un programa que pida al usuario ingresar 100 enteros a un arreglo, y un entero N. Luego, el programa debe buscar si N está dentro de los 100 elementos de arreglo, e imprimir en pantalla "N está en el arreglo" o bien "N no está en el arreglo

int array[10];

for (int i=0;(i<10);i++){	cout <<"ingrese un numero: ";	cin >> array[i];}

cout <<"ahora ingrese numeros para saber si estan dentro del conjunto anterior"<< endl;

while(true){ 
int j=0;

int k; 
cin>> k;

for (int i=0;(i<10);i++){ if (array[i]==k){j++; }}
											
if (j>0){	cout <<"Su numero esta dentro del conjunto"<< endl;	} else {	cout <<"Su numero NO esta dentro del conjunto"<< endl;	}}



}
