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