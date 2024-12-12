#include <iostream>

using namespace std;

int main()
{
    cout <<"Indique su edad"<< endl;  // primero se pide la edad.
    
    int e;       //asignamos un valor a e.
    
    cin >> e; //le decimos que el valor que se coloque para "e", lo guarde en la memoria
    
    if (e<18);  // hacemos la condición, como es menor debe tener menos de 18 años
    
    cout << "usted es menor de edad, no puede acceder a la pagina"; //mostramos que es mayor de edad
    
    if (e>=18) //se coloca que tiene mayor O IGUAL a 18 años porque 18 es mayor de edad. si se coloca solo el mayor, no mostrara ningun dato.

    cout << "usted es mayor de edad por lo que puede acceder a esta pagina"; 

    return 0;
}

