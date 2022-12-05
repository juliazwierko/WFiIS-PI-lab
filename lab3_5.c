/*
Napisz program, który pobierze od użytkownika liczbę losowań int n. 
Następnie n razy wylosuj parę licz rzeczywistych double x, y z przedziału [0,1]
[0,1]. 
Dla każdej z par sprawdź, 
czy suma ich kwadratów jest mniejsza od 1: zlicz wszystkie przypadki, gdy x2+y2 < 1. 
Po zakończeniu pętli wypisz wynik, będący liczbą tych przypadków pomnożoną razy 4 i 
podzieloną przez n. Przykładowy efekt uruchomienia programu: 
*/
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

int i_rand(int min, int max) {
    return rand() % (max - min + 1) + min; 
} 

double d_rand(double min, double max) {
    double r = (double)rand() / RAND_MAX;
    return r * (max - min) + min; 
} 

int main(void) { 
    int n;
    printf("Podaj liczbe losowan: ");
    scanf("%d", &n);

    double x;
    double y;
    int j = 0; //ilosc przypadkow

    for (int i = 0; i<n; i++ ){ 
        x = d_rand(0, 1.);
        y = d_rand(0, 1.);
        
            if(((x*x)+(y*y))<1)
            j += 1;
    }
    printf("Licbza przypadkow, gdy ((x^2+y^2)<1): %d\n", j);
    double wynik = (j*4.)/n;
    printf("Wynik ((Liczba przypadkow * 4)/n): %.6f", wynik);
    return 0; 
}
