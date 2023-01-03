/*
    Napisz program, który znajduje wskaźnik do najmniejszego elementu tablicy dziesięciu losowych liczb 
    całkowitych z zakresu [0, 100] (instrukcja rand()%101). W tym programie nie można deklarować innych 
    zmiennych niż wskaźniki (nazwa tablicy też jest wskaźnikiem).
    Dla każdego elementu tablicy wypisz jego wartość i adres. Po znalezieniu wskaźnika do najmniejszego
    elementu również wypisz wartość tego elementu oraz jego adres, np.:
    70, adres: 0x7ffdfe793760
    91, adres: 0x7ffdfe793764
    90, adres: 0x7ffdfe793768
    55, adres: 0x7ffdfe79376c
    66, adres: 0x7ffdfe793770
    22, adres: 0x7ffdfe793774 
    47, adres: 0x7ffdfe793778
    42, adres: 0x7ffdfe79377c
    67, adres: 0x7ffdfe793780
    29, adres: 0x7ffdfe793784
    Najmniejszy element jest rowny 22 i znajduje sie pod adresem: 0x7ffdfe793774
*/
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

#define ROZMIAR 10

int main(void) //finkcja main;
{ 
    srand(time(NULL)); 
    int tab[ROZMIAR] = {0};
    
    printf("Wylosowane 10 liczb: \n");
    for (int i = 0; i<ROZMIAR; i++)
    {
        tab[i] = rand()%101;
        printf("%d, adres: %p\n", tab[i], &tab[i]);
    }

    int *pmax = &tab[0];
    for (int i = 0; i < ROZMIAR; i++)
    {
        if (tab[i] > *pmax)
        {
            pmax = (tab+i);  /////////// !!!
        }
    }  
    printf("\nNajwiekszy element jest rowny %d i znajduje sie pod adresem: %p\n", *pmax, pmax);


    int *pmin = &tab[0];
    for (int j = 0; j < ROZMIAR; j++)
    {
        if (*pmin > tab[j])
        {
            pmin = &tab[j];
        }
    }
    printf("Najmniejszy element jest rowny %d i znajduje sie pod adresem: %p\n", *pmin, pmin);
  
    return 0; 
}


