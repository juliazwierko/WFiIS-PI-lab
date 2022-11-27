#include <stdio.h>
#include <math.h> 

int main(void)
{

    // int password;
    // printf("Test danych wejsciowych:\n");
    // printf("Entere your password: \n");
    // scanf("%d", &password);
    // printf("my Daaaarling, you were hacked, your password is: %d\n\n",password);

/////////////////////////////////////////////////////////////////////////

    int n;
    do 
    {
        printf("wpisz liczbe n dla oznaczenia wysokoscu trojkata: \n");
        scanf("%d", &n);
        printf("wpisana liczba wysokosci: %d\n",n);
    }
    while(n<1);


    int b;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
            printf(" ");  

        for(int j=0; j<((i*2)+1); j++)
            printf("*");

        
            
        
        

        
        printf("\n");
    }
    

    return 0;
}
