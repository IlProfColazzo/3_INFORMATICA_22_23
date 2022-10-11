#include <stdio.h>
#include <stdlib.h>

/* 
 * Dato un numeratore e un denominatore controllare la condizione di esistenza del denominatore
 * (denominatore diverso da 0) e in caso positivo fornire in output il risultato della divisione,
 * altrimenti stampare un messaggio di errore.
 */

int main()
{
    int numeratore, denominatore; float quoziente;

    printf("Introduci il numeratore e il denominatore: ");
    scanf("%d%d",&numeratore,&denominatore);

    if (denominatore != 0){  //istruzioni del ramo vero
        quoziente = (float) numeratore / denominatore;
        printf("Il valore del quoziente e': %.2f",quoziente);
    }
    else{ //istruzioni del ramo falso
        printf("Non è possibile dividere per zero!");
    }

	return 0;
}
