#include <iostream>

using namespace std;

int main()
{
    cout<<"Ingrese sus coordenadas para determinar el cuadrante perteneciente "<<endl;
    cout <<"Eje X = "; int x; cin >> x;
    cout <<"Eje Y = "; int y; cin >> y;

    if ((x>0)&&(y>0) ) { cout <<"sus coordenadas estan en el PRIMER cuadrante"<<endl;
	}
    if ((x<0)&&(y<0) ) { cout <<"sus coordenadas estan en el TERCER cuadrante"<<endl;
	}
    if ((x<0)&&(y>0) ) { cout <<"sus coordenadas estan en el SEGUNDO cuadrante"<<endl;
	}
    if ((x>0)&&(y<0) ) { cout <<"sus coordenadas estan en el CUARTO cuadrante"<<endl;
	}
    if ((x==0)&&(y==0) ) { cout <<"sus coordenadas estan en el punto ORIGEN "<<endl;
	}
	if ((x<0)&&(y==0) || (x>0)&&(y==0) ) { cout <<"sus coordenadas estan en el EJE X "<<endl;
	}
	if ((x==0)&&(y<0) || (x==0)&&(y>0) ) { cout <<"sus coordenadas estan en el EJE Y "<<endl;
	}
    
}
