/*
Napisz program, który wypisze, ile elementów szeregu 1/1+1/2+1/3+...+1/n trzeba zsumować, aby suma przekroczyła wartość 10.
Proszę wypisać tę liczbę oraz sumę z dokładnością do 10 cyfr po przecinku:
Suma 12367 elementow = 10.0000430083
*/

#include <stdio.h>
#include <math.h> 

int main(void)
{
    double n = 2.0; 
    double suma = 1.0; 
    double b = 10.0;
    
    while(suma<b)
    {   
        suma+=1/n;
        n++;
    }
    
    printf("Konieczna suma wynosi: %.10f\n", suma);
    printf("ilosc el. wynosi: %d\n", (int)(n-1));

    return 0;
}
