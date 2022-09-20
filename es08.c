#include <stdio.h>
#include <stdlib.h>


/**Una sala cinematografica ha postiTotali posti dei quali 
postiGalleria in galleria e il resto in platea. 
Sapendo che il biglietto in platea costa bigliettoPlatea € 
e in galleria x € in più, calcolare l’incasso in una sera di tutto esaurito.*/


int main()
{
    int postiTotali, postiGalleria, postiPlatea;
	float bigliettoPlatea, bigliettoGalleria, incassoPlatea, incassoGalleria;
	float x, incassoTotale;
	
	printf("Inserisci i posti totali del teatro: ");
	scanf("%d",&postiTotali);
	printf("Inserisci i posti in galleria: ");
	scanf("%d",&postiGalleria);
	printf("Inserisci il costo del biglietto in platea: ");
	scanf("%f",&bigliettoPlatea);
	printf("Quanto costa in più il biglietto in galleria? ");
	scanf("%f",&x);
	
	postiPlatea = postiTotali - postiGalleria;
	
	bigliettoGalleria = bigliettoPlatea + x;
	incassoGalleria = bigliettoGalleria * postiGalleria;
	incassoPlatea = bigliettoPlatea * postiPlatea;
	incassoTotale = incassoGalleria + incassoPlatea;

	printf("Il teatro ha incassato %.2f euro",incassoTotale);

  return 0;
}
