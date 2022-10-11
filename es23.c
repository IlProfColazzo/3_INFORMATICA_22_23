#include <stdio.h>
#include <stdlib.h>

/*
 * Scrivere un programma che stampa a video il valore assoluto (
 * numero senza segno) di un numero letto da tastiera.
 */

int main()
{
    int numero;
	
    printf("Introduci un numero: ");     //leggi un numero
    scanf("%d",&numero);
    
	if (numero < 0){  //confrontalo con 0
        numero = -1 * numero; //cambia il segno se il numero è < 0
    }
    printf("Il valore assoluto del numero letto e' %d",numero);   //comunica il risultato

	return 0;
}
