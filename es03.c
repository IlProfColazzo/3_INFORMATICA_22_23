#include <stdio.h>
#include <stdlib.h>


/**In un parco divertimenti i biglietti costano 25 € per ogni bambino 
con età inferiore a 10 anni, e 10 € in più per ogni altra persona. 
Sapendo che i bambini che sono entrati al parco sotto i dieci anni sono 2000, 
calcolare il guadagno del parco divertimenti sapendo che le altre persone 
sono esattamente il doppio dei bambini.*/


int main()
{
    float costoBigliettoBambino = 25, x = 10, guadagno;
    int nBambini = 2000, nAdulti;

 
    nAdulti = nBambini * 2;
    guadagno = costoBigliettoBambino * nBambini + nAdulti * (costoBigliettoBambino + x);
    
    printf("Il parco divertimenti ha incassato %.2f euro",guadagno);

  return 0;
}
