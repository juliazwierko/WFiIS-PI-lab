//*
Skopiuj program z poprzedniego zadania i zoptymalizuj go: w funkcji rekurencyjnej
utwórz lokalną tablicę, w której będą przechowywane obliczone wartości elementów 
ciągu, tzn. Fk = tab[k]. Początkowo: tab[0] = 0, tab[1] = 1. Zmodyfikuj funkcję 
tak, aby obliczone wartości były przypisywane do tablicy i przy kolejnych wywołaniach 
funkcjidla tej samej liczby już tylko zwracane, a nie obliczane na nowo.
Uwaga: nie można używać zmiennych globalnych! Przykład uruchomienia programu:

> Obliczam Fib(5) = Fib(4) + Fib(3)
      > Obliczam Fib(4) = Fib(3) + Fib(2)
      > Obliczam Fib(3) = Fib(2) + Fib(1)
      > Obliczam Fib(2) = Fib(1) + Fib(0)
      > Zwracam Fib(1)
      > Zwracam Fib(0)
      > Zwracam Fib(1)
      > Zwracam Fib(2)
      > Zwracam Fib(3)
      Fib(5) = 5
*//
