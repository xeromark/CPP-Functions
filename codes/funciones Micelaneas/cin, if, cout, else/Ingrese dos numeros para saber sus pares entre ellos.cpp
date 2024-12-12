#include <iostream>

using namespace std;

int main()
{ cout << "Ingrese dos numeros para saber sus pares entre ellos" << endl;
int n1,n2;
cin>>n1>>n2;
	
	while (n1<=n2) {if (n1%2==0){cout <<n1<<endl;}								 //aca estoy diciendo, mientras que n1 sea menor o igual a n2
	n1++; //recordar que el n1++ va dentro del while, PERO NO DENTRO DEL IF  //me vas a imprimir n1 mas 1 si solo el residuo entre el n1 
	} 																	    //proximo es igual a 0 con esto arreglo que sean mostrados solo los pares
	
	while (n1>n2) {if (n1%2==0){cout <<n1<<endl;}	//aca es para calcular los pares de los numeros negativos							 
	n1--; 
	} 


return 0;

}
