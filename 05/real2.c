/*
Napisz funkcję, która wylosuje  n liczb zmiennoprzecinkowych 
(n jest parametrem funkcji) z przedziału [0.5,1.5]
oraz obliczy ich sumę, iloczyn i średnią. Funkcja nie powinna nic wypisywać.
W main() pobierz od użytkownika liczbę losowań n, wywołaj powyższą funkcję 
i wypisz obliczone wartości sumy, iloczynu i średniej. Uwaga: wypisywanie 
tych wartości musi być dopiero w main().
*/

#include <math.h> 
#include <time.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

double d_rand(double min, double max) 
{
    double r = (double)rand() / RAND_MAX;
    return r * (max - min) + min; 
} 

void dzialanie(int n, double *suma, double *iloczyn, double *srednia)
{    
    *suma = 0.;
    *iloczyn = 1.;
    double a = 0;
    for(int i = 0; i<n; i++)
    { 
        a = d_rand(0.5, 1.5);
        *suma = *suma + a;
        *iloczyn = *iloczyn * a;
    }
    *srednia = (*suma/n);
}  


int main(void) {
    int n;
    double suma = 0.;
    double iloczyn = 1.;
    double srednia = 0.;
    printf("Wpisz liczbe n: ");
    scanf("%d", &n);
  
    dzialanie(n, &suma, &iloczyn, &srednia);

    //wypisywanie w int main
    printf("Suma wszystkich liczb; %g\n", suma);
    printf("Iloczyn wszystkich liczb; %g\n", iloczyn);
    printf("Srednia wszystkich liczb; %g\n", srednia);

    return 0;
}
