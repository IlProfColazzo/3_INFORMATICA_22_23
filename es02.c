#include <stdio.h>
#include <stdlib.h>


/**Una sala cinematografica ha 550 posti dei quali 
250 in galleria e il resto in platea. 
Sapendo che il biglietto in platea costa 8 € 
e in galleria 2 € in più, calcolare l’incasso in una sera di tutto esaurito.*/


int main()
{
    int postiTotali, postiGalleria, postiPlatea;
	float bigliettoPlatea, bigliettoGalleria, incassoPlatea, incassoGalleria;
	float incassoTotale;
	
	postiTotali = 550;
	postiGalleria = 250;
	postiPlatea = postiTotali - postiGalleria;
	bigliettoPlatea = 8;
	bigliettoGalleria = bigliettoPlatea + 2;
	incassoGalleria = bigliettoGalleria * postiGalleria;
	incassoPlatea = bigliettoPlatea * postiPlatea;
	incassoTotale = incassoGalleria + incassoPlatea;

	printf("Il teatro ha incassato %.2f euro",incassoTotale);

  return 0;
}
