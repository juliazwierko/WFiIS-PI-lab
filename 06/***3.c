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

int i_rand(int min, int max) //finkcja losowania liczb;   
{
  return rand() % (max - min + 1) + min;  
} 

int main(void) //finkcja main;
{ 
    srand(time(NULL)); 
    int tab[ROZMIAR] = {0};
    int *ptab;
    
    printf("Wylosowane 10 liczb: \n");
    for (int i = 0; i<=ROZMIAR; i++)
    {
        tab[i] = i_rand(0, 100);
        ptab = &tab[i];
        printf("%d, adres: %p\n", tab[i], ptab);
    }

    int *pmax;
    int max;
    for (int i = 0; i <= ROZMIAR; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
            pmax = &max;
        }
    }  
    printf("\n");
    printf("Najwiekszy element jest rowny %d i znajduje sie pod adresem: %p\n", max, pmax);


    int *pmin;
    int min;
    for (int j = 0; j < ROZMIAR; j++)
    {
        if (min > tab[j])
        {
            min = tab[j];
            //pmin = &min;
        }
    }
    printf("Najmniejszy element jest rowny %d i znajduje sie pod adresem: %p\n", min, pmin);
  
    return 0; 
}
