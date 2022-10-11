#include <stdio.h>
#include <stdlib.h>

/*
 * Scrivere un programma che, in base all’età, indichi se si ha diritto all’ingresso gratuito in un museo. 
 * I bambini con meno di 10 anni o gli anziani con più di 80 anni non pagano il biglietto
 */

int main()
{
    int eta;
	
    printf("Introduci l'eta': ");
    scanf("%d",&eta);
    
	if (eta < 10 || eta > 80){  
      printf("Hai diritto al biglietto gratuito");
    }
    else{
      printf("Devi pagare il biglietto");
    }
    return 0;
}
