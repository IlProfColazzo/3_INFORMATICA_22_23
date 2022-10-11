#include <stdio.h>
#include <stdlib.h>

/*
 * Dato un numero intero tra 1 e 12, che rappresenta il mese corrente, 
 * stampare il nome del mese per esteso (“Gennaio” ... “Dicembre”).
 */

int main()
{
    int mese;

    printf("Inserisci un numero compreso tra 1 e 12: ");
    scanf("%d", &mese);

    if(mese==1){
        printf("Gennaio");
    }
    else if(mese==2){
        printf("Febbraio");
    }
     else if(mese==3){
        printf("Marzo");
    }
     else if(mese==4){
        printf("Aprile");
    }
    else if(mese==5){
        printf("Maggio");
    }
     else if(mese==6){
        printf("Giugno");
    }
     else if(mese==7){
        printf("Luglio");
    }
     else if(mese==8){
        printf("Agosto");
    }
     else if(mese==9){
        printf("Settembre");
    }
     else if(mese==10){
        printf("Ottobre");
    }
     else if(mese==11){
        printf("Novembre");
    }
     else if(mese==12){
        printf("Dicembre");
    }
    else{
        printf("Mese inesistente");
    }
    return 0;
}