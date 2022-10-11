#include <stdio.h>
#include <stdlib.h>

/*
 * Dato un meseero intero tra 1 e 12, che rappresenta il mese corrente, stampare
 * il nome del mese per esteso (Gennaio ... Dicembre).
 */

int main()
{
    int mese = 0;

    printf("Inserisci un numero intero: ");
    scanf("%d", &mese);

    if(mese == 1){
        printf("Gennaio\n");
    }
    else{
        if(mese == 2){
            printf("Febbraio\n");
        }
        else{
            if(mese == 3){
                printf("Marzo\n");
            }
            else{
                if(mese == 4){
                    printf("Aprile\n");
                }
                else{
                    if(mese == 5){
                        printf("Maggio\n");
                    }
                    else{
                        if(mese == 6){
                            printf("Giugno\n");
                        }
                        else{
                            if(mese == 7){
                                printf("Luglio\n");
                            }
                            else{
                                if(mese == 8){
                                    printf("Agosto\n");
                                }
                                else{
                                    if(mese == 9){
                                        printf("Settembre\n");
                                    }
                                    else{
                                        if(mese == 10){
                                            printf("Ottobre\n");
                                        }
                                        else{
                                            if(mese == 11){
                                                printf("Novembre\n");
                                            }
                                            else{
                                                if(mese == 12){
                                                    printf("Dicembre\n");
                                                }
												else{
													printf("Il numero inserito non e' valido\n");
												}
                                            }
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

    return 0;
}