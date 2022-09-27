#include <stdio.h>
#include <stdlib.h>

/**Scrivere un programma  che permetta di separare
* la parte intera dalla parte decimale del risultato di una divisione.
* L’algoritmo è il seguente:
* - leggi due numeri interi;
* - esegui la divisione tra interi:
* - converti i numeri interi in reali;
* - esegui la divisione tra reali;
* - sottrai al risultato reale la parte intera, ottenendo così solo la parte decimale;
* - visualizza i risultati sullo schermo.
*/

int main()
{
    int dividendo, divisore, parteIntera;
    float parteDecimale;

	printf("Inserisci il dividendo: ");
    scanf("%d", &dividendo);
    printf("Inserisci il divisore: ");
    scanf("%d", &divisore);

    parteIntera = dividendo / divisore;
    parteDecimale = ((float)dividendo / divisore) - parteIntera;

    printf("Parte intera = %d\n",parteIntera);
    printf("Parte decimale = %.2f",parteDecimale);

	return 0;
}
