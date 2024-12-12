#include <iostream>
#include <math.h>

using namespace std;

int main()
{ cout << "Ingrese un numero de 11 digitos para validar si es un numero espejo" <<endl;
double n;
cin>>n;
int resto;
int contador=1;
double aux=n;
double arreglo[10];

    for(int i=10;i>=0;i--){ resto=fmod(aux,10); arreglo[i]=resto;        aux=aux/10; }
    
 for(int i=0;i<11;i++){ cout<<arreglo[i];} cout <<endl<<endl;
 
 
int arreglo2[10];

    for(int i=0;i<11;i++){arreglo2[i]=arreglo[i];}  

    arreglo2[6]=arreglo[4];
    arreglo2[7]=arreglo[3];
    arreglo2[8]=arreglo[2];
    arreglo2[9]=arreglo[1];
    arreglo2[10]=arreglo[0];
int k=0;

    for(int i=0;i<11;i++){    if(arreglo2[i]!=arreglo[i])    {     k++;}}  

if(k==0){    cout <<"Su numero ingresado CUMPLE con las propiedades de un numero espejo  "<<endl;    } else{    cout <<"Su numero ingresado NO CUMPLE con las propiedades de un numero espejo  "<<endl;
}

 

}

