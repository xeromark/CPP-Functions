#include <iostream>

using namespace std;

int main()
{ cout << "Ingrese su sueldo" << endl;
float sueldo;
cin >>sueldo;
cout << "Ingrese los años que lleva en la empresa" << endl;
float edad;
cin >>edad;

if (edad>10) {cout <<"su sueldo es de: "<< (sueldo*0.25) + sueldo<<endl;}
	if ((edad<=10)&&(edad>=2)) {cout <<"su sueldo es de: "<< (sueldo*0.1) + sueldo<<endl;}
		if (edad<2) {cout <<"su sueldo es de: "<< (sueldo*0.05) + sueldo <<endl;}
		
float a;
cin >>a;  // esto que coloco aca es cuando el programa sea ejecutado, en su finalizacion no se cierre automaticamente

return 0;




}
