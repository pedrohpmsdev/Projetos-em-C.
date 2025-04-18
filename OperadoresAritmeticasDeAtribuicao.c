#include <stdio.h>

int main ()
{
	int dado = 10;
	printf ("Dado antes do incremento: %i.\n", dado);
	dado++;
	printf ("Dado depois do incremento: %i.\n", dado);
	dado--;
	printf ("Dado depois do decremento: %i.\n", dado);
	dado += 5;
	printf ("Dado depois do incremento: %i.\n", dado);
	dado-= 6;
	printf ("Dado depois do incremento: %i.\n", dado);
	dado*= 3;
	printf ("Dado depois do incremento multiplicativo: %i.\n", dado);
	dado/= 9;
	printf ("Dado depois do decremento divisivo: %i.\n", dado);
	return 0;
}
