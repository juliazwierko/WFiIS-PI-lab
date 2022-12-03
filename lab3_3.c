/*
Napisz program z dziesięcioelementową tablicą typu double. 
Wypełnij ją losowymi wartościami z przedziału [-100.0, 100.0]
i wypisz jej zawartość używając specyfikatora formatu %*.*f tak, 
aby wszystkie wartości były wyrównane do prawej strony (jak w przykładzie poniżej).
Następnie przesuń wartość każdego elementu do następnego tak, aby po przesunięciu 
w elemencie o indeksie i znajdowała się wartość, która wcześniej była w elemencie o indeksie i-1.
Zakładamy, że tablica jest cykliczna, tzn. wartość z ostatniego 
elementu przesuwamy do pierwszego elementu.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int i_rand(int min, int max){
    return rand() % (max-min+1) + min;
}

double d_rand(double min, double max){
    double r = (double) rand()/RAND_MAX;
    return r*(max-min) + min;
}


int main()
{
	srand(time(0));
	double tab[10] = {0};
	
    
	for (int i = 0; i<10; i++){
        tab[i] = d_rand(-100.0, 100.0);
    }
    printf("Tablica przed sortowaniem: \n");

    for (int i = 0; i<10; i++)
        printf("[A%d] = %6.2f\n",i,tab[i]);
    
    printf("\n");

    double tmp = tab[0];

    for (int i = 0; i<9; i++){
        double tmp_2 = tab[i + 1];
        tab[i + 1]=tmp;
        tmp = tmp_2;
    }

    tab[0] = tmp;

    printf("Tablica po przesunięciu: \n");

    for (int i = 0; i < 10; i++)
        printf("A[%d] = %6.2f\n", i, tab[i]);
        
	return 0;
}
