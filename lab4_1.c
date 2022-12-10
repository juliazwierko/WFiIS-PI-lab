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

void f1() {
    static int a;
    a +=1;
    printf("Funkcja f1: wywolanie nr %d\n",a);
}

int main() {
    f1();
    f1();
    f1();
    f1();
    f1();
}

