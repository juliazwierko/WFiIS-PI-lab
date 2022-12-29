/*
n t s d l e v f s l y w b r c w d i c s n 
t wystepuje w tablicy tylko raz.    
e wystepuje w tablicy tylko raz.
v wystepuje w tablicy tylko raz.
f wystepuje w tablicy tylko raz.
y wystepuje w tablicy tylko raz.
b wystepuje w tablicy tylko raz.
r wystepuje w tablicy tylko raz.
i wystepuje w tablicy tylko raz.
*/
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

#define N 20

int main ()
{
    char literka[N];

    srand (time(NULL));
    for(int i=0; i<N; i++)
    {
        literka[i] = rand()%26+'a';
        printf("%c ", literka[i]);
    }

    printf("\n");
    
    for(int i = 0; i<N; i++)
    {
        int flag = 1; // 1-true; 0-false;
        for(int j=0; j<N; j++)
        {
            if(i == j)
            {
                continue;
            }
            
            if(literka[i] == literka[j])
            {
                flag = 0;
                break;
            }
            }
        if (flag == 1)
        {
            printf("%c - wystepuje w tablicy tylko raz.\n", literka[i]);
        }
    }
    printf("\n");

    return 0;
}
