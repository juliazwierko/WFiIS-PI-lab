/*
Do programu dopisz funkcję rekurencyjną zwracającą k-ty element ciągu 
Fibonacciego (F0=0, F1=1, Fk=Fk-1+Fk-2
).
Dodatkowo funkcja powinna wypisywać informację o tym, co aktualnie oblicza 
lub zwraca. Wywołaj tę funkcję wmain() dla wczytanej z klawiatury wartości
k w miejscu zaznaczonym komentarzem. Przykład uruchomienia programu:
Podaj liczbe: 5
> Obliczam Fib(5) = Fib(4) + Fib(3)
> Obliczam Fib(4) = Fib(3) + Fib(2)
> Obliczam Fib(3) = Fib(2) + Fib(1)
> Obliczam Fib(2) = Fib(1) + Fib(0)
> Zwracam Fib(1)
> Zwracam Fib(0)
> Zwracam Fib(1)
> Obliczam Fib(2) = Fib(1) + Fib(0)
> Zwracam Fib(1)
> Zwracam Fib(0)
> Obliczam Fib(3) = Fib(2) + Fib(1)
> Obliczam Fib(2) = Fib(1) + Fib(0)
> Zwracam Fib(1)
> Zwracam Fib(0)
> Zwracam Fib(1)
Fib(5) = 5
*/
#include <stdio.h>

int Fib(int a)
{
    if(a == 0 || a == 1){
        printf("Zwracam Fib(%d)\n", a);
        return a;
    }
    printf("Obliczam Fib(%d) = Fib(%d) + Fib(%d)\n", a, a-1, a-2);
    return Fib(a-1)+Fib(a-2);
} 

int main(void)
{
    int k, f=0;
    printf("Podaj liczbe: ");
    scanf("%d", &k);
    if(k>=0){
    /* TUTAJ DO ZMIENNEJ f NALEZY PRZYPISAC WARTOSC k-tego 
    ELEMENTU CIAGU FIBONACCIEGO ZWROCONA PRZEZ FUNKCJE */
    f=Fib(k);
    }
    printf("Fib(%d) = %d\n", k, f);
    return 0;
}
