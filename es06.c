#include <stdio.h>
#include <stdlib.h>


/**Scrivere un programma che dopo aver inserito due operandi interi stampi
a video il prodotto.*/


int main()
{
    int op1, op2;
    printf("Inserisci il primo operando: ");
    scanf("%d",&op1);
    printf("Inserisci il secondo operando: ");
    scanf("%d",&op2);
    printf("%d * %d = %d\n",op1,op2, op1 * op2);
    return 0;
}
