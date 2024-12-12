#include <iostream>      
using namespace std;
int main()
{	//ejercicio: Pedirle al usuario otra matriz de5x5, luego indicar por pantalla si ambas matrices son iguales o no.
	
    //verificar si dos matrices son iguales punto a punto
    int matriz[3][3];
    cout << "Ingrese 9 numeros:"<< endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> matriz[i][j];
        }
    }
    cout << "Matriz ingresada:" << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout <<  matriz[i][j] << "\t";
        }
        cout << endl;
    }
    int matriz2[3][3];
    cout << "Ingrese otros 9 numeros:"<< endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> matriz2[i][j];
        }
    }
    bool iguales = true;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matriz[i][j] != matriz2[i][j]) iguales = false;
        }
    }
    if(iguales) cout << "Son iguales" << endl;
    else cout << "No son iguales" << endl;
    
    
    return 0;
}

