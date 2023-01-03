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
#include <math.h> // gcc -g -Wall -lm

void losuj(char *tab, int n)
{
    for(int i=0; i<n; i++)
    {
        tab[i] = '0'+rand()%2;
    }
    return;
}

int dzisietnyzapis(char *tab, int n)
{
    int suma = 0;
    for(int i=(n-1); i>0; i--)
    {
        suma += (tab[i] - '0') * pow(2, n-1-i);
    }
    
    if(tab[0] - '0' == 1)
    {
        suma += (-pow(2, n-1))+1;
    }

    return suma;
}

void pisz(char *tab)
{
    printf("%s",tab);
}

int main() 
{
    srand(time(NULL)); 
    char tab[] = "0000";
    
    losuj(tab, 4);//losowanie
    pisz(tab); //wypisywanie
    printf("\nWylosowana liczba binarna w U1 ma wartosc dziesietna: %d\n", dzisietnyzapis(tab, 4));

    return 0;
}
