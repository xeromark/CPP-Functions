#include <iostream>

using namespace std;

int main()
{
    cout<<"Ingrese la distancia (en km) y la velocidad en (km/h) respectivamente para indicar su tiempo estimado de llegada" << endl;
    cout << "distancia: "; int distancia; cin >> distancia;
    cout << "velocidad: "; int velocidad; cin >> velocidad; 
    
        cout<<"" << endl; //formula para calcular velocidad  es v=d/t


	int tiempo= distancia/velocidad;

	int tiempo_minutos=	tiempo*60;
;


        cout<<"su tiempo estimado es de: "<< tiempo << "minutos" << endl;

    
    
    
    
}
