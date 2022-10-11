#include <stdio.h>
#include <stdlib.h>

#define SCONTO 20

/*
 * Un supermercato applica uno sconto del 20% sull’importo 
 * che supera i 100€: scrivi un programma che, 
 * leggendo il totale della spesa, calcola l’eventuale 
 * importo scontato.
 */

int main()
{
    float spesa, importoDaPagare;
	float sconto=0;
	
    printf("Introduci il l'importo speso: ");
    scanf("%f",&spesa);
	
    if (spesa > 100){ 
        sconto = (spesa - 100) * SCONTO / 100;
    }
	
    importoDaPagare = spesa - sconto;
	printf("Devi pagare %.2f euro", importoDaPagare);
	
    return 0;
}