#include <stdio.h>
#include <stdlib.h>

/*
 * Scrivi un programma che dato un numero in input, 
 * scriva a video un messaggio che indichi se il numero 
 * e' maggiore o minore di dieci.
 */

int main()
{
    int num=0;
	
    printf("Dammi un numero: ");
    scanf("%d",&num);
    
	if(num<10){
        printf("%d e' minore di 10",num);
    }
    else{ 
		if(num>10){
            printf("%d e' maggiore di 10",num);
		}
    
	}
    return 0;
}