#include <iostream>

using namespace std;

int main()
{

int array[10];
int k=0;
int j=0;
for (int i=0;(i<10);i++){	cout <<"ingrese un numero: ";	cin >> array[i]; if (array[i]>=10){ k++;}else {j++;}}



for (int i=0;(i<10);i++){	if (array[i]>=10){ cout <<array[i]<<endl;}	}

cout <<"hay "<<k<<" numeros mayores que 10" << endl;
cout<<"Hay "<<j<<" numeros menores que 10" <<endl;
}
