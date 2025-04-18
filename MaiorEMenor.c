#include <stdio.h>
#include <locale.h>
#define N 10

int main (){
	setlocale (LC_ALL, "Portuguese");
	int maior = 0;
	int menor = 0;
	int i = 0;
	int a[N];
	for (i = 0; i < N; i++){
		puts ("=-=-=-=-=-=-=-=");
		puts (" MAIOR E MENOR ");
		puts ("=-=-=-=-=-=-=-=");
		printf ("Escolha o %do valor:", i + 1);
		scanf ("%d", &a[i]);
		if (i == 0){
			menor = a[0];
			maior = a[0];
		}
		if (a[i] > maior){
			maior = a[i];
		}
		if (a[i] < menor){
			menor = a[i];
		}
		getchar ();
		system ("cls");
	}
	printf ("MENOR VALOR: %d;\n", menor);
	printf ("MAIOR VALOR: %d.", maior);
	return 0;
}

