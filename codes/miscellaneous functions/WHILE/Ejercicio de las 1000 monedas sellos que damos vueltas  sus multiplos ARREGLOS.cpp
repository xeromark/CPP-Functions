#include <iostream>

using namespace std;

int main() 	

/*Hay 1000 monedas mostrando sello. +
Una persona da vuelta todas las monedas pares.+
 Después da vuelta todas las monedas múltiplos de 3. +
 Luego todas las monedas múltiplos de 4, y así hasta todas las multiplos de 1000.
 Imprimir por pantalla todos los números de monedas (por ejemplo la moneda 1, la 4, etc..) que muestran cara.
 Hint 1: Usar un arreglo de boolHint 2: Arr[i] = !Arr[i];*/
 
{bool array[1000]; //cara:1 ; sello:0
	
	
	for (int i=1;i<=1000;i++){ array[i]=false; } //le asignamos a todas el sello
	
	for (int i=1;i<=1000;i++){ if(i%2==0){ array[i]=true; } } //volteamos las de multiplo de 2
	
	for (int i=1;i<=1000;i++){ if(i%3==0){ array[i]=true; } if((i%3==0)&&(i%2==0)){ array[i]=false; }}	//ahora volteamos las multiplos de 3
	
	for (int i=1;i<=1000;i++){ if (i%4==0) {if(array[i]==false){array[i]=true;}else{array[i]=false;}}} //ahora con los multiplos de 4
	
	for (int i=1;i<=1000;i++){ if (1000%i==0) {if(array[i]==false){array[i]=true;}else{array[i]=false;}}}	//ahora damos vuelta a las multiplos de 1000
	
	for (int i=1;i<=1000;i++){ if(array[i]==true){	cout<< i << " = " <<array[i]<<endl; }}		//ahora mostramos solo las caras

}
