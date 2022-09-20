#include <stdio.h>
#include <stdlib.h>


/**La paga di un operaio è di pagaOraria € all’ora. 
Sulla stessa paga viene effettuata una trattenuta pari al trattenutaPercentuale%. 
Date il numero delle ore lavorative svolte, calcolare la paga netta.*/


int main()
{
    float pagaOraria, trattenutaPercentuale, pagaLorda, trattenute, pagaNetta;
    int nOre = 30;

	printf("Inserisci la paga oraria: ");
	scanf("%f",&pagaOraria);
	printf("Inserisci la percentuale di trattenute: ");
	scanf("%f",&trattenutaPercentuale);
	printf("Inserisci il numero di ore lavorate: ");
	scanf("%d",&nOre);
 
    pagaLorda = nOre * pagaOraria;
	trattenute = pagaLorda * trattenutaPercentuale / 100;
    pagaNetta = pagaLorda - trattenute;
    
    printf("paga lorda: %.2f euro - trattenute: %.2f euro = paga netta: %.2f euro",pagaLorda,trattenute,pagaNetta);

  return 0;
}
