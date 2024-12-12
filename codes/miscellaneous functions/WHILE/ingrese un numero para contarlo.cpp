#include <iostream>
using namespace std;

int main()
{
 //problema: dado n, contar hasta 1, luego 2, luego 3, etc hasta n..
 cout <<"Ingrese n:";
 int n;
 cin >> n;
   int k=1;
   while(k<=n){
       //sub-problema: dado un k cualquiera, contar hasta k..
      for(int i=1;i<=k;i++) cout << i << endl; //este for cuenta de 1 a k
      k++;
   }
   
   return 0;
}

