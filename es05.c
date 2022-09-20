#include <stdio.h>
#include <stdlib.h>


/**Date due variabili di nome var1 e var2, 
contenenti due valori numerici diversi, 
scriviamo un programma che esegue lo scambio dei numeri 
che tali variabili contengono. 
Eseguire una stampa delle variabili prima e dopo lo scambio.*/


int main()
{
    int var1 = 10, var2 = 20, tmp;
    
	printf("Prima dello scambio: var1 = %d var2 = %d\n",var1,var2);
	
	tmp = var1;
	var1 = var2;
	var2 = tmp;
	
	printf("Dopo lo scambio: var1 = %d var2 = %d\n",var1,var2);

  return 0;
}
