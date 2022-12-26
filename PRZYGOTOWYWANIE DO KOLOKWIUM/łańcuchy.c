/*
ilosc elementow: 9
1
2
3
4
5
6
7
8

12345678
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 9

int main(void)
{   
    char tab[SIZE];
    tab[8]='\0';

    printf("ilosc elementow: %lu\n", (sizeof(tab)/sizeof(char)));
    
    for(int i=0; i<(sizeof(tab)/sizeof(char))-1; i++)
    {
        scanf("\n%c", &tab[i]);
    }

    printf("\n");
    printf("%s\n", tab);

    return 0;
}
