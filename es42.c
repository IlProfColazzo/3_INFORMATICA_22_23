#include <stdio.h>
#include <stdlib.h>

/*
 * Scrivere un programma che determini se un anno acquisito da tastiera è bisestile.
 * Un anno è bisestile se il suo numero è divisibile per 4, con l'eccezione che gli anni secolari 
 * (quelli divisibili per 100) 
 * sono bisestili solo se divisibili per 400. 
 * (Attenzione: conviene usare delle parentesi tonde).
 */

int main()
{
    int anno;

    printf("Inserisci il numero dell'anno: ");
    scanf("%d",&anno);

    if(anno%400==0 || (anno%4==0 && anno%100!=0)){
        printf("L'anno e bisestile");
    }
    else{
        printf("L'anno non e bisestile");
    }

    return 0;
}