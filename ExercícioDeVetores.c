#include <stdio.h>
#include <locale.h>
#define N 6

int main (){
	setlocale (LC_ALL, "Portuguese");
	int x = 0;
	int i = 0;
	int soma = 0;
	int a[6] = {1, 0, 5, -2, -5, 7};
	
	soma = a[0] + a[1] + a[5];
	printf ("A soma dos valores A[0], A[1] e A[5] é igual a %d\n", soma);
	a[4] = 100;
	printf ("O vetor quatro adiquiriu o valor de %d\n", a[4]);
	puts ("Os valores que você adotou para o vetor A:\n");
	for (i = 0; i < N; i++){
	printf ("%d\n", a[i]);		
}
}
