#include <stdio.h>
#include <stdlib.h>

/**Effettuiamo la divisione tra numeri interi salvando il risultato prima
 in una variabile intera e successivamente in una variabile reale.
*/

int main()
{
    int dividendo = 3, divisore = 2, ris1;
    float ris2;
    ris1 = dividendo / divisore;
    ris2 = dividendo / divisore;
    printf("Risultato nella variabile intera: %d", ris1);
    printf("\nRisultato nella variabile reale: %f", ris2);
    return 0;
}
