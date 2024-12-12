#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
   //a) pedir numeros mientras sean positivos
   //b) sumar una serie de números
   //c) dividir la suma por la cantidad total de notas
   float x=0;
   float suma = 0;
   int nr_notas = 0;
   while(x>=0){
       suma += x;
       cout << "Ingresa una nota:";
       cin >> x;
       nr_notas++;
   }
   float promedio = suma/nr_notas;
   cout << "promedio:" << promedio << endl;
   return 0;
}

