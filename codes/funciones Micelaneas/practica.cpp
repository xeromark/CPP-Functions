
#include <iostream>
#include <math.h>
using namespace std;

int votos[5];

void primarias(){
//suponiendo que el usuario ya ha ingresado los votos
//boric=1.000.000
//Briones=3.000.000
//Desbordes=800.000
//Jaude=1.500.000
//Lavin=2.400.000
//sichel=6.185.726


votos[0]=1000000;
votos[1]=3000000;
votos[2]=800000;
votos[3]=1500000;
votos[4]=2400000;
votos[5]=1800000;

cout <<"Boric obtuvo el "<< (votos[0]*100)/14885726 << "% de los votos"<<endl;
cout <<"Briones obtuvo el "<< (votos[1]*100)/14885726 << "% de los votos"<<endl;
cout <<"Desbordes obtuvo el "<< (votos[2]*100)/14885726 << "% de los votos"<<endl;
cout <<"Jaude obtuvo el "<< (votos[3]*100)/14885726 << "% de los votos"<<endl;
cout <<"Lavin obtuvo el "<< (votos[4]*100)/14885726 << "% de los votos"<<endl;
cout <<"Sichel obtuvo el "<< (votos[5]*100)/14885726 << "% de los votos"<<endl;

//14.885.726



}

void primarias2(){
	//suponiendo que el usuario ya ha ingresado los votos
//boric=1.000.000
//Briones=3.000.000
//Desbordes=800.000
//Jaude=1.500.000
//Lavin=2.400.000
//sichel=6.185.726


votos[0]=1000000;
votos[1]=3000000;
votos[2]=800000;
votos[3]=1500000;//
votos[4]=2400000;
votos[5]=1800000;
	
	int total_padron=1000000+3000000+800000+2400000+1800000;
	
cout <<"Boric obtuvo el "<< (votos[0]*100)/total_padron << "% de los votos entre el pacto D"<<endl;
cout <<"Briones obtuvo el "<< (votos[1]*100)/total_padron << "% de los votos entre el pacto D"<<endl;
cout <<"Desbordes obtuvo el "<< (votos[2]*100)/total_padron << "% de los votos entre el pacto D"<<endl;
cout <<"Lavin obtuvo el "<< (votos[4]*100)/total_padron << "% de los votos entre el pacto D"<<endl;
cout <<"Sichel obtuvo el "<< (votos[5]*100)/total_padron << "% de los votos entre el pacto D"<<endl;

	
}

int main(){

int n=3;
while (n!=0){cout <<"Escriba 1 para saber que porcentaje respecto al padron electoral obtuvo cada candidato"<<endl;
			 cout <<"Escriba 2 para saber votos y porcentaje respecto a los votos del pacto de cada candidato del pacto D (Briones, Desbordes, Lavin, Sichel)"<<endl;
			 cout <<endl<<"Escriba 0 para cerrar el programa"<<endl;
		
			 cin >>n;
	
			 
			 if (n==1){primarias(); cout <<endl<<endl;	 }
			 if (n==2){primarias2(); cout <<endl<<endl;		 }
			 if (n==0){return 0;	 }

			 
			 
			 }




	
}




