/*
Napisz funkcję double *f_add(int n, double *tab1, double *tab2, double *tab3), która dodaje dwie tablice typu double o tej samej liczbie elementów, a wynik zapisuje w trzeciej (docelowej) tablicy. Parametrami funkcji są: rozmiar tablic oraz trzy wskaźniki do tablic: dwóch źródłowych i wynikowej. Po obliczeniu wyniku funkcja powinna zwrócić wskaźnik do największego elementu w tablicy wynikowej.
W funkcji main():
utwórz trzy tablice typu double o 10-ciu elementach,
dwie z nich uzupełnij losowymi wartościami zmiennoprzecinkowymi z zakresu [0, 1],
wywołaj napisaną wcześniej funkcję f_add, przekazując do niej utworzone tablice,
wyświetl wynikową tablicę - dla każdego elementu wypisz: indeks, wartość, adres,
na podstawie zwróconego przez funkcję wskaźnika wypisz informacje o największym elemencie w formie: indeks (trzeba go znaleźć na podstawie wskaźnika), wartość i adres.
Przykładowy wynik uruchomienia programu:
tab3[0] = 0.511067, adres: 0x7ffc556a24e0
tab3[1] = 0.518742, adres: 0x7ffc556a24e8
tab3[2] = 1.566261, adres: 0x7ffc556a24f0
tab3[3] = 1.294448, adres: 0x7ffc556a24f8
tab3[4] = 0.788222, adres: 0x7ffc556a2500
tab3[5] = 0.947678, adres: 0x7ffc556a2508
tab3[6] = 0.848465, adres: 0x7ffc556a2510
tab3[7] = 1.339332, adres: 0x7ffc556a2518
tab3[8] = 1.161551, adres: 0x7ffc556a2520
tab3[9] = 1.290663, adres: 0x7ffc556a2528

Maksimum: tab3[2] = 1.566261, adres: 0x7ffc556a24f0
*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

//funkcja losowania liczb 
double d_rand(double min, double max) {
    double r = (double)rand() / RAND_MAX;
    return r * (max - min) + min; 
} 

//fubkcja dodawania
double *f_add(int n, double *tab1, double *tab2, double *tab3)
{
    for (int i = 0; i < n; i++)
    {
        tab3[i] = tab1[i]+tab2[i];
    }
    printf("\n");

    //szukamy najwieszy element
    double *pmax = &tab3[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*pmax < tab3[j])
            {
            pmax = &tab3[j];
            }
        }
    }

    return pmax;
}

int main(void)
{ 
    srand(time(NULL));
    int n = 10; 
    double tab1[n];
    double tab2[n];
    double tab3[n];
    double *pmax;

    printf("Wylosowana 1 tablica: \n");
    for (int i = 0; i<n; i++)
    {
        tab1[i] = d_rand(0.0, 1.0);
        printf("tab1[%d] %f, adres: %p\n",i, tab1[i], &tab1[i]);
    }
    printf("\n\n");

    printf("Wylosowana 2 tablica: \n");
    for (int i = 0; i<n; i++)
    {
        tab2[i] = d_rand(0.0, 1.0);
        printf("tab2[%d] %f, adres: %p\n",i, tab2[i], &tab2[i]);
    }
    printf("\n\n");

    printf("Wylosowana 3 tablica:");
    pmax = f_add(n, tab1, tab2, tab3);
    for (int i = 0; i < n; i++)
    {
        printf("tab3[%d] %f, adres: %p\n",i, tab3[i], &tab3[i]);
    }
    printf("\n");
    printf("Najwiekszy element jest rowny %f i znajduje sie pod adresem: %p\n, %d", *pmax, pmax, pmax - tab3);
    
    return 0; 
}
