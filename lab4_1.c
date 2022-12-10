/*
Napisz funkcję zgodną z prototypem:
void f1(void);

Funkcja f1() ma wypisywać numer swojego wywołania. W całym programie można użyć tylko
jednej zmiennej - ma być zadeklarowana wewnątrz funkcji f1(). Przetestuj funkcję wywołując ją w
main() np. 5 razy:

Funkcja f1: wywolanie nr 1.
Funkcja f1: wywolanie nr 2.
Funkcja f1: wywolanie nr 3.
Funkcja f1: wywolanie nr 4.
Funkcja f1: wywolanie nr 5.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void funkcja(int i) {
    printf("Wpisz liczbe wywolan: ");
    scanf("%d", &i);
    for (int j = 1; j<=i; j++){ 
        printf("Funkcja f1: wywyolanie nr %d\n", j);
    }
}

int main( ){
    printf("\n");

    funkcja(5);

    printf("\n");
    return 0;
}
