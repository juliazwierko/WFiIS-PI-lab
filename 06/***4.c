/*
Utwórz w main() tablicę char tab[] = "0000";, w której będzie przechowywana liczba binarna zapisana w systemie U1.
Zaprogramuj trzy funkcje:

void losuj(char *t, int n); - wypełnia wejściową tablicę losowymi bitami, zapisanymi w formie znaków. 
Parametr n oznacza liczbę bitów do wylosowania.

void pisz(char *t); - wypisuje tablicę wejściową traktując ją jako łańcuch (bez użycia pętli). 

Trzecia funkcja powinna zwracać (nie wypisywać) wartość dziesiętną wylosowanej liczby
binarnej w U1. Wartość potęgi 2k można obliczyć przy pomocy funkcji z biblioteki
matematycznej: pow(2, k). Funkcja ta wymaga kompilacji programu z opcją -lm
W main() przetestuj kolejno działanie swoich trzech funkcji, przekazując do nich wskaźnik do pierwszego elementu tablicy tab.

Przykładowy efekt uruchomienia programu:
      Wylosowano: 1100
      Wylosowana liczba binarna w U1 ma wartosc dziesietna: -3
*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
#include <math.h>

int c_rand(char min, char max) 
{
  return rand() % (max - min + 1) + min; 
} 

void losuj(char *tab, int n)
{
    n = sizeof(*tab)/sizeof(char);
    for(int i=0; i<n; i++)
    {
        *tab[i] = c_rand(0, 1);
    }
    return;
}


void dzisietnyzapis(char *tab)
{
    int Suma = 0;
    for(int i=0; i<(sizeof(*tab)/sizeof(char)); i++)
    {
        suma += suma + pow(2, i);
    }

}

void pisz(char *tab)
{
    printf("%s",tab);
}


int main() 
{
    char tab[] = "0000";
    char *ptab;
    ptab = tab;
    printf("Rozmiar tab: %lu\n", (sizeof(tab)/sizeof(char)));
    
    losuj(tab, (sizeof(tab)/sizeof(char)));//losowanie
    pisz(tab); //wypisywanie
    
    printf("\n");
    return 0;
}
