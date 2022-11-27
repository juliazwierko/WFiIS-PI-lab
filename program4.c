/*
Napisz program, który wczyta z klawiatury liczbę całkowitą n, a
następnie wyświetli na ekranie trójkąt o wysokości n według poniższego schematu. Funkcja scanf("%d", &n) 
pobierająca liczbę powinna być zawarta w pętli do ... while, która będzie się wykonywała, dopóki wpisana 
liczba nie będzie poprawna (tj. nie może być ujemna). Przykład działania programu:
Podaj wysokosc: 4
         *
        ***
       *****
      *******
*/

#include <stdio.h>
#include <math.h> 

int main(void)
{

    int n;
    do 
    {
        printf("wpisz liczbe n dla oznaczenia wysokoscu trojkata: \n");
        scanf("%d", &n);
        printf("wpisana liczba wysokosci: %d\n",n);
    }
    while(n<1);


    int b;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
            printf(" ");  

        for(int j=0; j<((i*2)+1); j++)
            printf("*");

        printf("\n");
    }
    return 0;
}
