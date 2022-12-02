/*
Napisz program z pętlą, w której zmienna zmiennoprzecinkowa x 
będzie zmieniać się w przedziale [0, 5] co krok 0.0001. 
Oblicz sumę wartości funkcji 3x2 dla wszystkich x z tej pętli. 
Wypisz tę sumępomnożoną razy krok 0.0001:
  
  Calka w przedziale [0, 5] wynosi: 125.003750
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void){
//srand(time(0));  Inicjalizacja losowego ziarna
double sum = 0;
double i = 0;
//float c = 0,0001;
for (double x=0.0; fabs(x-5.0)<0.000005 || x<5.0; x += 0.0001){
    printf("element x: %f\n",x);
    i = 3*(x*x);
    sum += i; 
}
printf("suma wartosci funkcji wynosi: %.6f", sum);
return 0;
}
