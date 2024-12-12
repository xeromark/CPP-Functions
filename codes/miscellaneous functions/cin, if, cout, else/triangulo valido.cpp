#include <iostream>

using namespace std;

int main()
{
    cout<<"ingrese tres angulos para saber si con eso se puede hacer un triangulo valido" << endl;
    
    float a1,a2,a3;
    
    cin >>a1>>a2>>a3;
    
    float suma_total=a1+a2+a3;
    
    if (suma_total==180) {cout <<"su triangulo es valido";} else (cout <<"su triangulo NO es valido");
	}
    
