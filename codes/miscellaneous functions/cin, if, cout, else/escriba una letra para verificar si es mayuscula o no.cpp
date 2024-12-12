#include <iostream>

using namespace std;

int main()
{
    cout<<"escriba una letra para verificar si es mayuscula o no" << endl;
    
    char v; //mientras estaba dando una idea que podria hacerl ode esta manera pero si hay otra mejor estaria bien porque no es latoso
    
    cin >> v;  //de esta manera pienso que se hace
    
    if (v== 'a' || v=='b'|| v=='c' || v=='d'||v=='e'||v== 'f' || v=='g'|| v=='h' || v=='i'||v=='j'||v== 'k' || v=='l'|| v=='m' || v=='n'||v=='o'||v== 'p' || v=='q'|| v=='r' || v=='s'||v=='t'||v== 'u' || v=='v'|| v=='w' || v=='x'||v=='y'||v== 'z') 
	{cout <<"su letra es minuscula"<< endl;
	} else (cout <<"su letra es mayuscula"); 
    
	    
    return 0;
}

