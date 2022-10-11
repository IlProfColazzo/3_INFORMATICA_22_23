#include <stdio.h>
#include <stdlib.h>

/*
 * Scrivi un programma che dato in input il valore
 * del lato di un cubo, stampi a video la superficie 
 * totale e il volume solo se il valore letto è positivo; 
 * altrimenti non stampare nessun messaggio.
 */

int main()
{
    float lato, area, volume;

    printf("Inserisci il valore del lato del cubo: ");
    scanf("%f", &lato);

    if(lato >= 1){
        area = 6 * lato * lato;
        volume = lato * lato * lato;
        printf("L'area del cubo e': %2.f", area);
        printf("\nIl volume del cubo e': %2.f", volume);
    }
    return 0;
}