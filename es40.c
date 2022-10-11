#include <stdio.h>
#include <stdlib.h>

/*
 * Scrivere un programma che permette di leggere due valori interi da tastiera e 
 * stampa a video un messaggio che indica se almeno uno dei due valori è positivo.
 */

int main()
{
    int num1, num2;
	
    printf("Dammi il primo ed il secondo valore ");
    scanf("%d%d",&num1,&num2);
    
	if(num1>=0 || num2>=0){
        printf("Almeno uno dei due valori inseriti e' positivo");
    }

    return 0;
}