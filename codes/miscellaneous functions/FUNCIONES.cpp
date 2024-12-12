#include <iostream>
using namespace std;

//problema: hacer programa interactivo que permita verificar si numeros
//ingresados por el usuario son primos, pares o positivos.

//Esta función retorna verdadero si num es primo, o falso si no.
bool esPrimo(int num){
    if(num<=1) return false;
    for(int i=2;i<num;i++){
        if(num%i==0) return false;
    }
    return true;
}

//esta funcion retorna verdadero si num es par, y falso si es impar
bool esPar(int num){
    if(num%2==0) return true;
    else return false;
}

//esta funcion muestra el menu principal del programa por la consola
void imprimirMenu(){
    cout << "Bienvenido a el programa de propiedades de numeros"<< endl;
    cout << "Opciones:"<< endl;
    cout << "(1) Verificador de primos"<< endl;
    cout << "(2) Verificador de pares"<< endl;
    cout << "(3) Verificador de positivos"<< endl;
    cout << "(4) Salir"<< endl;
    cout << "Ingrese opcion:";
}

int main(){
    int op = 9;
    while(op!=4){
        imprimirMenu();
        cin >> op;
        if(op == 1){
            cout << "Ingrese numero:";
            int x;
            cin >> x;
            if(esPrimo(x)) cout << "Es primo" << endl;
            else cout << "No es primo" << endl;
        }
        else if(op == 2){
            cout << "Ingrese numero:";
            int x;
            cin >> x;
            if(esPar(x)) cout << "Es par" << endl;
            else cout << "No es par" << endl;
        }
        else if(op == 3){
            
        }
        else if(op == 4){
            cout << "Adios" << endl;
        }
        else{
            cout << "Opción inválida" << endl;
        }
    }
    return 0;
}




