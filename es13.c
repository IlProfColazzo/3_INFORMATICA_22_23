#include <stdio.h>
#include <stdlib.h>


/**Calcolare e stampare a video la circonferenza e l’area di un cerchio
con raggio r fornito in input. Qual è la costante da definire?*/

#define PIGRECO 3.14

int main()
{
    float raggio, area, circonferenza;

	printf("Inserisci il valore del raggio: ");
	scanf("%f",&raggio);

	area = PIGRECO * raggio * raggio;
	circonferenza = PIGRECO * 2 * raggio;

	printf("Il cerchio con raggio %.2f ha area uguale a %.2f e circonferenza uguale a %.2f\n",raggio,area,circonferenza);

  return 0;
}
