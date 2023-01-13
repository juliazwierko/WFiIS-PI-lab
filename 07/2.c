/*
Podano 6 parametrow wywolania programu:
--> argv[0] = ./a.out
--> argv[1] = raz
--> argv[2] = dwa
--> argv[3] = razem
--> argv[4] = Razem
--> argv[5] = razy trzy
Znaleziono argv[3], reszta: em
Znaleziono argv[5], reszta: y trzy
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //plik nagłówkowy!!!

int main(int argc, char *argv[]) 
{   
    int i;
    if(argc < 2)
    {
        printf("nie podano argumentow\n");
        return 0;
    }
    
    int k = strlen(argv[1]);
    char *str = argv[1];

    printf("Podano 6 parametrow wywolania programu:");
    for (i = 0; i < argc; i++) 
    {   
        printf("--> arg[%d] = %s\n",i, argv[i]); 
    }
     
    printf("\n");
    for (i = 2; i < argc; i++) 
    {   
       
        if(strncmp(str, argv[i], k) == 0)
            printf("arg[%d] = %s\n",i, argv[i]+k); 
    }

    printf("\n");
    return 0;
}
