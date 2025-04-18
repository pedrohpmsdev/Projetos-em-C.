#include <stdio.h>
int main (){
	int numero[20];
	int menor = 0;
	int n = 1;
	int maior = 0;
	int soma = 0;
	float media;
	do {
		printf ("Digite o %dº numero: ", n);
		scanf ("%d.", &numero[n]);
		if (n == 1){
			maior = menor = numero [n];
		}
		
		if (numero[n] > maior){
			maior = numero [n];
		}
		
		if (numero[n] < menor){
			menor = numero [n];
		}
		
		soma += numero[n];
		n++;
}
	while (n <= 20);
	media = soma / 20.0;
	printf ("O maior numero foi: %d.\n", maior);
	printf ("O menor numero foi: %d.\n", menor);
	printf ("A media dos numeros foi: %.2f.\n", media);
}
