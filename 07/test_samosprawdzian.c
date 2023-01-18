int i = 0, k = 0;
	do
	{
		i += --k;
		printf("i = %d, k = %d, ", i, k);
	} while (k >= -2);
	printf("KONIEC: i = %d, k = %d\n", i, k);

i = -1, k = -1, i = -3, k = -2, i = -6, k = -3, KONIEC: i = -6, k = -3
  
  
  int a = -1, b = 1, c = 2, d;
	d = ++a && --b && c - 1;
	printf("a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d);

a = 0, b = 1, c = 2, d = 0
  
  
  int a = 0, b = -5;
	printf("%d\n", !a + !!b);

2
