#include <stdio.h>
#include <stdlib.h>

/*
 * Scrivi un programma che visualizzi la differenza di due numeri a e b se il loro prodotto 
 * e' maggiore di 10, oppure la loro somma se il loro prodotto e' minore o uguale a 10.
 */

int main()
{
    int a,b,prodotto,somma,differenza;

    printf("Inserisci a e b: ");
    scanf("%d,%d",&a,&b);
	
	prodotto=a*b;

    if (prodotto>10){
		differenza=a-b;
        printf("la differenza di a e b e' maggiore di 10.");
    }
    else{
       somma=a+b;
       printf("la somma di a e b e' maggiore o uguale.");
    }

    return 0;
}