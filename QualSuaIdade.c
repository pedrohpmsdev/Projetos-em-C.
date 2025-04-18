#include <stdio.h>
int main ()
{
	int idade;
	int nasci;
	int atual;
	 
	printf ("=========================");
	printf ("  DESCOBRIDOR DE IDADES  ");
	printf ("=========================");
	printf ("\n");
    printf ("Informe seu ano de nascimento:");
	scanf ("%d", &nasci);
	printf ("Informe o ano atual:");
	scanf ("%d", &atual);
	idade = (atual - nasci);
	printf ("Sua idade eh igual a: %d.\n", idade);
	return 0;
}
