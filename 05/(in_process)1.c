/*
Napisz program, który w main() pobierze od użytkownika liczbę całkowitą a oraz liczbę bitów ile, które mają zostać ustawione na 1 (zaczynając od najmłodszego). Napisz funkcję zgodną z prototypem:
      void ustaw(int * , int);
która przy użyciu operatorów bitowych oraz odpowiedniej maski ustawi na 1 bity o pozycjach 0, 1, ..., ile-1 w wartości zmiennej a. Proszę przetestować działanie dla przykładowych wartości w main() oraz wypisać zmienną a przed i po wywołaniu funkcji zerowania, np.:
      Podaj liczbe: 41
      Ile najmlodszych bitow ma zostac ustawionych na 1? 4
      Przed wywolaniem funkcji: a = 41
      Po wywolaniu funkcji: a = 47
*/
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 
#include <time.h>

void ustaw(int *a, int b)
{
    if (b <= 0)
    {
        return;
    }
    *a = *a | ((1 << b) - 1); //bitwise or
    
}

int main()
{
    int a = 0;
    int b = 0;

    printf("Podaj a: \n");
    scanf("%d", &a);

    printf("Podaj b: \n");
    scanf("%d", &b);

    ustaw(&a, b);

    printf("Po zmianie: %d\n", a);

    return 0;
}


//jakes bardzo dlugie i za bardzo madre rozwiazanie
/*
void ustaw(int *pa, int b) {

    if(b<=0){
        return;
    }

    //chce uutworzyc z liczby zapisanej w systemie 10 liczbu zapisana w systemie 2, gdzie kazdy element bedzie wpisan do tabeli
    //wiliczenie ilości elementow tabeli;
    int n = 0;
    while (*pa>0){
        int tmp = *pa % 2;
        *pa = *pa>>1;
        n += 1;          
    }
    int tab[n]; //zadanie tabeli z iloscia elementow rownych n

    //wypisywanie liczby w systemie dwojkowym
    for (int i = 0; i<n; i++){
        int tmp = *pa % 2;
        *pa = *pa>>1;
        tab[i] = *pa;
        printf("%d ", tab[i]);
    }
    printf("\n");

    //maska
    int maskowanie = n-b; //z jakego (NUMERU) elementu tabeli musimy zaczynac maskowac na 1
    for (int k = n; n>maskowanie; k--){ //ustawiamy 1
        tab[k]=1;
    }

    //wypisywanie nowej liczby w systemie (2)
    for (int i = 0; i<n; i++){
        printf("%d ", tab[i]);
    }

    int suma = 0;
    int binar = 1;
    //przeksztalcenie do systemu 10-ego
    for (int i = 0; i<n; i++){
        suma = suma + (binar * tab[i]); 
        binar *= 2;
    }
    printf("Nowa liczba po maskowaniu: %d", suma);
}

int main() {
    printf("\n");

    printf("Podaj liczbe: \n");
    int a;
    scanf("%d", &a);
    int *pa = &a;

    printf("Ile najmlodszych bitow ma zostac ustawionych na 1? \n");
    int b;
    scanf("%d", &b);

    void ustaw(*pa,b);

    return 0; 
}
*/
