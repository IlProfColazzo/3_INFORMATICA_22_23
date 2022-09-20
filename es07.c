#include <stdio.h>
#include <stdlib.h>


/**Dati in input l’area e l’altezza di un triangolo, 
determinare la base e visualizzarla in output.*/


int main()
{
    float area, altezza, base;
    printf("Inserisci l'area del triangolo: ");
    scanf("%f",&area);
    printf("Inserisci l'altezza del triangolo: ");
    scanf("%f",&altezza);
	//a = b * h /2
	base = area * 2 / altezza;
    printf("La base del triangolo e' %f\n",base);
    return 0;
}
