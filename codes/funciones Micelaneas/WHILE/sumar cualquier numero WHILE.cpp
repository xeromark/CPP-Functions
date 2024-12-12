#include <iostream>
using namespace std;

int main()
{
    //problema: solicitar 100.000 enteros y entregar la suma de éstos
    //división del problema:
    //parte 1: solicitar 100.000 enteros
    //parte 2: sumar todos los numeros ingresados
    cout << "ingrese 100.000 enteros:" << endl;
    int i=0; //i es un 'contador', pues contará la cantidad de ciclos
    int suma = 0; //suma es un 'acumulador', pues acumulará el resultado de la suma parcial
    int a; //variable usada para ingreso de usuario con cin
    while(i<10){
        cin >> a; //ingreso de un entero
        suma += a; //esto es equivalente a escribir suma = suma+a;
        i++; //aumento del contador
        cout << "Al finalizar el ciclo " << i << " la suma parcial es de:" << suma << endl; //mostrar resultado parcial
    }
    cout << "suma total:" << suma << endl; //mostramos la suma final
    return 0;
}
