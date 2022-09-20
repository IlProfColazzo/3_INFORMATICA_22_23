#include <stdio.h>
#include <stdlib.h>


/**In un parco divertimenti i biglietti costano costoBambino € 
per ogni bambino con età inferiore a 10 anni, 
e x € in più per ogni altra persona. 
Sapendo che i bambini che sono entrati al parco sotto 
i dieci anni sono nBambini, calcolare il guadagno del 
parco divertimenti sapendo che le altre persone sono esattamente il doppio dei bambini.
*/


int main()
{
    float costoBambino, x, guadagno;
    int nBambini, nAdulti;

    printf("Inserisci il prezzo del biglietto dei bambini: ");
    scanf("%f",&costoBambino);
    printf("Inserisci il numero dei bambini: ");
    scanf("%d",&nBambini);
    printf("Inserisci la differenza di prezzo per gli adulti: ");
    scanf("%f",&x);

    nAdulti = nBambini * 2;
    guadagno = costoBambino * nBambini + nAdulti * (costoBambino + x);
    //il parco divertimenti ha incassato 7000 euro
    printf("Il parco divertimenti ha incassato %.2f euro",guadagno);

  return 0;
}
