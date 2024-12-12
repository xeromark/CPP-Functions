#include <iostream>
using namespace std;

int main()
{
    
  //problema: ver su un mumero es primo o no.
  //estrategia: dado un n, revisar todos los numeros entre [2,n-1] a ver si lo dividen
  //sub-problema: crear un programa que recorra los numeros 2 -> n-1
  int N;
  cout << "Ingrese numero:" << endl;
  cin >> N;
  int numdivisores = 0;
  for(int i=2;i<N;i++){
     if (N%i==0){
         numdivisores++;
     }
  }
  if(numdivisores == 0) cout << N << " es primo." << endl;
  else cout << N << " no es primo." << endl;
}

