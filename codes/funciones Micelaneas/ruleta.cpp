
#include <iostream>
#include <math.h>
using namespace std;

float porcentaje(int ruleta[37], int n){
	 for (int i=0;i<37;i++){ ruleta[i]+=2;	i++;}

	cout <<"ingrese el numero sorteado"<<endl;
	cin>> n;
	cout <<"ahora ingrese el numero de vueltas de la ruleta"<<endl;
	int k;
	cin>>k;
		cout <<"El porcentaje de su numero sorteado es de ";

	cout << (ruleta[n]*100)/k;
	
}

void actualiza(int ruleta[37], int n){
	 for (int i=0;i<37;i++){ ruleta[i]+=2;	i++;}

	cin>>n;
	
	ruleta[n]++;
	
}

void nuncaSalen(int ruleta[37]){ 

// suponiendo que el usuario ya ingreso valores

 for (int i=0;i<37;i++){ ruleta[i]+=2;	i++;}
// suponiendo que el usuario ya ingreso valores

cout <<"Los numeros que no salieron sorteados hoy fueron: ";
for (int i=0;i<37;i++){	if (ruleta[i]==0) { cout <<i<<", ";  }}
	

	
}

int main(){ //for (int i=0;i<37;i++){		}

	
	
	int n=5;
while (n!=0){cout <<"Escriba 1 para saber los numeros que nunca han sido sorteados hoy."<<endl;
			 cout <<"Escriba 2 para  ingresar el numero sorteado"<<endl;
		    cout <<"Escriba 3 para saber el porcentaje que ha salido un numero sorteado"<<endl;

			 cout <<"Escriba 0 para cerrar el programa"<<endl;
		
			 cin >>n;
	
			 int ruleta[37];
			 int j;
			 
			 if (n==1){ nuncaSalen(ruleta); 	cout <<endl<<endl;	 }
		
			 			
			 if (n==2){ actualiza(ruleta,j); cout <<endl<<endl;		 }
			 			 if (n==3){ porcentaje(ruleta,j); cout <<endl<<endl;		 }

			 
			 if (n==0){return 0;	 }

}}

