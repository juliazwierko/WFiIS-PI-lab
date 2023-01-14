/*
Szyfr Cezara polega na zastąpieniu każdej litery z szyfrowanego tekstu inną, oddaloną od niej o k
miejsc w alfabecie. Alfabet traktowany jest jako cykliczny, tzn. litera 'Z' szyfrowana przy k=2 zamieni
się na 'B'.
Proszę napisać program, który pobierze dwa parametry wejściowe:
argv[1] będzie liczbą całkowitą oznaczającą przesunięcie (instrukcja konwersji łańcucha na typ
całkowity: int k = atoi(argv[1]); z pliku nagłówkowego stdlib.h).
Łańcuch argv[2] jest tekstem do zaszyfrowania. Liczbę znaków w łańcuchu zwraca
strlen(argv[2]) z pliku string.h
Wskazówka: najprościej będzie poruszać się po znakach tego łańcucha przy pomocy wskaźnika,
np. char *w = argv[2];
Szyfrowanie powinno działać na wielkich literach (bez polskich znaków - alfabet ma 26 liter) i omijać
spacje oraz znaki interpunkcyjne. Należy również sprawdzić, czy podano parametry wejściowe (jeśli
nie, to nie ma czego szyfrować). Przykłady uruchomień programu z różnymi parametrami:
Komenda uruchomienia: ./a.out 1 "TEKST DO ZASZYFROWANIA..."
Na ekranie wyświetla się:
UFLTU EP ABTAZGSPXBOJB...
Komenda uruchomienia: ./a.out 10 "TEKST DO ZASZYFROWANIA..."
Na ekranie wyświetla się:
DOUCD NY JKCJIPBYGKXSK...
Komenda uruchomienia: ./a.out
Na ekranie wyświetla się:
Podano za malo parametrow wywolania!
Podaj liczbe k oraz lancuch do zaszyfrowania.
  
DODATKOWA NIEOBOWIĄZKOWA CZĘŚĆ ZADANIA:
Program powinien działać i dla małych, i dla dużych liter. Przydatne mogą być funkcje z pliku
nagłówkowego ctype.h: islower(znak) - sprawdza, czy znak jest małą literą; isupper(znak) -
sprawdza, czy znak jest wielką literą. Przy małych literach proszę uważać na wyjście poza zakres typu
char.
Przykład dla komendy uruchomienia ./a.out 10 "Tekst do zaszyfrowania..." - na ekranie wyświetla
się:
Doucd ny jkcjipbygkxsk...
  
Maksymalna liczba punktów do zdobycia: 6 + 3 dodatkowe
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*
        if(isspace(w[i]))
        {   
            for(int j = i; j < n; j++)
            w[j]=w[j+1];
            i--; 
        }
*/

int main(int argc, char *argv[]) 
{   
    if (argc <= 2)
    {
        printf("Podano za malo parametrow wywolania!\n");
        printf("Podaj liczbe k oraz lancuch do zaszyfrowania.");
        return 0;
    }
    
    int k = atoi(argv[1]);
    printf("liczba wystapien - %d\n", k);
    int n = strlen(argv[2]);
    printf("Ilosc literek w slowie - %d\n\n", n);

    char *w = argv[2]; 
    int flag; //

    printf("Przed: %s\n", argv[2]);
    printf("Po: "); 
    for (int i = 0; i < n; i++) // n - rozmiar 
    {   
        for (int j = 0; j < k; j++) // k - odejmowanie
        {   
            *w = *(w+i); 
            *w = *w - j; 

            if (*w == 'a')
            {
                *w = 'z' - j - j;
                //printf ("%c", *w);
            }

            if (*w == 'a')
            {
                *w = 'z' - j - j;
                //printf ("%c", *w);
            }
            if (*w < 'a')
            {
                *w = 'z' - j;
                //printf ("%c", *w);
            }
        }
        printf ("%c", *w);
    }

    printf("\n");
    return 0;
}
