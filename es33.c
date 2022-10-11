#include <stdio.h>
#include <stdlib.h>

/*
 * Dati tre numeri, visualizza solo quelli che sono maggiori di 75.
 */

int main()
{
    int num1, num2, num3;
    printf("Dammi il primo numero ");
    scanf("%d", &num1);
    printf("Dammi il secondo numero ");
    scanf("%d", &num2);
    printf("Dammi il terzo numero ");
    scanf("%d", &num3);
    if(num1>75){
        printf("Il primo numero e' maggiore di 75\n");
    }
    if(num2>75){
        printf("Il secondo numero e' maggiore di 75\n");
    }
    if(num3>75){
        printf("Il terzo numero e' maggiore di 75\n");
    }
    return 0;
}