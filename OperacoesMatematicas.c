#include <stdio.h>

int main() 
{
	int A, B, soma, sub, mult, div, divint;
	
	printf ("Informe um valor A: ");
	scanf ("%d.\n", &A);
	printf ("Informe um valor B: ");
	scanf ("%d.\n", &B);
	soma = (A + B);
 	sub = (A - B);
	mult = (A * B);
	div = (A / B);
	divint = (A % B);
	printf ("RESULTADOS:\n");
	printf ("SOMA: %d;\n", soma);
	printf ("SUBTRACAO: %d;\n", sub);
	printf ("MULTIPLICACAO: %d;\n", mult);
	printf ("DIVISAO: %d.\n", div);
	printf ("DIVISAO INTEIRA: %d.\n", divint);
	return 0;
}
 
