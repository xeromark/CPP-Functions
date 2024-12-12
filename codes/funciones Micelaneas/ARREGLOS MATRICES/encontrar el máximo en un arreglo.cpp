#include <stdio.h>
using namespace std;
#include <iostream>

int main()
{
    //problema: encontrar el máximo en un arreglo
    int arr[5];
    cout << "Ingrese 5 numeros:" << endl;
    for(int i=0;i<5;i++) cin >> arr[i];
    
    int max = arr[0]; //la variable max guardará el máximo hasta ese momento
    for(int i=1;i<5;i++){
        if(arr[i] > max) max = arr[i];
    }
    cout << "El mayor numero es el " << max << endl;
    
    return 0;
}

