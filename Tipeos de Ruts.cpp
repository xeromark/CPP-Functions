#include <iostream>
#include <math.h>

using namespace std;

int main()
{	cout << "Ingrese los numeros de Ruts que desea corroborar" << endl;
		int n;
		cin >> n;
	cout << "Ahora ingrese los ruts sin digito verificador y sin puntos"<< endl;
	int rut;
 	int p=2;
 	int j=0;

	int total_suma=0;
	int contador_digitos=0;
	int num_simple=0;
	int n_validos=0;
	int n_invalidos=0;
	char k;
		
	for (int i=0; i<n; i++) { 	int contador=0;
							
							cout <<"Rut: ";	cin >>rut;	//indicamos el rut que se debe guardar en la memoria
							
						 cout <<"Ingrese el digito verificador: "; cin>>k; 
					
					
						
							
								 
{ //contador de digitos
	
	int cantidad_resto=rut*0.1;	
	while (cantidad_resto*0.1>0) { cantidad_resto=cantidad_resto*0.1;	contador_digitos++;	} 
}	int primer_digito=rut*pow(0.1,contador_digitos);
//contador de digitos
								
								while (( rut/10>0 )&&(j<contador_digitos)){	
																	num_simple=rut%10;
															
															  
															  	//multiplicar y luego sumar
															  	
															  if (p<=7) { total_suma += num_simple*p; 	j++; p++;} 
															else if  (p>7) {p=2; total_suma += num_simple*p;p++;}
															//27962409-2	
															//20901792-K
																 
															
																//multiplicar y luego sumar
																	
																		rut=rut*0.1;
																	
																		
																}  total_suma+=primer_digito*p;//iniciamos nuestro convertidor para revertir los numeros, multiplicar y sumar en funcion al numero de digitos antes calculados
		
																	//ACA se hace la comprobacion de digito verificador en donde sera valido o no
														
																int resto_suma=11-(total_suma%11);
										
															
												
																//dentro de la tabla ACSI el 48 es igual al numero 0
																//dentro de la tabla ACSI el 107 es igual a la letra k
											
																		 if	(resto_suma==1) { if (k==49) { cout<<"\t Rut Correcto"<<endl;n_validos++;} else { cout<<"\t Rut Incorrecto"<<endl;n_invalidos++;}	}
																	else if (resto_suma==2) { if (k==50) { cout<<"\t Rut Correcto"<<endl;n_validos++;} else { cout<<"\t Rut Incorrecto"<<endl;n_invalidos++;}	}	
																	else if (resto_suma==3) { if (k==51) { cout<<"\t Rut Correcto"<<endl;n_validos++;} else { cout<<"\t Rut Incorrecto"<<endl;n_invalidos++;}	}	
																	else if (resto_suma==4) { if (k==52) { cout<<"\t Rut Correcto"<<endl;n_validos++;} else { cout<<"\t Rut Incorrecto"<<endl;n_invalidos++;}	}
																	else if (resto_suma==5) { if (k==53) { cout<<"\t Rut Correcto"<<endl;n_validos++;} else { cout<<"\t Rut Incorrecto"<<endl;n_invalidos++;}	}											 
																	else if (resto_suma==6) { if (k==54) { cout<<"\t Rut Correcto"<<endl;n_validos++;} else { cout<<"\t Rut Incorrecto"<<endl;n_invalidos++;}	}											 
																	else if (resto_suma==7) { if (k==55) { cout<<"\t Rut Correcto"<<endl;n_validos++;} else { cout<<"\t Rut Incorrecto"<<endl;n_invalidos++;}	}											 
																	else if (resto_suma==8) { if (k==56) { cout<<"\t Rut Correcto"<<endl;n_validos++;} else { cout<<"\t Rut Incorrecto"<<endl;n_invalidos++;}	}
																	else if (resto_suma==9) { if (k==57) { cout<<"\t Rut Correcto"<<endl;n_validos++;} else { cout<<"\t Rut Incorrecto"<<endl;n_invalidos++;}	}
																		 
																												 
																	else if (resto_suma==10) { if (107==k) { cout<<"\t Rut Correcto"<<endl;n_validos++;} else { cout<<"\t Rut Incorrecto"<<endl;n_invalidos++;}	}	
																	else if (resto_suma==11) { if (k==48) { cout<<"\t Rut Correcto"<<endl;n_validos++;} else { cout<<"\t Rut Incorrecto"<<endl;n_invalidos++;}	}	

												
																	
																	//ACA se hace la comprobacion de digito verificador en donde sera valido o no
													
																	total_suma=0;	contador_digitos=0;p=2;	num_simple=0;contador=0;rut=0;j=0;cout <<endl;}	 	//esto de aca es para voltear numeros


cout << "\t -<Resumen>-"<<endl;
cout << "Hay " << n_validos << " Ruts correctos"<<endl;
cout << "Hay " << n_invalidos << " Ruts incorrectos"<<endl;


		

	

	
	
	
}
