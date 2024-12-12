#include <iostream>

using namespace std;

int main()
{
    cout<<"escriba un numero y le dire si es negativo, positivo o cero"<<endl;
	    
	    float n;
	    
	    cin >> n;
	    
	    if (n<0) {cout <<"su numero es negativo";
		} 
		
		if (n>0) {cout <<"su numero es positivo";
		} 
		
		if (n==0) {cout <<"su numero es igual a cero";
		} 
	    
    return 0;
}



