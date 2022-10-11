#include <stdio.h>
#include <stdlib.h>

/*
 * Scrivi un programma che dato un numero in input, 
 * scriva a video un messaggio che indichi se il numero 
 * è pari o dispari. (Hint: utilizzare l’operatore %).
 */

int main()
{
    int num, resto;

    printf("Dammi il numero ");
    scanf("%d", &num);

    resto= num % 2;
    if (resto == 0){
        printf("Il numero e' pari");
    }
    else {
        printf("Il numero e' dispari");
    }
	
    return 0;
}