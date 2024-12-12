#include <iostream>
#include <windows.h>
using namespace std;
// Recomiendo revisar la tarea en el compilador dev_c++, pues aca es donde se hicieron todos algoritmos. Ademas que hay compiladores que no aceptan la libreria windows.h que le da poder al ajedrez
class Equipo{
	protected:
	bool Color;
	//0 negras, 1 blancas.
	public:
	
	int setColor(bool bando){ Color=bando;	}
	bool getColor(){ return Color;	}
	

};

class Pieza : public Equipo{
	private:
	int Peon;
	int Torre;
	int Caballo;
	int Alfil;
	int Dama;
	int Rey;
	
	int Peonn;
	int Torren;
	int Caballon;
	int Alfiln;
	int Daman;
	int Reyn;
//tuve que crear otros parametros para las negras, pues si bien, estas son iguales que las blancas a excepcion del peon, facilita el trabajo final
	
	public:
		


	
	Pieza() : Equipo(){ 
			 Peon=1;
			 Torre=5;
			 Caballo=2;
			 Alfil=3;
			 Rey=11;
			 Dama=10;		
			 
	
			 



			 Peonn=100;
			 Torren=500;
			 Caballon=200;
			 Alfiln=300;
			 Reyn=1100;
			 Daman=1000;	 
	

		
			 
			}

	


int getPeon(){return Peon;}
int getTorre(){return Torre;}
int getAlfil(){return Alfil;}
int getCaballo(){return Caballo;}
int getDama(){return Dama;}
int getRey(){return Rey;}

int getPeonn(){return Peonn;}
int getTorren(){return Torren;}
int getAlfiln(){return Alfiln;}
int getCaballon(){return Caballon;}
int getDaman(){return Daman;}
int getReyn(){return Reyn;}
	
};

class Tablero{
	protected:
		int tablero[9][9];
		string pieza[8][8];	//punto a pedir
	Pieza Blanca;
	Pieza Negra;
	bool co;
		
	public:
		
	
	Tablero(Pieza b, Pieza n){ co=0;
	Blanca=b;
	Negra=n;

	
	for(int i=0; i<8;i++){  for(int j=0; j<8;j++){	tablero[i][j]=0; tablero[1][j]=Negra.getPeonn();	tablero[6][j]=Blanca.getPeon();	}	}



		tablero[0][0]=Negra.getTorren();
		tablero[0][1]=Negra.getCaballon();
		tablero[0][2]=Negra.getAlfiln();
		tablero[0][3]=Negra.getReyn();
		tablero[0][4]=Negra.getDaman();
		tablero[0][5]=Negra.getAlfiln();
		tablero[0][6]=Negra.getCaballon();
		tablero[0][7]=Negra.getTorren();

		tablero[7][0]=Blanca.getTorre();
		tablero[7][1]=Blanca.getCaballo();
		tablero[7][2]=Blanca.getAlfil();
		tablero[7][3]=Blanca.getRey();
		tablero[7][4]=Blanca.getDama();
		tablero[7][5]=Blanca.getAlfil();
		tablero[7][6]=Blanca.getCaballo();
		tablero[7][7]=Blanca.getTorre();
		
		
	}


	
void setco(bool send){ co=send;} //alfil blanco
bool getco(){return co;}		
//
void setco_negro(bool send){ co=send;} //alfil negro
bool getco_negro(){return co;}
	//basicamente esto de aca reparaba un bug que sucedia con el alfil, decidi repararlo pero solo pude parcharlo, y es raro pues tomaba otras posiciones que no debia, incluso intente cambiar los parametros de las piezas y si se los ponia a otra, misteriosamente si funcionaba pero en la casilla h3 parece que no


int retornar_Bando(string casilla){
//0 si es negra
//1 si es blanca
	int renglon;
	int fila;

	//analizamos letras
	   	 if(casilla[0]=='a'or casilla[0]=='A'){ renglon =0;	}
	else if(casilla[0]=='b'or casilla[0]=='B'){ renglon =1;	}
	else if(casilla[0]=='c'or casilla[0]=='C'){ renglon =2;	}
	else if(casilla[0]=='d'or casilla[0]=='D'){ renglon =3;	}
	else if(casilla[0]=='e'or casilla[0]=='E'){ renglon =4;	}
	else if(casilla[0]=='f'or casilla[0]=='F'){ renglon =5;	}
	else if(casilla[0]=='g'or casilla[0]=='G'){ renglon =6;	}
	else if(casilla[0]=='h'or casilla[0]=='H'){ renglon =7;	}	


	   	 if(casilla[1]=='1'){ fila =0;	}
	else if(casilla[1]=='2'){ fila =1;	}
	else if(casilla[1]=='3'){ fila =2;	}
	else if(casilla[1]=='4'){ fila =3;	}
	else if(casilla[1]=='5'){ fila =4;	}
	else if(casilla[1]=='6'){ fila =5;	}
	else if(casilla[1]=='7'){ fila =6;	}
	else if(casilla[1]=='8'){ fila =7;	}

if(tablero[renglon][fila]>0 && tablero[renglon][fila]<12) {	return 1;	} else { return 0;}



}



void mostrar_tablero(){
	
	string aa="a  ";
	string bb="b  ";
	string cc="c  ";
	string dd="d  ";
	string ee="e  ";
	string ff="f  ";
	string gg="g  ";
	string hh="h  ";
		HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE ); //para mover los colores se deben poner dos palitos


cout<<"    1  2  3  4  5  6  7  8 "; 

	// aca hacemos la conversion. y ponemos los nombres
	for(int i=0; i<8 ; i++){for(int j=0; j<8 ; j++){
		if(tablero[i][j]==5 or tablero[i][j]==500){	pieza[i][j]=" T ";	}
		if(tablero[i][j]==2 or tablero[i][j]==200){	pieza[i][j]=" C ";	}
		if(tablero[i][j]==3 or tablero[i][j]==300){	pieza[i][j]=" A ";	}
		if(tablero[i][j]==10 or tablero[i][j]==1000){	pieza[i][j]=" D ";	}
		if(tablero[i][j]==11 or tablero[i][j]==1100){	pieza[i][j]=" R ";	}
		if(tablero[i][j]==1 or tablero[i][j]==100){	pieza[i][j]=" P ";	}
		if(tablero[i][j]==5 or tablero[i][j]==500){	pieza[i][j]=" T ";	}
		if(tablero[i][j]==0){	pieza[i][j]=" . ";	}

	
	}
	}

	//se muestran los datos
	for(int i=0; i<8 ; i++){ 
	
	SetConsoleTextAttribute(hConsole, 2);
		cout<<endl;
		//movi esto, no quedando cuadrado
			if(i==0) cout<<aa;	
			if(i==1) cout<<bb;	
			if(i==2) cout<<cc;	
			if(i==3) cout<<dd;	
			if(i==4) cout<<ee;
			if(i==5) cout<<ff;	
			if(i==6) cout<<gg;	
			if(i==7) cout<<hh;	

//aca esta toda la magia
bool bit=0;
if(i==1 or i==3 or i==5 or i==7){ bit=1; }
		
			
		for(int j=0; j<8 ; j++){
					
	if(tablero[i][j]<50 && tablero[i][j]>0 && bit==false){		 SetConsoleTextAttribute(hConsole, 267);


	cout<<pieza[i][j];
		}
// o si es 0 en la posicion
	
	else if(tablero[i][j]==0 && bit==false){	SetConsoleTextAttribute(hConsole, 256);

	cout<<pieza[i][j];

		
	}
	
	else if(tablero[i][j]>50 && bit==false){
	//1 azul
	//4 rojo
	//7 blanco
 SetConsoleTextAttribute(hConsole, 260);
		cout<<pieza[i][j];

	
}
	 SetConsoleTextAttribute(hConsole, 7);
		
		//desde aca es por si la casilla es blanca////////////////////

	if(tablero[i][j]<50 && tablero[i][j]>0 && bit==true){		 SetConsoleTextAttribute(hConsole, 243);


	cout<<pieza[i][j];
		}
// o si es 0 en la posicion
	
	else if(tablero[i][j]==0 && bit==true){	SetConsoleTextAttribute(hConsole, 255);

	cout<<pieza[i][j];

		
	}
	
	else if(tablero[i][j]>50 && bit==true){
	//1 azul
	//4 rojo
	//7 blanco
 SetConsoleTextAttribute(hConsole, 244);
		cout<<pieza[i][j];

	
} 

//cambiar el bool
if(bit==0){ bit=true; } else{ bit=false;}


	
			
		}  SetConsoleTextAttribute(hConsole, 0);
cout<<"  |";
	}
	 SetConsoleTextAttribute(hConsole, 7);
}
string nombre_pieza(string casilla){//retorna el nombre de la pieza en caso de existir
	
	int renglon;
	int fila;
	//analizamos letras
	   	 if(casilla[0]=='a'or casilla[0]=='A'){ renglon =0;	}
	else if(casilla[0]=='b'or casilla[0]=='B'){ renglon =1;	}
	else if(casilla[0]=='c'or casilla[0]=='C'){ renglon =2;	}
	else if(casilla[0]=='d'or casilla[0]=='D'){ renglon =3;	}
	else if(casilla[0]=='e'or casilla[0]=='E'){ renglon =4;	}
	else if(casilla[0]=='f'or casilla[0]=='F'){ renglon =5;	}
	else if(casilla[0]=='g'or casilla[0]=='G'){ renglon =6;	}
	else if(casilla[0]=='h'or casilla[0]=='H'){ renglon =7;	}	
//analizamos numeros
	   	 if(casilla[1]=='1'){ fila =0;	}
	else if(casilla[1]=='2'){ fila =1;	}
	else if(casilla[1]=='3'){ fila =2;	}
	else if(casilla[1]=='4'){ fila =3;	}
	else if(casilla[1]=='5'){ fila =4;	}
	else if(casilla[1]=='6'){ fila =5;	}
	else if(casilla[1]=='7'){ fila =6;	}
	else if(casilla[1]=='8'){ fila =7;	}
string pieza;
string texto="No hay nada en esa casilla";	
	 if(tablero[renglon][fila]==1 or tablero[renglon][fila]==100){ pieza="Peon";}
else if(tablero[renglon][fila]==2 or tablero[renglon][fila]==200){ pieza="Caballo";}
else if(tablero[renglon][fila]==3 or tablero[renglon][fila]==300){ pieza="Alfil";}
else if(tablero[renglon][fila]==5 or tablero[renglon][fila]==500){ pieza="Torre";}
else if(tablero[renglon][fila]==10 or tablero[renglon][fila]==1000){ pieza="Dama";}
else if(tablero[renglon][fila]==11 or tablero[renglon][fila]==1100){ pieza="Rey";} else{ return texto;}

	return pieza;	

}


int mover_pieza(string casilla, string hacia){
	// 1=a
	// 2=b
	// 3=c
	// 4=d
	// 5=e
	// 6=f
	// 7=g

	
	int renglon;
	int fila;
	int Trenglon;
	int Tfila;
	
	//analizamos letras
	   	 if(casilla[0]=='a'or casilla[0]=='A'){ renglon =0;	}
	else if(casilla[0]=='b'or casilla[0]=='B'){ renglon =1;	}
	else if(casilla[0]=='c'or casilla[0]=='C'){ renglon =2;	}
	else if(casilla[0]=='d'or casilla[0]=='D'){ renglon =3;	}
	else if(casilla[0]=='e'or casilla[0]=='E'){ renglon =4;	}
	else if(casilla[0]=='f'or casilla[0]=='F'){ renglon =5;	}
	else if(casilla[0]=='g'or casilla[0]=='G'){ renglon =6;	}
	else if(casilla[0]=='h'or casilla[0]=='H'){ renglon =7;	}
	
//analizamos numeros

	   	 if(casilla[1]=='1'){ fila =0;	}
	else if(casilla[1]=='2'){ fila =1;	}
	else if(casilla[1]=='3'){ fila =2;	}
	else if(casilla[1]=='4'){ fila =3;	}
	else if(casilla[1]=='5'){ fila =4;	}
	else if(casilla[1]=='6'){ fila =5;	}
	else if(casilla[1]=='7'){ fila =6;	}
	else if(casilla[1]=='8'){ fila =7;	}
	
// ahora a guardar los movimientos de traslacion.

	   	 if(hacia[0]=='a'or casilla[0]=='A'){ Trenglon =0;	}
	else if(hacia[0]=='b'or casilla[0]=='B'){ Trenglon =1;	}
	else if(hacia[0]=='c'or casilla[0]=='C'){ Trenglon =2;	}
	else if(hacia[0]=='d'or casilla[0]=='D'){ Trenglon =3;	}
	else if(hacia[0]=='e'or casilla[0]=='E'){ Trenglon =4;	}
	else if(hacia[0]=='f'or casilla[0]=='F'){ Trenglon =5;	}
	else if(hacia[0]=='g'or casilla[0]=='G'){ Trenglon =6;	}
	else if(hacia[0]=='h'or casilla[0]=='H'){ Trenglon =7;	}
	
//analizamos numeros

	   	 if(hacia[1]=='1'){ Tfila =0;	}
	else if(hacia[1]=='2'){ Tfila =1;	}
	else if(hacia[1]=='3'){ Tfila =2;	}
	else if(hacia[1]=='4'){ Tfila =3;	}
	else if(hacia[1]=='5'){ Tfila =4;	}
	else if(hacia[1]=='6'){ Tfila =5;	}
	else if(hacia[1]=='7'){ Tfila =6;	}
	else if(hacia[1]=='8'){ Tfila =7;	}


	
	//declaracion del movimiento de las piezas.
	//empezando por el peon. blanco
	
if(tablero[renglon][fila]==1){	

//si fila==Tfila para que el peon este en un solo carril, en otras pelabras, la fila de la posicion del peon debe ser igual a la fila a la que se quiere mover
//tablero[6][fila]==1 ---> es para saber que si esta en la posicion 6, el peon se puede mover en 2 espacios
//(renglon-Trenglon==2) es para corroborar la anterior, porque no todo el tiempo se querra adelantar dos espacios
if(  renglon-Trenglon>2 or renglon-Trenglon<=0 or (tablero[1+Trenglon][Tfila]!=0 && renglon-Trenglon==2 )){ return 0; } // en esta linea basicamente estoy diciendo que si la fila es distenta de la que se va trasladar, retorne 0 pues es un movimiento invalido, y si se quiere mover dos casillas, entonces debe verificar que la casilla entre medio este vacia



if((renglon==6) && (tablero[6][fila]==1) && (renglon-Trenglon==2) && (fila==Tfila) && (tablero[renglon-1][fila]==0) ){	tablero[renglon-2][Tfila]=1; tablero[renglon][fila]=0;	}



else if((fila==Tfila)&&(Trenglon==renglon-1) && (tablero[renglon-1][fila]==0)){	tablero[renglon-1][Tfila]=1; tablero[renglon][fila]=0;	}
//el renglon-1 == Trenglon es debido a que puede estar en la posicion e1 y el jugador escoge la b1, entonces el peon recorrera solo un espacio, lo cual es falso, pues es un movmiento invalido ya que solo se mueve en una posicion el peon.
else if((tablero[Trenglon][Tfila]>50) && (tablero[Trenglon][Tfila]<1500) && ((Tfila==fila-1) or (Tfila==fila+1))  ){		tablero[Trenglon][Tfila]=1; tablero[renglon][fila]=0;	}

else{ return 0;}
// y si ninguna de estas opciones ocurre, entonces el jugador debe estar haciendo un movimiento invalido.

  }


//ahora el movimiento de la torre blanca.//////////////////////////////////////////////////////////////////////////////////

if(tablero[renglon][fila]==5 ){	

	int sumatoria=0; // basicamente, nos dice si se puede mover la torre a esa casilla, si sigue siendo 0, es porque no hay ninguna pieza entre medio
	if( (tablero[Trenglon][Tfila]>0 ) && (tablero[Trenglon][Tfila]<12)  ){ 	return 0; } //esta linea solo es para que la torre blanca no se coma sus propias piezas
	if(renglon!=Trenglon && fila!=Tfila){ return 0;	}

	
//movimiento vertical.
if(Tfila==fila){

//movimiento hacia arriba
if(renglon>Trenglon){
	
	for(int i=Trenglon+1; i<renglon;i++){	sumatoria+=tablero[i][fila];	} if(sumatoria!=0){ return 0;	}

	tablero[Trenglon][fila]=5; tablero[renglon][fila]=0;		
}
//movimiento hacia abajo
if(renglon<Trenglon){
	
	for(int i=Trenglon-1; i>renglon;i--){	sumatoria+=tablero[i][fila];	} if(sumatoria!=0){ return 0;	}

	tablero[Trenglon][fila]=5; tablero[renglon][fila]=0;		
}

		}
		
//movimiento HORIZONTAL.////////////
if(Trenglon==renglon){

//movimiento hacia izquierda
if(fila>Tfila){
	
	for(int i=Tfila+1; i<fila;i++){	sumatoria+=tablero[renglon][i];	} if(sumatoria!=0){ return 0;	}

	tablero[renglon][Tfila]=5; tablero[renglon][fila]=0;		
}
//movimiento hacia derecha
if(fila<Tfila){
	
	for(int i=Tfila-1; i>fila;i--){	sumatoria+=tablero[renglon][i];	} if(sumatoria!=0){ return 0;	}

	tablero[renglon][Tfila]=5; tablero[renglon][fila]=0;		
}	
		
	sumatoria=0;	
		
	} 

}
//hasta aca la torre blanca



//Ahora el movimiento del afil blanco //////////////////////
if(tablero[renglon][fila] == 3 ){	
//
	int contador=0;
	int sumatoria=0; // basicamente, nos dice si se puede mover la torre a esa casilla, si sigue siendo 0, es porque no hay ninguna pieza entre medio
	if( (tablero[Trenglon][Tfila]>0 ) && (tablero[Trenglon][Tfila]<12)  ){ 	return 0; } //esta linea solo es para que la torre blanca no se coma sus propias piezas
	
///

//movimiento diagonal vertical hacia la derecha
if(renglon>Trenglon && fila< Tfila){
	
for(int i=1; i<(Tfila-fila) ; i++){	sumatoria+=tablero[renglon-i][fila+i];	 contador++;}	contador++;

	if(getco()==1){	 
int aux_Tr=renglon-contador;
int aux_Tf=fila+contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }


if(sumatoria!=0 ){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=3; 

	if(getco()==1){	tablero[renglon][fila]=0; }

setco(true);

	}

//movimiento diagonal vertical hacia la izquierda
if(renglon>Trenglon && fila> Tfila){
	
for(int i=1; i<(fila-Tfila) ; i++){	sumatoria+=tablero[renglon-i][fila-i];	contador++;} contador++;

	if(getco()==1){	 
int aux_Tr=renglon-contador;
int aux_Tf=fila-contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }
if(sumatoria!=0){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=3; 

	if(getco()==1){	tablero[renglon][fila]=0; }

setco(true);

	}

//movimiento diagonal  abajo hacia la derecha

if(renglon<Trenglon && fila< Tfila){
	
for(int i=1; i<(Tfila-fila) ; i++){	sumatoria+=tablero[renglon+i][fila+i];	contador++;}contador++;

	if(getco()==1){	 
int aux_Tr=renglon+contador;
int aux_Tf=fila+contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }

if(sumatoria!=0){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=3; 

	if(getco()==1){	tablero[renglon][fila]=0; }

setco(true);

	}

//movimiento diagonal vertical abajo hacia la izquierda
if(renglon<Trenglon && fila> Tfila){
	
for(int i=1; i<(fila-Tfila) ; i++){	sumatoria+=tablero[renglon+i][fila-i];	contador++;}contador++;
	if(getco()==1){	 
int aux_Tr=renglon+contador;
int aux_Tf=fila-contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }

if(sumatoria!=0){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=3; 

	if(getco()==1){	tablero[renglon][fila]=0; }

setco(true);

	}


}



//Movimientos deL CABALLO BLANCO
if(tablero[renglon][fila]==2){
	
	if( (tablero[Trenglon][Tfila]>0 ) && (tablero[Trenglon][Tfila]<12)  ){ 	return 0; } //esta linea solo es para que la torre blanca no se coma sus propias piezas

	int r_aux=renglon-Trenglon;
	int f_aux=fila-Tfila;
	
	//hint: es curioso que si restamos el renglon y la fila original con sus traslaciones, obtenemos el 2 y el 1 en particular, por tanto, siempre se debe aplicar la regla de que solo se movera a dos pasosy uno hacia una direccion, por tanto habia que aplicar un negativo para cada situacion de condicion
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////hasta aca v un cambio importante respecto a algunas traslaciones
	if((r_aux==2) && (f_aux==1) or (r_aux==2) && (f_aux==-1) or (r_aux==-2) && (f_aux==-1) or (r_aux==-2) && (f_aux==1) or (r_aux==1) && (f_aux==2) or (r_aux==1) && (f_aux==-2) or (r_aux==-1) && (f_aux==-2) or (r_aux==-1) && (f_aux==2) ){
		
			tablero[Trenglon][Tfila]=2; tablero[renglon][fila]=0;
		
	} else { return 0;	}

	 
}


//MOVIMIENTOS DEL REY BLANCO
if(tablero[renglon][fila]==11){
	
	if( (tablero[Trenglon][Tfila]>0 ) && (tablero[Trenglon][Tfila]<12)  ){ 	return 0; } //esta linea solo es para que la torre blanca no se coma sus propias piezas
//if(tablero[Trenglon][Tfila]==1100){ return 0;	}	//el juego se termina por tablas

	int r_aux=renglon-Trenglon;
	int f_aux=fila-Tfila;

		if((r_aux==1) && (f_aux==1) or (r_aux==-1) && (f_aux==1) or (r_aux==1) && (f_aux==-1) or (r_aux==-1) && (f_aux==-1) or (r_aux==0) && (f_aux==1) or (r_aux==0) && (f_aux==-1) or (r_aux==1) && (f_aux==0) or (r_aux==-1) && (f_aux==0) ){
//combinaciones:    1 y 1					   -1	y	 1					1 	y	-1					-1	y	-1						0	y	1					0	y	-1					1	y	0					-1	y	0
			tablero[Trenglon][Tfila]=11; tablero[renglon][fila]=0;
		
	} else { return 0;	}

	 
}



//MOVIMIENTOS DE LA DAMA BLANCA. 
if(tablero[renglon][fila]==10){ //basicamente un copia y pegue de la torre y el alfil
	
		int contador=0;

	if( (tablero[Trenglon][Tfila]>0 ) && (tablero[Trenglon][Tfila]<12)  ){ 	return 0; } //esta linea solo es para que la torre blanca no se coma sus propias piezas

	int sumatoria=0; // basicamente, nos dice si se puede mover la torre a esa casilla, si sigue siendo 0, es porque no hay ninguna pieza entre medio
	if( (tablero[Trenglon][Tfila]>0 ) && (tablero[Trenglon][Tfila]<12)  ){ 	return 0; } //esta linea solo es para que la torre blanca no se coma sus propias piezas

//movimiento vertical.
if(Tfila==fila){

//movimiento hacia arriba
if(renglon>Trenglon){
	
	for(int i=Trenglon+1; i<renglon;i++){	sumatoria+=tablero[i][fila];	} if(sumatoria!=0){ return 0;	}

	tablero[Trenglon][fila]=10; tablero[renglon][fila]=0;		
}
//movimiento hacia abajo
if(renglon<Trenglon){
	
	for(int i=Trenglon-1; i>renglon;i--){	sumatoria+=tablero[i][fila];	} if(sumatoria!=0){ return 0;	}

	tablero[Trenglon][fila]=10; tablero[renglon][fila]=0;		
}

		}
		
//movimiento HORIZONTAL.////////////
else if(Trenglon==renglon){

//movimiento hacia izquierda
if(fila>Tfila){
	
	for(int i=Tfila+1; i<fila;i++){	sumatoria+=tablero[renglon][i];	} if(sumatoria!=0){ return 0;	}

	tablero[renglon][Tfila]=10; tablero[renglon][fila]=0;		
}
//movimiento hacia derecha
if(fila<Tfila){
	
	for(int i=Tfila-1; i>fila;i--){	sumatoria+=tablero[renglon][i];	} if(sumatoria!=0){ return 0;	}

	tablero[renglon][Tfila]=10; tablero[renglon][fila]=0;		
}	
		
	sumatoria=0;	
		
	} 

//ahora los movimientos de DIAGONALES DE LA DAMA

//movimiento diagonal vertical hacia la derecha
if(renglon>Trenglon && fila< Tfila){
	
for(int i=1; i<(Tfila-fila) ; i++){	sumatoria+=tablero[renglon-i][fila+i];	 contador++;}	contador++;

	if(getco()==1){	 
int aux_Tr=renglon-contador;
int aux_Tf=fila+contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }


if(sumatoria!=0 ){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=10; 

tablero[renglon][fila]=0; 


	}

//movimiento diagonal vertical hacia la izquierda
if(renglon>Trenglon && fila> Tfila){
	
for(int i=1; i<(fila-Tfila) ; i++){	sumatoria+=tablero[renglon-i][fila-i];	contador++;} contador++;

	if(getco()==1){	 
int aux_Tr=renglon-contador;
int aux_Tf=fila-contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }
if(sumatoria!=0){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=10; 

	tablero[renglon][fila]=0; 



	}

//movimiento diagonal  abajo hacia la derecha

if(renglon<Trenglon && fila< Tfila){
	
for(int i=1; i<(Tfila-fila) ; i++){	sumatoria+=tablero[renglon+i][fila+i];	contador++;}contador++;

	if(getco()==1){	 
int aux_Tr=renglon+contador;
int aux_Tf=fila+contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }

if(sumatoria!=0){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=10; 

tablero[renglon][fila]=0; 



	}

//movimiento diagonal vertical abajo hacia la izquierda
if(renglon<Trenglon && fila> Tfila){
	
for(int i=1; i<(fila-Tfila) ; i++){	sumatoria+=tablero[renglon+i][fila-i];	contador++;}contador++;
	if(getco()==1){	 
int aux_Tr=renglon+contador;
int aux_Tf=fila-contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }

if(sumatoria!=0){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=10; 

	tablero[renglon][fila]=0; 



	}


	 
}


//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////



//AHORA; SE PROGRAMAN LOS MOVIMIENTOS DE LAS PIEZAS NEGRAS QUE SON DISTINTOS, por ejemplo, el peon no se mueve igual




	//declaracion del movimiento de las piezas.
	//empezando por el peon. Negro
	
if(tablero[renglon][fila]==100){	

//si fila==Tfila para que el peon este en un solo carril, en otras pelabras, la fila de la posicion del peon debe ser igual a la fila a la que se quiere mover
//tablero[6][fila]==1 ---> es para saber que si esta en la posicion 6, el peon se puede mover en 2 espacios
//(renglon-Trenglon==2) es para corroborar la anterior, porque no todo el tiempo se querra adelantar dos espacios
if(  Trenglon-renglon>2 or Trenglon-renglon<=0 or (tablero[Trenglon-1][Tfila]!=0 && Trenglon-renglon==2 )){ return 0; } // en esta linea basicamente estoy diciendo que si la fila es distenta de la que se va trasladar, retorne 0 pues es un movimiento invalido, y si se quiere mover dos casillas, entonces debe verificar que la casilla entre medio este vacia



if( (renglon==1) && (tablero[1][fila]==100) && (Trenglon-renglon==2) && (fila==Tfila) && (tablero[renglon+1][fila]==0) ){	tablero[renglon+2][Tfila]=100; tablero[renglon][fila]=0;	}
//el renglon==1 es porque si el peon era un peon A montado sobre otro peon B, y el peob B esta justo en el renglon 1, (osea donde os renglones puedes abanzar 2 espacios), entonces A estando montado puede avanzar 2 espacios, pues el programa detecta que B esta en el renglon 1, cosa  que es un movimiento invalido
//solucion, avanzar 2 espacios siempre ocurrira siempre y cuando el renglon sea igual a 1

else if((fila==Tfila)&&(Trenglon==renglon+1) && (tablero[renglon+1][fila]==0)){	tablero[renglon+1][Tfila]=100; tablero[renglon][fila]=0;	}
//el renglon-1 == Trenglon es debido a que puede estar en la posicion e1 y el jugador escoge la b1, entonces el peon recorrera solo un espacio, lo cual es falso, pues es un movmiento invalido ya que solo se mueve en una posicion el peon.
else if((tablero[Trenglon][Tfila]>0) && (tablero[Trenglon][Tfila]<15) && ((Tfila==fila+1) or (Tfila==fila-1))  ){		tablero[Trenglon][Tfila]=100; tablero[renglon][fila]=0;	}

else{ return 0;}
// y si ninguna de estas opciones ocurre, entonces el jugador debe estar haciendo un movimiento invalido.

  }


//ahora el movimiento de la torre negra.//////////////////////////////////////////////////////////////////////////////////


//ahora el movimiento de la torre negra.//////////////////////////////////////////////////////////////////////////////////

if(tablero[renglon][fila]==500 ){	
	if( (tablero[Trenglon][Tfila]>50 ) && (tablero[Trenglon][Tfila]<1250)  ){ 	return 0; }
	if(renglon!=Trenglon && fila!=Tfila){ return 0;	}

	int sumatoria=0; // basicamente, nos dice si se puede mover la torre a esa casilla, si sigue siendo 0, es porque no hay ninguna pieza entre medio

//movimiento vertical.
if(Tfila==fila){

//movimiento hacia arriba
if(renglon>Trenglon){
	
	for(int i=Trenglon+1; i<renglon;i++){	sumatoria+=tablero[i][fila];	} if(sumatoria!=0){ return 0;	}

	tablero[Trenglon][fila]=500; tablero[renglon][fila]=0;		
}
//movimiento hacia abajo
if(renglon<Trenglon){
	
	for(int i=Trenglon-1; i>renglon;i--){	sumatoria+=tablero[i][fila];	} if(sumatoria!=0){ return 0;	}

	tablero[Trenglon][fila]=500; tablero[renglon][fila]=0;		
}

		}
		
//movimiento HORIZONTAL.////////////
if(Trenglon==renglon){

//movimiento hacia izquierda
if(fila>Tfila){
	
	for(int i=Tfila+1; i<fila;i++){	sumatoria+=tablero[renglon][i];	} if(sumatoria!=0){ return 0;	}

	tablero[renglon][Tfila]=500; tablero[renglon][fila]=0;		
}
//movimiento hacia derecha
if(fila<Tfila){
	
	for(int i=Tfila-1; i>fila;i--){	sumatoria+=tablero[renglon][i];	} if(sumatoria!=0){ return 0;	}

	tablero[renglon][Tfila]=500; tablero[renglon][fila]=0;		
}	
		
	sumatoria=0;	
		
	} 
}

//Ahora el movimiento del afil NEGRO //////////////////////
if(tablero[renglon][fila] == 300 ){	
//
	int contador=0;
	int sumatoria=0; // basicamente, nos dice si se puede mover la torre a esa casilla, si sigue siendo 0, es porque no hay ninguna pieza entre medio
	if( (tablero[Trenglon][Tfila]>50 ) && (tablero[Trenglon][Tfila]<1200)  ){ 	return 0; } //esta linea solo es para que la torre blanca no se coma sus propias piezas
///

//movimiento diagonal vertical hacia la derecha
if(renglon>Trenglon && fila< Tfila){
	
for(int i=1; i<(Tfila-fila) ; i++){	sumatoria+=tablero[renglon-i][fila+i];	 contador++;}	contador++;

	if(getco_negro()==1){	 
int aux_Tr=renglon-contador;
int aux_Tf=fila+contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }


if(sumatoria!=0 ){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=300; 

	if(getco_negro()==1){	tablero[renglon][fila]=0; }

setco_negro(true);

	}

//movimiento diagonal vertical hacia la izquierda
if(renglon>Trenglon && fila> Tfila){
	
for(int i=1; i<(fila-Tfila) ; i++){	sumatoria+=tablero[renglon-i][fila-i];	contador++;} contador++;

	if(getco_negro()==1){	 
int aux_Tr=renglon-contador;
int aux_Tf=fila-contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }
if(sumatoria!=0){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=300; 

	if(getco_negro()==1){	tablero[renglon][fila]=0; }

setco_negro(true);

	}

//movimiento diagonal  abajo hacia la derecha

if(renglon<Trenglon && fila< Tfila){
	
for(int i=1; i<(Tfila-fila) ; i++){	sumatoria+=tablero[renglon+i][fila+i];	contador++;}contador++;

	if(getco_negro()==1){	 
int aux_Tr=renglon+contador;
int aux_Tf=fila+contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }

if(sumatoria!=0){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=300; 

	if(getco_negro()==1){	tablero[renglon][fila]=0; }

setco_negro(true);

	}

//movimiento diagonal vertical abajo hacia la izquierda
if(renglon<Trenglon && fila> Tfila){
	
for(int i=1; i<(fila-Tfila) ; i++){	sumatoria+=tablero[renglon+i][fila-i];	contador++;}contador++;
	if(getco_negro()==1){	 
int aux_Tr=renglon+contador;
int aux_Tf=fila-contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }

if(sumatoria!=0){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=300; 

	if(getco_negro()==1){	tablero[renglon][fila]=0; }

setco_negro(true);

	}


}



//Movimientos deL CABALLO NEGRO
if(tablero[renglon][fila]==200){
	
	if( (tablero[Trenglon][Tfila]>50 ) && (tablero[Trenglon][Tfila]<1200)  ){ 	return 0; } //esta linea solo es para que la torre blanca no se coma sus propias piezas

	int r_aux=renglon-Trenglon;
	int f_aux=fila-Tfila;
	
	//hint: es curioso que si restamos el renglon y la fila original con sus traslaciones, obtenemos el 2 y el 1 en particular, por tanto, siempre se debe aplicar la regla de que solo se movera a dos pasosy uno hacia una direccion, por tanto habia que aplicar un negativo para cada situacion de condicion
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////hasta aca v un cambio importante respecto a algunas traslaciones
	if((r_aux==2) && (f_aux==1) or (r_aux==2) && (f_aux==-1) or (r_aux==-2) && (f_aux==-1) or (r_aux==-2) && (f_aux==1) or (r_aux==1) && (f_aux==2) or (r_aux==1) && (f_aux==-2) or (r_aux==-1) && (f_aux==-2) or (r_aux==-1) && (f_aux==2) ){
		
			tablero[Trenglon][Tfila]=200; tablero[renglon][fila]=0;
		
	} else { return 0;	}

	 
}


//MOVIMIENTOS DEL REY NEGRO
if(tablero[renglon][fila]==1100){
	
	if( (tablero[Trenglon][Tfila]>50 ) && (tablero[Trenglon][Tfila]<1200)  ){ 	return 0; } //esta linea solo es para que la torre blanca no se coma sus propias piezas
//if(tablero[Trenglon][Tfila]==11){ return 0;	}	//el juego se termina por tablas

	int r_aux=renglon-Trenglon;
	int f_aux=fila-Tfila;

		if((r_aux==1) && (f_aux==1) or (r_aux==-1) && (f_aux==1) or (r_aux==1) && (f_aux==-1) or (r_aux==-1) && (f_aux==-1) or (r_aux==0) && (f_aux==1) or (r_aux==0) && (f_aux==-1) or (r_aux==1) && (f_aux==0) or (r_aux==-1) && (f_aux==0) ){
//combinaciones:    1 y 1					   -1	y	 1					1 	y	-1					-1	y	-1						0	y	1					0	y	-1					1	y	0					-1	y	0
			tablero[Trenglon][Tfila]=1100; tablero[renglon][fila]=0;
		
	} else { return 0;	}

	 
}



//MOVIMIENTOS DE LA DAMA NEGRA. 
if(tablero[renglon][fila]==1000){ //basicamente un copia y pegue de la torre y el alfil
	
		int contador=0;

	if( (tablero[Trenglon][Tfila]>50 ) && (tablero[Trenglon][Tfila]<1200)  ){ 	return 0; } //esta linea solo es para que la Dama negra no se coma sus propias piezas

	int sumatoria=0; // basicamente, nos dice si se puede mover la torre a esa casilla, si sigue siendo 0, es porque no hay ninguna pieza entre medio

//movimiento vertical.
if(Tfila==fila){

//movimiento hacia arriba
if(renglon>Trenglon){
	
	for(int i=Trenglon+1; i<renglon;i++){	sumatoria+=tablero[i][fila];	} if(sumatoria!=0){ return 0;	}

	tablero[Trenglon][fila]=1000; tablero[renglon][fila]=0;		
}
//movimiento hacia abajo
if(renglon<Trenglon){
	
	for(int i=Trenglon-1; i>renglon;i--){	sumatoria+=tablero[i][fila];	} if(sumatoria!=0){ return 0;	}

	tablero[Trenglon][fila]=1000; tablero[renglon][fila]=0;		
}

		}
		
//movimiento HORIZONTAL.////////////
else if(Trenglon==renglon){

//movimiento hacia izquierda
if(fila>Tfila){
	
	for(int i=Tfila+1; i<fila;i++){	sumatoria+=tablero[renglon][i];	} if(sumatoria!=0){ return 0;	}

	tablero[renglon][Tfila]=1000; tablero[renglon][fila]=0;		
}
//movimiento hacia derecha
if(fila<Tfila){
	
	for(int i=Tfila-1; i>fila;i--){	sumatoria+=tablero[renglon][i];	} if(sumatoria!=0){ return 0;	}

	tablero[renglon][Tfila]=1000; tablero[renglon][fila]=0;		
}	
		
	sumatoria=0;	
		
	} 

//ahora los movimientos de DIAGONALES DE LA DAMA

//movimiento diagonal vertical hacia la derecha
if(renglon>Trenglon && fila< Tfila){
	
for(int i=1; i<(Tfila-fila) ; i++){	sumatoria+=tablero[renglon-i][fila+i];	 contador++;}	contador++;

	if(getco_negro()==1){	 
int aux_Tr=renglon-contador;
int aux_Tf=fila+contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }


if(sumatoria!=0 ){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=1000; 

tablero[renglon][fila]=0; 


	}

//movimiento diagonal vertical hacia la izquierda
if(renglon>Trenglon && fila> Tfila){
	
for(int i=1; i<(fila-Tfila) ; i++){	sumatoria+=tablero[renglon-i][fila-i];	contador++;} contador++;

	if(getco_negro()==1){	 
int aux_Tr=renglon-contador;
int aux_Tf=fila-contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }
if(sumatoria!=0){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=1000; 

	tablero[renglon][fila]=0; 



	}

//movimiento diagonal  abajo hacia la derecha

if(renglon<Trenglon && fila< Tfila){
	
for(int i=1; i<(Tfila-fila) ; i++){	sumatoria+=tablero[renglon+i][fila+i];	contador++;}contador++;

	if(getco_negro()==1){	 
int aux_Tr=renglon+contador;
int aux_Tf=fila+contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }

if(sumatoria!=0){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=1000; 

tablero[renglon][fila]=0; 



	}

//movimiento diagonal vertical abajo hacia la izquierda
if(renglon<Trenglon && fila> Tfila){
	
for(int i=1; i<(fila-Tfila) ; i++){	sumatoria+=tablero[renglon+i][fila-i];	contador++;}contador++;
	if(getco_negro()==1){	 
int aux_Tr=renglon+contador;
int aux_Tf=fila-contador;// basicamente son lso que nos ayudaran que se corrobore que la casilla a la que se quiere mover el alfil, este en su diagonal

if(aux_Tr!=Trenglon or aux_Tf!=Tfila){return 0;} }

if(sumatoria!=0){ return 0;	} 		
	//return 0;

	tablero[Trenglon][Tfila]=1000; 

	tablero[renglon][fila]=0; 



	}


	 
}


return 1;
}

};



int main(){
	string casilla;
	string hacia="00";
	
	Pieza Blanca;
	Pieza Negra;
	Blanca.setColor(1);
	Negra.setColor(0);
	bool turno=0;
	bool sacar=1;

	Tablero Ajedrez(Blanca,Negra);
A:	


	cout<<"Bienvenido a jugar Ajedrez"<<endl;
	cout<<"Para mover una pieza debe indicar la casilla en la que se encuentra y luego indicar hacia donde desea moverla."<<endl;
	cout<<"Ejemplo: g1 --hacia la casilla-> e1  --- Y si desea desmarcar la casilla marcada, escribir 0."<<endl<<endl;  

	if(sacar==1) {cout<<"Es el turno de las Blancas."<<endl<<endl;	}
	if(sacar==0) {cout<<"Es el turno de las Negras."<<endl<<endl;	}


	
Ajedrez.mostrar_tablero();

B:	
	cout<<endl<<endl<<"Cual pieza desea mover?"<<endl;


if(turno==false){cin>>casilla;	if(casilla=="0"){	goto B;	}}
 if((sacar==1 && Ajedrez.retornar_Bando(casilla)==0) or (sacar==0 && Ajedrez.retornar_Bando(casilla)==1)){ cout<<"NO es tu turno. Reescribe la casilla"<<endl;	turno=false;	goto B;	}
//para pruebas, poner // en el if en la linea anteiror a esta
if(Ajedrez.nombre_pieza(casilla)=="No hay nada en esa casilla"){ cout<<"No hay nada en esa casilla. Rescribala"; turno=false; goto B; }

C:

if(turno==true){cout <<Ajedrez.nombre_pieza(casilla)<<" " << casilla <<" --hacia la casilla--> "; cin>>hacia;		if(hacia=="0"){hacia="00";	turno=false; goto B;	}}

 
 
	if(Ajedrez.mover_pieza(casilla,hacia) == 0 && turno==true){ cout<<"Movimiento invalido. Rescriba las coordenadas"<<endl; goto C;	}

turno=true;



	system("cls"); 
	

if(hacia=="00") {goto A;}
	
	Ajedrez.mover_pieza(casilla,hacia);


	
	hacia="00";
	turno=false;
if(sacar==1){ sacar=0;}  else{ sacar=1;}


	goto A;
}
