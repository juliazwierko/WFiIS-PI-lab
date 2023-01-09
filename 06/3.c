/*
Napisz funkcję void count(int *tab, int n) o dwóch parametrach: wskaźnik do tablicy typu int oraz rozmiar tablicy. 
Funkcja powinna policzyć i wypisać, ile zerowych elementów znajduje się w wejściowej tablicy.
W main() dołącz tablice tab1 i tab2. Dla obu oblicz i wypisz liczbę elementów oraz wywołaj powyższą funkcję.

	int tab1[] =  {47, 46, [1500]=6, -35, -10, 73, -85, 47, 12, -21, -20, 24, -41, 53, 15, 86, 43, -39, 
		-64, -58, -27, -89, 64, -68, 58, -69, -38, 86, 43, -34, -32, -88, -93, 32, -21, 56, 
		46, -97, -31, -98, -17, 69, -40, -64, -39, -77, 55, 21, -42, 96, 70, -54, 38, -98, 
		80, 68, -60, 66, -11, 5, -33, 56, -6, -50, -35, 72, -94, 87, 51, -26, 88, -66, 
		-80, -75, -54, -20, -53, -99, -98, -18, 74, 48, 27, 12, 27, 7, -20, 66, -27, 45, 
		-28, 39, 1, 65, 88, 65, 14, 71};
	int tab2[] = {47, 46, 6, -35, -10, 73, -85, 47, 12, -21, -20, 24, -41, 53, 15, 86, 43, -39, 
		-64, -58, -27, -89, 64, -68, 58, -69, -38, 86, 43, -34, -32, -88, -93, 32, -21, 56, 
		46, -97, -31, -98, -17, 69, -40, -64, -39, -77, 55, 21, -42, 96, 70, -54, 38, -98, 
		80, 68, -60, 66, -11, 5, -33, 56, -6, -50, -35, 72, -94, 87, 51, -26, 88, -66, 
		-80, -75, -54, -20, -53, -99, -98, -18, 74, 48, 27, 12, 27, 7, -20, 66, -27, 45, 
		-28, 39, 1, 65, 88, 65, 14, 71};
*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

void count(int *tab, int n)
{   
    int liczenie = 0;
    for(int i = 0; i < n; i++)
    {
        if (tab[i] == 0)
            liczenie++;
    }
    printf ("ilośc zerowych elementow wynosi: %d, ilośc wszystkich elementow %d", liczenie, n);

    return;
}

int main(void) 
{ 
    int tab1[] =  {47, 46, [1500]=6, -35, -10, 73, -85, 47, 12, -21, -20, 24, -41, 53, 15, 86, 43, -39, 
		-64, -58, -27, -89, 64, -68, 58, -69, -38, 86, 43, -34, -32, -88, -93, 32, -21, 56, 
		46, -97, -31, -98, -17, 69, -40, -64, -39, -77, 55, 21, -42, 96, 70, -54, 38, -98, 
		80, 68, -60, 66, -11, 5, -33, 56, -6, -50, -35, 72, -94, 87, 51, -26, 88, -66, 
		-80, -75, -54, -20, -53, -99, -98, -18, 74, 48, 27, 12, 27, 7, -20, 66, -27, 45, 
		-28, 39, 1, 65, 88, 65, 14, 71};
	int tab2[] = {47, 46, 6, -35, -10, 73, -85, 47, 12, -21, -20, 24, -41, 53, 15, 86, 43, -39, 
		-64, -58, -27, -89, 64, -68, 58, -69, -38, 86, 43, -34, -32, -88, -93, 32, -21, 56, 
		46, -97, -31, -98, -17, 69, -40, -64, -39, -77, 55, 21, -42, 96, 70, -54, 38, -98, 
		80, 68, -60, 66, -11, 5, -33, 56, -6, -50, -35, 72, -94, 87, 51, -26, 88, -66, 
		-80, -75, -54, -20, -53, -99, -98, -18, 74, 48, 27, 12, 27, 7, -20, 66, -27, 45, 
		-28, 39, 1, 65, 88, 65, 14, 71};

    count(tab1,(sizeof(tab1)/sizeof(int)));
    printf("\n");
    count(tab2,(sizeof(tab2)/sizeof(int)));
    printf("\n");

    return 0; 
}

