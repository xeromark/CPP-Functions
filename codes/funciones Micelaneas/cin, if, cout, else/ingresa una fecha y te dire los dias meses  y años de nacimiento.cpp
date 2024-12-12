#include <iostream>

using namespace std;

int main()
{ cout <<" formato aaaammdd"<<endl;
int a;
cin >>a;
cout << "dias ingresados: " << a%100 <<endl;
cout << "meses ingresados: " << (a/100)%100 <<endl;
cout << "año ingresados:  " << (a/10000)%100 <<endl;

}

