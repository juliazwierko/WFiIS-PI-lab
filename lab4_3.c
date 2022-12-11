#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int count1(unsigned int p) {
    
    int i = 0;
    while (p>0){
        int tmp = p;
        p = p/2;
        int reszta = tmp - (p*2);
        if (reszta == 1){
            i +=1;
        }
    }

    printf("summa jedynek: %d", i);
    return i;
}

int main() {

    int liczba;
    printf("Wpisz liczbe: ");
    scanf("%d", &liczba);
    count1(liczba);

    printf("\n");
    return 0;
}
