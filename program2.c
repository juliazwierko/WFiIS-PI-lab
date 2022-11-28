/*
Napisz program, który pobierze od użytkownika liczbę całkowitą i wypisze jej wszystkie dzielniki (większe od 1). 
Jeśli jest to liczba pierwsza, program powinien o tym poinformować. Przykład uruchomienia programu z liczbą, która nie jest pierwsza:
      Podaj liczbe: 100
      Dzielniki: 2 4 5 10 20 25 50 100
Przykład uruchomienia programu z liczbą pierwszą:
      Podaj liczbe: 101
      Dzielniki: 101
      Liczba 101 jest pierwsza.
*/

#include <stdio.h>
#include <math.h> 

int main(void)
{
         int b;
         printf("podaj liczbe:");
         scanf("%d", &b);
         printf("liczba: %d\n",b);

         int j=0;
         int i;
         for (i = 1; i<b+1; i++)
            {
                  if ((b%i) == 0) 
                  {
                        printf("liczba-dzelnik: %d\n",i);
                        j+=1;
                  }
            }
         if(j==2)
         printf("Liczba jest pierwsa\n");
         printf("Koniec Zadania.");

    return 0;
}
