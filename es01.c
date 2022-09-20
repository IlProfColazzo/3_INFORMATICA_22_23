#include <stdio.h>
#include <stdlib.h>


/**Scrivere un programma che calcoli l’area e il
perimetro di un rettangolo conoscendo i valori
della base e dell'altezza.*/

int main()
{
    float base = 12.5;
    float altezza = 5, perimetro, area;

    perimetro = (base + altezza) * 2;
    area = base * altezza;

    //Il rettangolo con base 12.5 e altezza 5 ha perimetro
    //35 e area 62.5

    printf("Il rettangolo con base %.2f e altezza %.2f ha perimetro %f e area %f",base,altezza,perimetro,area);
    return 0;
}
