#include <iostream>

using namespace std;

int main()
{
cout << "Indique que a�o quiere saber si es bisiesto"<< endl;

int anio;
cin >> anio;

int comprobacion_anios= anio%4;

if (comprobacion_anios==0) { cout <<"su a�o ingresado es bisiesto" << endl;}

else (cout << "su a�o ingresado no es bisiesto")<<endl;

                //apartir de aca ya es puro invento mio, queria ver cual es otra opcion como a�o bisiesto
cout << "                                              " <<endl; //aca solo queria espacio para ordenar a la hora de ejecutar como programa

if (comprobacion_anios==1) {cout <<"No obstante, el a�o " <<anio-1<<" o "<<anio+3<< " SI son bisiestos";}
if (comprobacion_anios==2) {cout <<"No obstante, el a�o " <<anio-2<<" o "<<anio+2<< " SI son bisiestos";}
if (comprobacion_anios==3) {cout <<"No obstante, el a�o " <<anio-3<<" o "<<anio+1<<" SI son bisiestos";}


}










