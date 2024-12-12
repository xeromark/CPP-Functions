#include <iostream>

using namespace std;

int main()
{	int contador_digitos=0;
	int cantida_resto;
	cin >> cantida_resto;
	while (cantida_resto*0.1>0) { cantida_resto=cantida_resto*0.1;			contador_digitos++;
		
	} cout<< contador_digitos << endl;
	
}
