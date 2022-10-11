#include <stdio.h>
#include <stdlib.h>

/*
 * Dato un numero intero tra 1 e 12, che rappresenta il mese corrente, stampare il nome del mese per esteso
 * (“Gennaio” ... “Dicembre”). Utilizzare il costrutto switch.
 */

int main()
{
    int mese;

    printf("Inserisci il mese: ");
    scanf("%d",&mese);

    switch(mese){
    case 1:
        printf("Gennaio");
        break;
    case 2:
        printf("Febbraio");
        break;
    case 3:
        printf("Marzo");
        break;
    case 4:
        printf("Aprile");
        break;
    case 5:
        printf("Maggio");
        break;
    case 6:
        printf("Giugno");
        break;
    case 7:
        printf("Luglio");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Settembre");
        break;
    case 10:
        printf("Ottobre");
        break;
    case 11:
        printf("Novembre");
        break;
    case 12:
        printf("Dicembre");
        break;
    default:
        printf("Mese inesistente");
        break;
    }

    return 0;
}