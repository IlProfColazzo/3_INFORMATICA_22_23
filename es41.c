#include <stdio.h>
#include <stdlib.h>

/*
 * Scrivere un programma che determini il massimo valore tra tre numeri 
 * acquisiti da tastiera.
 */

int main()
{
    int a, b, c;
	
    printf("Inserisci il primo valore ");
    scanf("%d",&a);
    printf("Inserisci il secondo valore ");
    scanf("%d",&b);
    printf("Inserisci il terzo valore ");
    scanf("%d",&c);

    if (a>b && a>c){
        printf("Il massimo valore e' %d",a);
    }
    else if (b>a && b>c){
        printf("Il massimo valore e' %d",b);
    }
    else if(c>a && c>b){
        printf("Il massimo valore e' %d",c);
    }
	
    return 0;
}