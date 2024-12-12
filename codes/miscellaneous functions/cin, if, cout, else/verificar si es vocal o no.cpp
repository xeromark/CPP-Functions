#include <iostream>

using namespace std;

int main()
{
    cout<<"escriba una letra y le dire si es vocal o no" << endl;
    
    char v;
    
    cin >> v;
    
    if (v== 'a' || v=='e'|| v=='i' || v=='o'||v=='u') {cout <<"su letra es vocal"<< endl;
	} else (cout <<"su letra es consonante");
    
	    
    return 0;
}

