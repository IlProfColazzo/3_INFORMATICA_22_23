#include <stdio.h>
#include <stdlib.h>

/**Riscrivi l'esercizio precedente utilizzando il tipo int 
per i numeri letti da tastiera e il tipo float per le variabili 
in cui memorizzare i risultati delle divisioni.
*/


int main()
{
    int num1, num2, num3;
    float ris1, ris2, ris3, ris4, ris5, ris6, ris7, ris8, ris9;
    
	printf("Valore del primo numero reale: ");
    scanf("%d", &num1);
    printf("Valore del secondo numero reale: ");
    scanf("%d", &num2);
    printf("Valore del terzo numero reale: ");
    scanf("%d", &num3);

    ris1 = num1 / num1;
    ris2 = num1 / num2;
    ris3 = num1 / num3;
    ris4 = num2 / num1;
    ris5 = num2 / num2;
    ris6 = num2 / num3;
    ris7 = num3 / num1;
    ris8 = num3 / num2;
    ris9 = num3 / num3;

    printf("Risultato tra il primo e il primo numero %f", ris1);
    printf("\nRisultato tra il primo e il secondo numero %f", ris2);
    printf("\nRisultato tra il primo e il terzo numero %f", ris3);
    printf("\nRisultato tra il secondo e il primo numero %f", ris4);
    printf("\nRisultato tra il secondo e il secondo numero %f", ris5);
    printf("\nRisultato tra il secondo e il terzo numero %f", ris6);
    printf("\nRisultato tra il terzo e il primo numero %f", ris7);
    printf("\nRisultato tra il terzo e il secondo numero %f", ris8);
    printf("\nRisultato tra il terzo e il terzo numero %f", ris9);
    
	return 0;
}