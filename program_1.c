#include <stdio.h>
#include <math.h> 

int main(void)
{
   int a = 100;
   printf("Zadana liczba:%d\n",a);
    
   int i;
   for (i = 1; i<101; i++)
       {
          if ( (a%i) == 0  )
          {
           printf("liczba-dzelnik:ta\n",i);
          }
       }
    
    printf("Koniec Zadania numer 1.\n\n");

       
       
       //Rozwiazanie jezeli liczba pierwsza 

    int b = 101;
    printf("Zadana liczba:%d\n",b);
      
    int j;
    for (j = 1; j<102; j++)
    {
       if (b%j==0)
       {
        printf("liczba-dzelnik: %d\n",j);
       }


    }
       

          if (b/b == 1)
          {
           if (b/1 == b)
           printf("liczba jest pierwsza\n\n");
          }

          
          
       
    
    printf("Koniec Zadania.");
    
    

    return 0;
}