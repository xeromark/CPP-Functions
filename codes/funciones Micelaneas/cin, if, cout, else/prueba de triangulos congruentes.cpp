#include <iostream>

using namespace std;

int main()
{


     cout <<"ingrese el lado AB de su triangulo"<< endl;
     
     float a;
     
     cin >> a;
     
          cout <<"ingrese BC de su triangulo"<< endl;
          
          float b;
          
          cin >> b;
          
        cout <<"ingrese AC de su triangulo"<< endl;

         float c;
         
         cin >> c;
         
        

  
		       cout <<"ingrese la arista del triangulo 2"<< endl;

         float a2;
     
     cin >> a2;
     
          cout <<"ingrese otra arista del triangulo 2"<< endl;
          
          float b2;
          
          cin >> b2;
          
        cout <<"ingrese otra arista del triangulo 2"<< endl;

         float c2;
         
         cin >> c2;
         
         
         float suma_triangulo2=a2+b2+c2;
         
         float lado1_congruencia=a/a2;
         float lado2_congruencia=b/b2;
         float lado3_congruencia=c/c2;
         
         if (lado1_congruencia==lado2_congruencia)
         
         if (lado1_congruencia==lado3_congruencia)
         
         cout <<"sus triangulos son congruentes"<<endl;
         
          if (lado1_congruencia!=lado2_congruencia)
         
         if (lado1_congruencia!=lado3_congruencia)
         
         cout << "sus triangulos NO son congruentes" << endl;
   

}


