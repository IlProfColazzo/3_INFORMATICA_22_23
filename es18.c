#include <stdio.h>
#include <stdlib.h>

/**Riscrivi l'esercizio precedente utilizzando solo variabili di tipo float*/

int main()
{
    float num1=0, num2=0, num3=0;
    float divis1=0,divis2=0,divis3=0,divis4=0,divis5=0,divis6=0,divis7=0,divis8=0,divis9=0;
    
    printf("Inserire primo numero: ");
    scanf("%f",&num1);
    printf("Inserire secondo numero: ");
    scanf("%f",&num2);
    printf("Inserire terzo numero: ");
    scanf("%f",&num3);
    
    divis1 = num1 / num1;
    divis2 = num1 / num2;
    divis3 = num1 / num3;
    divis4 = num2 / num1;
    divis5 = num2 / num2;
    divis6 = num2 / num3;
    divis7 = num3 / num1;
    divis8 = num3 / num2;
    divis9 = num3 / num3;
    
    printf("%.2f/%.2f=%.2f\n",num1,num1,divis1);
    printf("%.2f/%.2f=%.2f\n",num1,num2,divis2);
    printf("%.2f/%.2f=%.2f\n",num1,num3,divis3);
    printf("%.2f/%.2f=%.2f\n",num2,num1,divis4);
    printf("%.2f/%.2f=%.2f\n",num2,num2,divis5);
    printf("%.2f/%.2f=%.2f\n",num2,num3,divis6);
    printf("%.2f/%.2f=%.2f\n",num3,num1,divis7);
    printf("%.2f/%.2f=%.2f\n",num3,num2,divis8);
    printf("%.2f/%.2f=%.2f\n",num3,num3,divis9);
    
    return 0;
}