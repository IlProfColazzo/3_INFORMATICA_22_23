#include <stdio.h>
#include <stdlib.h>

/*
 * Scrivere un programma che letto in input il voto di informatica di uno studente, visualizzi in output un messaggio per indicare il livello di sufficienza o insufficienza raggiunta. 
 * Se il voto è maggiore o uguale a 6 si ha una sufficienza piena.
 * Se il voto è compreso tra 5 e 6 si ha una insufficienza lieve.
 * Se il voto è inferiore a 5 ha una insufficienza grave.
 * VERSIONE IF-ELSE
 */

int main()
{
    int voto;
	
    printf("Introduci il voto: ");
    scanf("%d",&voto);
    
	if (voto >= 6){  
        printf("Studente pienamente sufficiente");
    }
    else{
        if(voto>=5){
            printf("Studente con insufficienza lieve");
        }
        else{
            printf("Studente con insufficienza grave");
        }
    }
	
    return 0;
}