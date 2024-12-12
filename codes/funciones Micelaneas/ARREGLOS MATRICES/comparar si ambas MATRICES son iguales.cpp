#include <iostream>

using namespace std;

int main() 	
//Pedirle al usuario otra matriz de 5x5, luego indicar por pantalla si ambas matrices son iguales o no.

{ 
	int matriz[5][5];
	//eje x primero luego "y" dentro del x
	
	cout << "ingrese 25 valores para guardarlos en una matriz"<<endl;
	cout <<endl;
	
	for (int i=0;i<5;i++) {	for (int j=0; j<5;j++){	cout<<"matriz "<<"["<<i<<"]"<<"["<<j<<"]: "; cin >> matriz[j][i];		} }



	for (int i=0;i<5;i++) {	for (int j=0; j<5;j++){	cout << matriz[j][i] <<"\t" ;		} cout<<endl;}
	 cout<<endl<<endl;
	for (int i=4;i>-1;i--) {	for (int j=4; j>-1;j--){	cout << matriz[j][i] <<"\t" ;		} cout<<endl;}
	
	//otra matriz

	//otra matriz
	
int matrizn2[5][5];
	//eje x primero luego "y" dentro del x

	cout << "ingrese otros 25 valores para guardarlos en una matriz"<<endl;
	cout <<endl;
	
	for (int i=0;i<5;i++) {	for (int j=0; j<5;j++){	cout<<"matriz "<<"["<<i<<"]"<<"["<<j<<"]: "; cin >> matrizn2[j][i];		} }



	for (int i=0;i<5;i++) {	for (int j=0; j<5;j++){	cout << matrizn2[j][i] <<"\t" ;		} cout<<endl;}
	 cout<<endl<<endl;
	
	//comparacion para ver si son iguales
	int comprobacion=0;

	for (int i=0;i<5;i++){for (int j=0;j<5;j++)	{	if (matriz[i][j]!=matrizn2[i][j]){comprobacion++;}}}

if (comprobacion==0){cout<<"Sus matrices son iguales"<<endl;}else{cout<<"sus matrices son DIFERENTES"<<endl;	}


	
}




