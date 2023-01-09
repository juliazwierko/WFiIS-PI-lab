Napisz program z tablicą zadeklarowaną w main()
double tab[] = {50.37, -40.60, -18.36, 17.37, -3.19, -25.93, 69.91, -83.37, -39.35, 59.69,
-9.00, -23.82, 30.32, -19.17, -86.67, 27.08, 63.64, 41.79, -43.38, 6.63, -90.99, 22.54,
98.05, 19.41, 1.02, -78.41, -98.57, 8.02, -51.79, 56.42, -83.96, 97.58, -83.19, -3.33,
15.96, 12.62, 69.75, -13.13, 28.25, -68.60, -52.44, -79.75, 6.58, 76.88, 0.09, 18.91, 4.95,
-35.28, -38.30, 60.57};
oraz funkcją zgodną z prototypem (należy go uzupełnić według własnego pomysłu):
... oblicz(double *p, double *k, ...);
Funkcja powinna obliczać i przekazywać do main() sumę, iloczyn i średnią elementów tablicy
zaczynając od elementu, na który wskazuje p i kończąc na elemencie, na który wskazuje k. W main()
wywołaj tę funkcję, przekazując do niej adresy elementów o indeksach 10 oraz 20. W main() wypisz
obliczoną przez funkcję sumę, iloczyn i średnią. Efekt wywołania programu powinien być
następujący:

Suma = -103.57, iloczyn = 20354119325664784.00, srednia = -9.42
