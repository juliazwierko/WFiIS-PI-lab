/*
Napisz program, który wczyta z klawiatury wielką literę poprzez scanf("%c", &litera), 
a następnie wyświetli na ekranie trójkąt według poniższego schematu. Przykład działania programu:
Podaj litere: D
   D
  DCD
 DCBCD
DCBABCD
*/
#include <stdio.h>
#include <math.h> 

int main(void)
{
    char b;
    printf("prosze podac literke: ");
    scanf("%c", &b);
    printf("Podana literka: %c\n",b);

    int n=4;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
            printf(" ");  

        for(int j=0; j<i+1; j++)
            printf("%c",b-j);


        for(int j=i-1; j>=0; j--)
            printf("%c",b+j);
       
        printf("\n");
    }
  
    return 0;
}

