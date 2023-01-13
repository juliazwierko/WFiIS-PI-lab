/*
Napisz program z tablicą zadeklarowaną w main()
double tab[] = {50.37, -40.60, -18.36, 17.37, -3.19, -25.93, 69.91, -83.37, -39.35, 59.69,
-9.00, -23.82, 30.32, -19.17, -86.67, 27.08, 63.64, 41.79, -43.38, 6.63, -90.99, 22.54,
98.05, 19.41, 1.02, -78.41, -98.57, 8.02, -51.79, 56.42, -83.96, 97.58, -83.19, -3.33,
15.96, 12.62, 69.75, -13.13, 28.25, -68.60, -52.44, -79.75, 6.58, 76.88, 0.09, 18.91, 4.95,
-35.28, -38.30, 60.57};
oraz funkcją zgodną z prototypem (należy go uzupełnić według własnego pomysłu):
... oblicz(double *p, double *k, ...);
Funkcja powinna obliczać i przekazywać do main() sumę, iloczyn i średnią elementów tablicy
zaczynając od elementu, na który wskazuje p i kończąc na elemencie, na który wskazuje k. W main()
wywołaj tę funkcję, przekazując do niej adresy elementów o indeksach 10 oraz 20. W main() wypisz
obliczoną przez funkcję sumę, iloczyn i średnią. Efekt wywołania programu powinien być
następujący:

Suma = -103.57, iloczyn = 20354119325664784.00, srednia = -9.42
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double funkcja_1(double *p, double *k,int a, int b)
{   
    double suma = 0.;
    for (int i = 0; i < (b-a)+1; i++)
    {
        suma += *(p+i);
    }
    return suma;
}

double funkcja_2(double *p, double *k,int a, int b)
{   
    double iloczyn = 1.;
    for (int i = 0; i < (b-a)+1; i++)
    {
        iloczyn *= *(p+i);
    }
    return iloczyn;
}

double funkcja_3(double *p, double *k,int a, int b)
{   
    double srednia = 0.;
    for (int i = 0; i < (b-a+1); i++)
    {
        srednia += *(p+i);
    }
    srednia = srednia/(b-a+1);
    return srednia;
}

int main(int argc, char *argv[]) 
{   
    double tab[] = {50.37, -40.60, -18.36, 17.37, -3.19, -25.93, 69.91, -83.37, -39.35, 59.69,
-9.00, -23.82, 30.32, -19.17, -86.67, 27.08, 63.64, 41.79, -43.38, 6.63, -90.99, 22.54,
98.05, 19.41, 1.02, -78.41, -98.57, 8.02, -51.79, 56.42, -83.96, 97.58, -83.19, -3.33,
15.96, 12.62, 69.75, -13.13, 28.25, -68.60, -52.44, -79.75, 6.58, 76.88, 0.09, 18.91, 4.95,
-35.28, -38.30, 60.57};

    char *a = argv[1];
    printf("lancuch - %s\n", a);
    int liczba1 = (*a - '0')*10; //10
    printf("liczba - %d\n\n", liczba1);
    
    char *b = argv[2];
    printf("lancuch - %s\n", b);
    int liczba2 = (*b - '0')*10; //20
    printf("liczba - %d\n\n", liczba2);
    
    printf("lewostronna granica - %f\n", tab[10]);
    printf("prawostronna granica - %f\n\n", tab[20]);

    double suma = funkcja_1((tab + liczba1),(tab + liczba2), liczba1, liczba2);
    printf("Suma elementow wynosi: %.2f\n", suma);

    double iloczyn = funkcja_2((tab + liczba1),(tab + liczba2), liczba1, liczba2);
    printf("Iloczyn elementow wynosi: %.2f\n", iloczyn);
    
    double sriednia = funkcja_3((tab + liczba1),(tab + liczba2), liczba1, liczba2);
    printf("Sriednia suma elementow wynosi: %.2f\n", sriednia);
    
    printf("\n");
    return 0;
}
