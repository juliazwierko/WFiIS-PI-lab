Zadanie należy wykonać przy użyciu funkcji z pliku nagłówkowego string.h (str1, str2 oznaczają
wskaźniki do tablic znakowych, k to liczba całkowita):
strncmp(str1, str2, k) - porównuje k pierwszych znaków str1 i str2. Jeśli są identyczne:
zwraca 0.
strlen(str1) - zwraca długość łańcucha str1
Skopiuj program z poprzedniego zadania i rozbuduj go. Znajdź parametry wywołania programu,
których początkowe znaki są identyczne z całym parametrem argv[1] (należy się wcześniej upewnić,
czy w ogóle podano dodatkowe parametry wywołania programu). Wypisz znalezione wyrazy z
pominięciem tego powtarzającego się łańcucha. Efekt wywołania programu powinien być następujący:
Komenda uruchomienia: ./a.out raz dwa razem Razem "razy trzy"
Na ekranie wyświetla się:
Podano 6 parametrow wywolania programu:
--> argv[0] = ./a.out
--> argv[1] = raz
--> argv[2] = dwa
--> argv[3] = razem
--> argv[4] = Razem
--> argv[5] = razy trzy
Znaleziono argv[3], reszta: em
Znaleziono argv[5], reszta: y trzy
