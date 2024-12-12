#include <iostream>

using namespace std;

int main()
{ cout <<"ingrese cuanto desea medir en segundos cuando un objeto ha caido"<<endl;
	
	int n;
	cin >>n;
	

	
	for (int i=1;i<=n;i++) { int segundos_transcurridos= 0.5*9.8*i*i;
								cout << "su objeto ha caido " << segundos_transcurridos << " metros a los " << i << " segundos" <<endl;
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
}
