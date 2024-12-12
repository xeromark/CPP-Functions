#include <iostream>

using namespace std;

int main() 	
//Pedirle al usuario 25 valores y almacenarlos en una una matriz de 5x5. Luego de eso debe imprimirla por pantalla. 

{//recordar    x  y  
	int matriz[5][5];
	//eje x primero luego "y" dentro del x
	for (int k=0;k<5; k++){	matriz[4][4]=0;	}


	
	cout << "ingrese 25 valores para guardarlos en una matriz"<<endl;
	cout <<endl;
	
	for (int i=0;i<5;i++) {	for (int j=0; j<5;j++){	cout<<"matriz "<<"["<<i<<"]"<<"["<<j<<"]: "; cin >> matriz[j][i];		} }

cout <<"0	1	2	3	4"<<endl<<endl;

	for (int i=0;i<5;i++) {	for (int j=0; j<5;j++){	cout << matriz[j][i] <<"\t" ;		} cout<<endl;}
	
	
}
