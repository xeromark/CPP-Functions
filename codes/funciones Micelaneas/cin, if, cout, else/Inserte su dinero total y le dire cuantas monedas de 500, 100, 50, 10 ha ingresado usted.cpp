#include <iostream>

using namespace std;

int main()
{ cout <<"indique cuanto dinero tiene y se separaran las monedas" << endl;
	int dinero;
	cin>> dinero;
	
	int moneda_500= dinero/500; 
		int monedaresto_500= moneda_500*500;
			int monedaresto_100= dinero-monedaresto_500; 
	
	int moneda_100= monedaresto_100/100; 
		int monedaresto2_100= moneda_100*100;
			int hay_que_sumar_todo_lo_que_llevamos_ya_puesto_y_luego_restarlo_con_el_total= monedaresto2_100+monedaresto_500; 
				int monedaresto_50= dinero-hay_que_sumar_todo_lo_que_llevamos_ya_puesto_y_luego_restarlo_con_el_total; 
	 
	int moneda_50= monedaresto_50/50;
		int monedaresto3_100= moneda_50*50;
			int mas_de_lo_mismo=monedaresto2_100+monedaresto_500+monedaresto3_100;
				int monedaresto_10= dinero-mas_de_lo_mismo;
	 
	int moneda_10= monedaresto_10/10; 
		int monedaresto4_10= moneda_10*10;
			int suma_hasta_la_moneda_10=monedaresto4_10+monedaresto2_100+monedaresto_500+monedaresto3_100;
				int monedaresto_5= dinero-suma_hasta_la_moneda_10;
			
	int moneda_5= monedaresto_5/5; 
		int monedaresto5_5= moneda_5*5;
			int suma_hasta_la_moneda_1= monedaresto5_5+monedaresto4_10+monedaresto2_100+monedaresto_500+monedaresto3_100;
				int monedaresto_1= dinero-suma_hasta_la_moneda_1;
			
	
	int moneda_1= monedaresto_1/1;  //es lo mas inutil que has hecho perote perdono porque lo haces por tema de orden jajaja
		
		//el truco esta en que sumas todo lo que le quitaste, es decir que si al ejecutarlo pones 1766 "por ejemplo"
		//debes multiplicar el numero de monedas restantes de un tipo, y luego multiplicar por su propio valor 
		//Esto con el objetivo de que ese resultado lo sumes y luego lo restes para conseguir las monedas que quieres conseguir
		//ejemplo, 1766 lo dividiste en 500, te da 3 con "int", luego vuelves a multiplicar por 500 y te da 1500
		//ahora que ya tienes 1500, eso lo restas por eel total de dinero, dandote "1766-1500=266" ese 266 ahora lo divides entre 100 te da 2
		// el 2 lo vuelves a multiplicar por 100 y te queda 200, ahora la suma sera de esta forma "200+1500=1700!"
		// ahora el 1700 lo restas por el total, es decir "1766-1700=66" ahora repites el mismo prosedimiento pero ahora le sumaras
		//las monedas las 3 variables para que te quede el 16 solitoa la hora de restar
		
cout << "sus monedas de 500 son: " << moneda_500<<endl;
cout << "sus monedas de 100 son: " << moneda_100<<endl;
cout << "sus monedas de 50 son: " << moneda_50<<endl;
cout << "sus monedas de 10 son: " << moneda_10<<endl;
cout << "sus monedas de 5 son: " << moneda_5<<endl;
cout << "sus monedas de 1 son: " << moneda_1<<endl;

int b; //esto se lo he puesto al programa para que no se cierre cuando ejecute todas las operaciones.
cin>>b;
return 0;

}

