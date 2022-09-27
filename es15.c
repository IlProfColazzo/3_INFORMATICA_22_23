#include <stdio.h>
#include <stdlib.h>


/**Scrivi un programma che visualizzi il quoziente e il resto
della divisione tra due numeri interi letti da tastiera.
*/

int main()
{
    int dividendo, divisore, quoziente, resto;

	printf("Inserisci il dividendo: ");
	scanf("%d",&dividendo);
    printf("Inserisci il divisore: ");
	scanf("%d",&divisore);

	quoziente = dividendo / divisore;
	resto = dividendo % divisore;
	printf("%d / %d = %d con resto %d\n",dividendo,divisore,quoziente,resto);

  return 0;
}
