#include <iostream>

using namespace std;

int main()

//Dado un arreglo A de tamaño n, encontrar el mayor y el menor elemento de A.

{	cout << "Indique el tamaño de su arreglo" <<endl;
int i;
cin >>i;

cout << "Ahora ingrese numeros para saber cual es mayor o menor"<< endl;

int array[i];

int mayor;
int menor;

for (int k=0; k<=i;k++){ cin >>array[k]; }	mayor=array[0];		menor=array[0];	//añade inicialmente los valores para comparar luego
 
 								
for (int k=0; k<=i;k++){ 	if(array[k]>mayor) {mayor=array[k];}	//si el arreglo de este entonces es mayor que mi numero mas mayor, asginale el valor del arreglo de ese entonces a mi numero mas mayor, si no no hagas nada
							if(array[k]<menor) {menor=array[k];}	 } //lo mismo aca abajo pero con el arreglo menor

cout <<"mayor: " <<mayor	<<endl;
cout <<"menor: " <<menor	<<endl;

}
