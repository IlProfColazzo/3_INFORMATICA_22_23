#include <stdio.h>
#include <stdlib.h>

/**Scrivi un programma che legge tre numeri interi e successivamente
esegue la divisione in tutte le possibili combinazioni,
e visualizza in modo ordinato e formattato i risultati sullo schermo.
In questa versione utilizzare solo variabili intere.*/



int main()
{
    int num1=0, num2=0, num3=0;
    int divis1=0,divis2=0,divis3=0,divis4=0,divis5=0,divis6=0,divis7=0,divis8=0,divis9=0;
    
	printf("Inserire primo numero intero: ");
    scanf("%d",&num1);
    printf("Inserire secondo numero intero: ");
    scanf("%d",&num2);
    printf("Inserire terzo numero intero: ");
    scanf("%d",&num3);
    
	divis1 =num1 / num1;
    divis2 =num1 / num2;
    divis3 =num1 / num3;
    divis4 =num2 / num1;
    divis5 =num2 / num2;
    divis6 =num2 / num3;
    divis7 =num3 / num1;
    divis8 =num3 / num2;
    divis9 =num3 / num3;
	
    printf("%d/%d=%d\n",num1,num1,divis1);
    printf("%d/%d=%d\n",num1,num2,divis2);
    printf("%d/%d=%d\n",num1,num3,divis3);
    printf("%d/%d=%d\n",num2,num1,divis4);
    printf("%d/%d=%d\n",num2,num2,divis5);
    printf("%d/%d=%d\n",num2,num3,divis6);
    printf("%d/%d=%d\n",num3,num1,divis7);
    printf("%d/%d=%d\n",num3,num2,divis8);
    printf("%d/%d=%d\n",num3,num3,divis9);
   
	return 0;
}
