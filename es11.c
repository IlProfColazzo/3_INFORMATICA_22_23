#include <stdio.h>
#include <stdlib.h>


/**Dato in input un intero che indica la temperatura in gradi centigradi,
 calcolare e stampare a video l’equivalente in Fahrenheit. 
 Il fattore di conversione deve essere una costante definita tramite 
 la direttiva #define.*/

#define EURODOLLARO 0.96
#define EUROSTERLINE 0.89

int main()
{
    float saldoEuro, saldoDollari;

	printf("Inserisci il saldo del conto corrente: ");
	scanf("%f",&saldoEuro);

	saldoDollari = saldoEuro * EURODOLLARO;

	printf("Il tuo saldo corrisponde a %.3f dollari\n",saldoDollari);
	printf("Il tuo saldo corrisponde a %.3f sterline\n",saldoEuro*EUROSTERLINE);

  return 0;
}
