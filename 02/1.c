#include <stdio.h>
#include <math.h> 

int main(void)
{
    int j=0;
    int c=1001;
    for(int b=2; b<c; b++)
    {
        j=0;
        for (int i = 1; i<b+1; i++){
            if ( (b%i) == 0 )
            {
               j+=1;
            }
        }   
        if(j==2)
            printf("%d ",b);
    }
    return 0;
}
