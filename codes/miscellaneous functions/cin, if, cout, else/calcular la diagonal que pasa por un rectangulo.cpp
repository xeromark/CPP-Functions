#include <iostream>
#include <math.h>
using namespace std;

int main()

{ cout <<"si desea calcular la distancia de la diagonal que pasa por un rectangulo, ingrese uno de sus lados"<<endl;

float c1;

cin >> c1;

cout <<"ahora ingrese el otro lado del rectangulo" <<endl;

float c2;

cin>> c2;

float diagonal_rectangulosinraiz = pow(c1,2) + pow(c2,2);

float diagonal_rectangulo = pow(diagonal_rectangulosinraiz,0.5);

cout << diagonal_rectangulo;
}

