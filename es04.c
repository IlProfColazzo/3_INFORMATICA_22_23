#include <stdio.h>
#include <stdlib.h>


/**La paga di un operaio è di 15,00 € all’ora. 
Sulla stessa paga viene effettuata una trattenuta pari al 27%. 
Date il numero delle ore lavorative svolte, calcolare la paga netta.*/


int main()
{
    float pagaOraria = 15, trattenutaPercentuale = 27, pagaLorda, trattenute, pagaNetta;
    int nOre = 30;

 
    pagaLorda = nOre * pagaOraria;
	trattenute = pagaLorda * trattenutaPercentuale / 100;
    pagaNetta = pagaLorda - trattenute;
    
    printf("paga lorda: %.2f euro - trattenute: %.2f euro = paga netta: %.2f euro",pagaLorda,trattenute,pagaNetta);

  return 0;
}
