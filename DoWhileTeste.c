#include <stdio.h>
int main (){
	int n1, n2, soma = 0;
	do {
	printf ("Escreva um numero maior que 0 para somar a outro valor menor que 0: ");
	scanf ("%d.\n", &n1);
	system("cls");
}	
	while (n1 <= 0);
	do {
		printf ("Escreva o numero menor que 0: ");
	scanf ("%d.\n", &n2);
	system("cls");
	}	
	while (n2 >= 0);
	soma = n1 + n2;
	printf ("%d + %d = %d.", n1, n2, soma);
	return 0;
}
