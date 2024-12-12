#include <stdio.h>
#include <iostream>
using namespace std;
//Escriba un programa, que pida un entero n  al usuario, para luego pedirle n^2 valores para rellenar una matriz de n x n. A continuación, indique si es una matriz triangular superior, triangular inferior, ambas o ninguna
int main()
{
cout <<"indique el tamaño de su matriz"<< endl;
  int n;
  cin >>n;
  
  int i=n;
  int j=n;
   int M_superior[i][j];
   
   cout <<"Ingrese los numeros de su matriz"<<endl<<endl;
   
   for ( i=0;i<n;i++){ for (j=0;j<n;j++){ cout <<"Matriz [" << i << "]" << "[" <<j<< "]: "; cin>>M_superior[i][j];}}
   
   for ( i=0;i<n;i++){ for (j=0;j<n;j++){   if(i<=j){ cout << M_superior[i][j] <<"\t" ; } else { cout <<0 <<"\t" ;}} cout<<endl;}
cout<<endl<<endl;
   for ( i=0;i<n;i++){ for (j=0;j<n;j++){   if(i>=j){ cout << M_superior[i][j] <<"\t" ; } else { cout <<0 <<"\t" ;}} cout<<endl;}
  
 
}





