#include <stdio.h>
#include <stdlib.h>

/*
 * Scrivere un programma che permette di leggere due valori interi da tastiera e 
 * stampa a video un messaggio che indica se entrambi i valori sono positivi.
 */

int main()
{
    int a, b;
	
    printf("Dammi due numeri: ");
    scanf("%d %d",&a,&b);
    
	if(a>0 && b>0){
        printf("Entrambi i numeri inseiriti sono positivi.");
    }
    else{
        printf("Almeno uno dei due numeri inseriti non e' positivo.");
    }
	
    return 0;
}