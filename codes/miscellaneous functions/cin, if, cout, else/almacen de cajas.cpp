#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout <<"la arista de una caja" << endl;
    
    float c1;
    
    cin>> c1;
    
    float v_cajas=pow(c1,3);
    
   
    
    cout<<"el tama�o de su caja es " << v_cajas <<  " metros cubicos" <<endl;
    
    cout <<"indique cuantas cajas quiere transferir al almacen" << endl;
    
    float nc;
    
    cin >> nc;
    
    float volumen_total = v_cajas*nc;
	
	cout <<"el tama�o que requerir� en el almacen es de " <<volumen_total<<" metros cubicos. Si el numero es mayor a 56000 metros cubicos, no podra colocarlas todas"<< endl;   
    
    
    return 0;
}

