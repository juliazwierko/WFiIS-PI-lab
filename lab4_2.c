/*
Napisz program z czterema funkcjami, zgodnymi z prototypem:
float nazwa_funkcji(float a, float b);
Funkcje mają zwracać sumę/różnicę/iloczyn lub iloraz danych wejściowych (niczego nie wypisują). W
funkcji main() pobierz od użytkownika dwie liczby zmiennoprzecinkowe oraz znak działania (+, -, *
lub /). Przy pomocy instrukcji switch uruchom odpowiednią funkcję, obliczającą wynik działania.

Wypisz go na ekran, np.:
Wpisz operacje do obliczenia: 15.5*17.3
Wynik: 268.150000
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float dodawanie(float a, float b){
    //printf("%f + %f = %.6f", a, b , (a+b));
    return (a+b);
}

float odejmowanie(float a, float b){
    //printf("%f - %f = %.6f", a, b , (a-b));
    return (a-b);
}

float iloczyn(float a, float b){
    //printf("%f * %f = %.6f", a, b , (a*b));
    return (a*b);
}

float dzielenie(float a, float b){
    //printf("%f / %f = %.6f", a, b , (a/b));
    return (a/b);
}

int main( ){
    float a=0., b=0.;
    printf("Wpisz liczbu a: ");
    scanf("%f", &a);
    printf("Wpisz liczbu b: ");
    scanf("%f", &b);

    char dzialanie=' ';
    printf("Wpisz działanie medzy zadanymi liczbami: ");
    scanf("\n%c", &dzialanie);
    switch (dzialanie) {
        case '+': {
            printf("%f + %f = %.6f", a, b , dodawanie(a,b));
            break;
        }
        case '-': {
            printf("%f - %f = %.6f", a, b , odejmowanie(a,b));
            break;
        }
        case '*': {
            printf("%f * %f = %.6f", a, b , iloczyn(a,b));
            break;
        }
        case '/' : {
            printf("%f / %f = %.6f", a, b , dzielenie(a,b));
            break;
        }
        default:
            printf("Wpisz poprawne dzialanie.\n");
    }
    
    printf("\n");
    return 0;
}
