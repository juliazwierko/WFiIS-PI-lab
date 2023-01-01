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
 
#define N 5
 
int i_rand(int min, int max) 
{
  return rand() % (max - min + 1) + min; 
} 

int main()
{
    int a[N] = {0};
    int i = 0, j = 0;
    int max, min;
    
    for( ; i < N; i++)
    {
        a[i] = i_rand(0, 100);
        printf("tab[%d] - %d\n", i, a[i]);
    }
    
    a[0] += a[N-1];
    a[N-1] = a[0] - a[N-1];
    a[0] -= a[N-1];
    
    max = a[0];
    min = a[0];
    for(i = 0; i < N; i++)
    {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    
    
    printf("\nMax: %d\nMin:%d\n", max, min);
    
    return 0;
}
