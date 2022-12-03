/*
Zaprogramuj dodawanie dwóch dowolnie dużych liczb 
(np. o pięćdziesięciu cyfrach). 
Przetestuj program dla przykładowej, wylosowanej liczby. 
Efekt uruchomienia programu powinien być następujący:
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int i_rand(int min, int max){
    return rand() % (max-min+1) + min;
}
int main()
{
    printf("\n");
	srand(time(0));
    int tab_1[10] = {0};
    int tab_2[10] = {0};
    int tab_3[11] = {0};
	
	for (int i = 0; i<10; i++){
        tab_1[i] = i_rand(0,9);
    }
    
    printf("  ");
    for (int i = 0; i<10; i++){
        printf("%d",tab_1[i]);
    }
    printf("\n+ ");
    for (int i = 0; i<10; i++){
        tab_2[i] = i_rand(0,9);
    }
    for (int i = 0; i<10; i++){
        printf("%d",tab_2[i]);
    }

    printf("\n____________\n");

    int a = 0;
    for (int i=9; i>=0; i--){
        tab_3[i+1]=tab_1[i]+tab_2[i]+a;
     
        if (tab_3[i+1]>=10){
            tab_3[i+1] = (tab_3[i+1]-10);
            a = 1;
       
        }
        else{
            a = 0;
        }   
    }
    tab_3[0] = a;
    printf(" ");
    for (int i=0; i<11; i++){
        printf("%d",tab_3[i]);
    }
    return 0;
}
