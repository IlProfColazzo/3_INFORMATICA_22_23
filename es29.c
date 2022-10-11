#include <stdio.h>
#include <stdlib.h>

#define SCATTO 0.10
#define TARIFFAPRIMIOTTANTA 0.15
#define TARIFFAOLTREOTTANTA 0.09

/*
 * Una nuova compagnia telefonica ha promosso l’offerta “oltre 80”: alla cifra fissa di 0.10 € (costo alla risposta)
 * occorre aggiungere la cifra di 0.15€ per ogni secondo del tempo della telefonata; però oltre gli 80 secondi 
 * la tariffa di ogni secondo è di 0.09. Fornito da tastiera il numero dei secondi della telefonata, 
 * visualizzare il costo totale della chiamata. Le tariffe indicate nel testo sono delle costanti.
 */

int main()
{
    int secondi;
    float totale;

    printf("Dammi numero secondi: ");
    scanf("%d",&secondi);

    if(secondi>80){
        totale = SCATTO + (TARIFFAPRIMIOTTANTA * 80) + (secondi - 80) * TARIFFAOLTREOTTANTA;
    }
    else{
        totale = SCATTO + (TARIFFAPRIMIOTTANTA * secondi);
	}
	
	printf("Il totale della chiamata e' di: %0.2f",totale);

    return 0;
}