/*
Napisz program, który wypisuje wszystkie parametry wywołania programu podane przy uruchomieniu
oraz ich liczbę, np.:
Komenda uruchomienia: ./a.out raz dwa
Na ekranie wyświetla się:
Podano 3 parametry wywolania programu:
--> argv[0] = ./a.out
--> argv[1] = raz
--> argv[2] = dwa
*/

#include "stdio.h"
#include "stdlib.h"
int main(int argc, char *argv[]) 
{
 int i;
 printf("Liczba argumentów wiersza poleceń %d \n", argc);
 printf("Argumenty wiersza poleceń:\n");
 for (i = 0; i < argc; i++) printf("arg[%d] = %s\n", i, argv[i]);
 return 0;
}

/*
OUTPUT:

arg[0] = ./test1
arg[1] = raz
arg[2] = dwa
8/
