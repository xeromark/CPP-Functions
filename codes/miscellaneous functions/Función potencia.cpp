#include <iostream>

using namespace std;

int po(int a, int b){

int c=a;
	while(b>1){ a*=c; b--;

	} int x=a;
	return x;
	
}



int main()  //el progra primero empieza a leer desde aca 
{
	cout << "Ingrese dos variables para elevarlas de manera que la primera es la base y la segunda exponente" <<endl;
	int x; //declaro que tanto el x y el y existen
	int y;
	cin >>x >>y;  // asigno valores de x e y;
 cout << po(x,y); // imprimo, el resultado (return) que me dio en la funcion po
 					//el x pasa a ser el a y el y pasa a ser el b de la funcion creada anteriormente
		

	
}

