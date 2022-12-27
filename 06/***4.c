/*
Utwórz w main() tablicę char tab[] = "0000";, w której będzie przechowywana liczba binarna w zapisana w systemie U1.
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

void losuj(char *t, int n)
{
    return;
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
    
    pisz(tab); //wypisywanie 
    
    printf("\n");
    return 0;
}
