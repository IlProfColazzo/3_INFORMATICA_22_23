#include <stdio.h>
#include <stdlib.h>


/**Scrivi un programma che legge in input un valore corrispondente a un numero di secondi
e lo trasforma in ore, minuti e secondi.
(Esempio: 36956 secondi corrispondono a 10 ore, 15 minuti e 56 secondi)
*/

#define SECINORA 3600
#define SECINMINUTO 60

int main()
{
    int secondiTotali, ore, minuti, secondi, resto;

	printf("Inserisci il numero di secondi: ");
	scanf("%d",&secondiTotali);

	ore = secondiTotali / SECINORA;
	resto = secondiTotali % SECINORA;
	minuti = resto / SECINMINUTO;
	resto = resto % SECINMINUTO;
	secondi = resto;

	printf("%d secondi corrispondono a %d ore, %d minuti e %d secondi",secondiTotali,ore,minuti,secondi);

  return 0;
}
