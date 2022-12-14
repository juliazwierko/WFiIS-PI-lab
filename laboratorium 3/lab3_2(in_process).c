/*
Zaimplementuj algorytm sortowania przez wybieranie. 
Przetestuj go dla losowej tablicy dziesięciu liczb całkowitych, np.:

Tablica przed sortowaniem:
92 -4-66-12-39 41 57-95 -4-36
Tablica po sortowaniu:
-95-66-39-36-12 -4 -4 41 57 92
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int i_rand(int min, int max){
    return rand() % (max-min+1) + min;
}
int main()
{
    srand(time(0));
    int tab[10] = {0};
    
    for (int i = 0; i<10; i++){
    tab[i] = i_rand(-100, 100);
    }
    printf("Tablica przed sortowaniem: \n");

    for (int i = 0; i<10; i++){
        printf("\t%d",tab[i]);
    }
    printf("\n");
    

    for (int j = 0; j<10; j++){
        tab[j] = i_rand(-100, 100);
    }
    printf("Tablica przed sortowaniem: \n");

    for (int j = 0; j<10; j++){
        printf("\t%d",tab[j]);
    }
    printf("\n");

    return 0;
}

