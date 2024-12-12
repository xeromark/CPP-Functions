#include <stdio.h>
#include <conio.h>
 
int main()
{
    int num,contador=1;
    printf("Este programa te va a decir cuantos digitos tiene un numero. Introduce uno: ");
    scanf("%d",&num);
 
    while(num/10>0)
    {
        num=num/10;
        contador++;
    }
    printf("Tiene %u caracteres",contador);
    getch();
    return 0;
}
