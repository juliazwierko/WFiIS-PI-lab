/*
Skopiuj podany niżej program i zapisz do pliku. Dokończ funkcję hex() tak, aby zamieniała wartość zmiennej p na trzycyfrową liczbę szesnastkową (bez znaku), zapisaną w tablicy znakowej tab. Tablica zawiera 4 elementy: tab[0] to najstarsza cyfra, tab[2] to najmłodsza, natomiast do dodatkowego elementu tab[3] należy przypisać znak pusty '\0', oznaczający koniec łańcucha. 
Funkcja powinna wypisywać obliczoną liczbę szesnastkową przy pomocy specyfikatora %s (to jest już zrealizowane w kodzie poniżej) lub informować o błędzie, jeśli wartości p nie da się zamienić na trzycyfrową liczbę szesnastkową. 
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 

#define N 3 

void hex(int p){ 
  char tab[N+1];

  //TU EDYTOWAC 

  printf("%4d = %s\n", p, tab); 
} 

int main(void){
  for(int i=-2; i<=4097; i++) 
    if(i<3 || (i>8 && i<17) || i>4093 || i%1000==0) 
      hex(i); 
  return 0; 
} 

Efekt wywołania programu powinien być następujący:

Liczba -2 jest poza zakresem [0, 4095]
Liczba -1 jest poza zakresem [0, 4095]
   0 = 000
   1 = 001
   2 = 002
   9 = 009
  10 = 00A
  11 = 00B
  12 = 00C
  13 = 00D
  14 = 00E
  15 = 00F
  16 = 010
1000 = 3E8
2000 = 7D0
3000 = BB8
4000 = FA0
4094 = FFE
4095 = FFF
Liczba 4096 jest poza zakresem [0, 4095]
Liczba 4097 jest poza zakresem [0, 4095]
*/

#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 

#define N 3 

void hex(int p){ 
    char tab[N+1];
    //TU EDYTOWAC
    //sprawdzanie czy liczba nalezy do przedzilu:
    if (p<0 || p>4095) {
        printf("Liczba %d jest poza zakresem [0, 4095]\n", p);
        return;
    }

    //wypisywanie w systemie 16:
    int i = p;
    char znak;
            for(int j=2; j>=0;j--){           
                int tmp = i;
                int reszta = i%16;
                i = i/16;
                //int reszta = tmp-(i*16);

                if(reszta<10){
                    znak = reszta + '0';
                }
                else
                    znak = reszta - 10 + 'A';

                tab[j]=znak;
            }

    tab[3]='\0';                               
    printf("%4d = %s\n", p, tab); 
} 

int main(void){
    for(int i=-2; i<=4097; i++) 
        if(i<3 || (i>8 && i<17) || i>4093 || i%1000==0) 
            hex(i); 
    return 0; 
} 
