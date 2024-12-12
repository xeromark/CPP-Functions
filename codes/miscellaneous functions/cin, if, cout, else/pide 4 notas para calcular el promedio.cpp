#include <iostream>

using namespace std;

int main()
{
    cout<<"escriba 4 notas de su semestre" <<endl;
   
    float c1,c2,c3,c4;
	
	cin >> c1 >> c2 >> c3>> c4;
	
	float nota_uno= c1+c2+c3+c4;
	
	float nota_total=nota_uno/4;
	
    cout << nota_total<< endl;
    
    if (nota_total>=4) {
    
    cout <<"aprobaste el semestre"; }
	    
	    else {cout <<"REPROBASTE EL SEMESTRE";
		}
    return 0;
}




