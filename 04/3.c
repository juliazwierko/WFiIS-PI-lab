/*
Napisz funkcję zgodną z prototypem:
int count1(unsigned int p);

Funkcja powinna zwracać liczbę jedynek znajdujących się w 
reprezentacji binarnej podanej liczbycałkowitej bez znaku 
unsigned int p przy użyciu operatoraprzesunięcia bitowego 
w prawo orazoperatora %. W main() przetestuj działanie 
zapisanej 
funkcji, przekazując do niej liczbę 2071. W
efekcie program powinien wypisać:
Liczba 2071 ma 5 jedynek.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int count1(unsigned int p) {
    
    int i = 0;
    while (p>0){
        // int tmp = p;
        // p = p>>1;
        // int reszta = tmp % p;
        // //int reszta = p%2;
        // if (reszta == 1){
        //     i +=1;
        // }
        int tmp = p % 2;
        if(tmp == 1)
            i++;
        p = p>>1;
    }
    printf("summa jedynek: %d\n", i);
    return i;
}

int main() {

    count1(2071);

    printf("\n");
    return 0;
}
