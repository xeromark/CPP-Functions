#include <iostream>
#include <math.h>
using namespace std;

int main()
{

cout <<"valor de a:" << endl;

float a;

cin >> a;

cout <<"valor de b"<< endl;

float b;

cin >>b;

cout <<"valor c" << endl;

float c;

cin >> c;

float negativo_b= b*-1;

float discriminante_ecuacion=pow(b,2) -4*a*c;

float raiz_discriminante=pow(discriminante_ecuacion,0.5);

float suma_total=(discriminante_ecuacion+raiz_discriminante)/2*a;

float suma_totalsigno=(discriminante_ecuacion-raiz_discriminante)/2*a;

cout <<"X1 = "<<suma_total<< endl;

cout <<"X2 = "<<suma_totalsigno<< endl;
}
