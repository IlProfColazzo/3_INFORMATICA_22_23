#include <stdio.h>
#include <stdlib.h>


/**Dato in input un intero che indica la temperatura in gradi centigradi,
 calcolare e stampare a video l’equivalente in Fahrenheit.
 Il fattore di conversione deve essere una costante definita tramite
 la direttiva #define.*/

#define CELTOFAH 1.8 + 32

int main()
{
    float gradiCelsius, gradiFahrenheit;

	printf("Inserisci i gradi Celsius: ");
	scanf("%f",&gradiCelsius);

	gradiFahrenheit = gradiCelsius * CELTOFAH;

	printf("%.2f gradi Celsius corrispondono a %.2f gradi Fahrenheit\n",gradiCelsius,gradiFahrenheit);

  return 0;
}

