#include <stdio.h>
#include <math.h> 

int main(void){
    int a;
    float b;

    printf("\n");

    for(a = 1; a < 3.05; a++){
        if(a == 2){
            printf("\tTeraz a to dwojka: a = %d\n", a);
        }
        else{
            printf("a = %d, czyli nie jest dwojka\n", a);
        }
    }

    printf("\n\n");

    for(b = 1.0; b < 3.05; b += 0.2){
        if(fabs(b - 2.0) <= 0.000005){
            printf("\tTeraz b to dwojka: b = %e\n", b);
        }
        else{
            printf("b = %e, czyli nie jest dwojka\n", b);
        }
    }

    printf("\n");

    return 0;
}
