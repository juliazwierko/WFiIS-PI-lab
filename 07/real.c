/*
 (5 pkt.) Napisz program obliczający wartość funkcji podanej przez użytkownika jako parametr wywołania programu. Program powinien obsługiwać 4 funkcje z biblioteki matematycznej: sinus, cosinus, eksponenta, logarytm naturalny.

Użytkownik powinien móc wywołać program dla jednej z czterech funkcji z podanym przez siebie zmiennoprzecinkowym argumentem, np.:

Komenda wywołania: ./a.out "cos(-3.14)"
Na ekranie wyświetla się:
cos(-3.14) = -0.999999

Komenda wywołania: ./a.out "log(369)"
Na ekranie wyświetla się:
log(369) = 5.9108
Program powinien też poinformować o błędzie, jeśli użytkownik nie podał parametru wywołania, i zakończyć działanie:

Komenda wywołania: ./a.out 
Na ekranie wyświetla się:
Podaj parametr!
Wskazówki:

Drugi z parametrów funkcji int main(int argc, char *argv[]) jest tablicą łańcuchów. Pracujemy tylko na jednym łańcuchu, więc najprościej będzie przejąć do niego wskaźnik: char * lancuch = argv[1]; (zakładając, że interesuje nas łańcuch argv[1]).
Konsola interpretuje nawiasy jako znaki specjalne, dlatego łańcuch należy podawać w cudzysłowie (albo poprzedzać każdy znak nawiasu backslashem).
Bardzo przydatne funkcje do pracy na łańcuchach: string.h
Konwersja łańcucha na liczbę zmiennoprzecinkową: funkcja double atof(const char* str); z stdlib.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char *argv[]) 
{   
    //informowanie o bledzie
    int i;
    if(argc < 2)
    {
        printf("nie podano argumentow\n");
        return 0;
    }
    int k = strlen(argv[1]);
    printf("\nIlosc znakow wpisanego argumenta : %d\n", k); 

    char *str = argv[1]; //cos345
    
    str = (str + 4);
    //printf("%s\n", str);  Wypisanie na output: 345;
    
    double x = atof(str); //przeksztalcenie w liczbu;
    printf("Funkcja bedzie wykonanan dla kata rownego: %f\n", x); 

    char sinus[] = "sin";
    char cosinus[] = "cos";
    char eksponenta[] = "eks";
    char logarytm[] = "log";

    if(strncmp(argv[1], sinus, 3) == 0)
    {
        double sin_ = sin(x);
        printf("%s = %f",argv[1], sin_);
    }
    else if ((strncmp(argv[1], cosinus, 3) == 0))
    {
        double cos_ = cos(x);
        printf("%s = %f", argv[1], cos_);
    }
    else if ((strncmp(argv[1], eksponenta, 3) == 0))
    {
        double exp_ = exp(x);
        printf("%s = %f", argv[1], exp_);
    }
    else if ((strncmp(argv[1], logarytm, 3) == 0))
    {
        double log_ = log(x);
        printf("%s = %f", argv[1], log_);
    }
    
    printf("\n");
    return 0;
}
