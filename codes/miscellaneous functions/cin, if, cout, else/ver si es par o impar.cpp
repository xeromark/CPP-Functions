#include <iostream>

using namespace std;

int main()
{
    cout <<"ingrese un numero entero y le dire si es par o impar" << endl;
    
    int n1;
    
    cin >> n1;
    
    int numero_op = n1%2;
	
	if (numero_op==1) {                    
	
	
	 cout <<"su numero ingresado es impar" ; } // se debe recordar que e lif no lleva ; en su condicion
	 
	 if (numero_op==0) {
	 
	 
	 cout <<"su numero ingresado es par";}
	 
	 return 0;
	
}
