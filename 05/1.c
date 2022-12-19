/*
Napisz program, który przyjmie od użytkownika dwie liczby typu int. Przy
pomocy operatorów bitowych i maski bitowej sprawdź, czy prawa (najmniej 
znacząca) połowa bitów obu liczb jest taka sama. Wypisz wartość użytej 
maski oraz prawdę lub fałsz. 
Program powinien działać uniwersalnie, niezależnie od sprzętu: należy najpierw 
sprawdzić, ile bitów zajmuje dany typ, i na tej podstawie utworzyć maskę, która 
pomoże sprawdzić połowę bitów.
Np.:
liczby 46196 oraz 1094772 powinny dać w wyniku prawdę
liczby -1431328341 oraz 599501227 powinny dać w wyniku prawdę

*/
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 
#include <time.h>
#include <limits.h>

void porownanie(int a, int b)
{   
    int c = 0;
    int n = sizeof(a)*CHAR_BIT;
    for(int i = 0; i < (n/2); i++)
    {
        c += 1<<i;
    }
    a = a & c;
    b = b & c;

    if (a == b){
        printf("%d\n", c);

        printf("iczby %d oraz %d - prawda", a, b);
    }
    else {
        printf("iczby %d oraz %d - falsz", a, b);
    }
}

int main()
{
    int a = 0;
    int b = 0;

    printf("Podaj a: \n");
    scanf("%d", &a);

    printf("Podaj b: \n");
    scanf("%d", &b);

    porownanie(a, b);

    return 0;
}
