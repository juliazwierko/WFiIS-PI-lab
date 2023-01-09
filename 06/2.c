/*
Napisz funkcję o prototypie dokładnie zgodnym z: void funkcja(char * lancuch), pobierającą wskaźnik do łańcucha. 
Funkcja powinna usunąć z łańcucha wszystkie białe znaki (tzn. spacje, tabulatory, itp.).
W main() należy przetestować napisaną funkcję dla dowolnego łańcucha oraz wypisać go przed i po działaniu funkcji. 

Przykładowy wynik:
PRZED: To jest TESTOWY    lancuch
PO:    TojestTESTOWYlancuch

Przydatna funkcje o nagłówkach w pliku ctype.h: https://en.cppreference.com/w/c/string/byte/isspace
*/

#include <stdio.h> 
#include <time.h>
#include <string.h> //! strlen;
#include <ctype.h>

void funkcja(char *lancuch)
{
    int n = strlen(lancuch);
    for(int i =0; i < n; i++)
    {
        if(isspace(lancuch[i]))
        {   
            for(int j = i; j < n; j++)
            lancuch[j]=lancuch[j+1];
            i--; 
        }
    }
    printf("nowy lancuch: %s", lancuch);
    return;
}

int main()
{
    char lancuch[] = "To jest TESTOWY    lancuch";
    printf("string is: %s\n", lancuch);

    funkcja(lancuch);

    printf("\n");
    return 0;
}
