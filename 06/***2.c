//Zadanie 2// 
/*
n t s d le vf sl yw br cw di cs n wystepuje w tablicy tylko raz.
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
    
    for (int i = 0; i < N; i++) 
    {
        for(int j = i+1; j < N; j++)
        {
            if(literka[i] == literka[j])
            {
                printf("%c powtorzanie\n", literka[i]);
            }
        }
    }

  return 0;
}
