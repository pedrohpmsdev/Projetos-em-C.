#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
	int i, j;
	int v = 0;
	void divisores ();

	int main (){
		setlocale (LC_ALL, "Portuguese");
		for (j = 0; j < 5; j++){
			puts (" SOMADOR DE DIVISORES");
			puts ("|-=-=-=-=-=-=-=-=-=-=-|");
			printf ("Digite o %d valor: ", j + 1);
			scanf ("%d", &v);
			fflush (stdin);
			divisores ();
			getchar ();
			system ("cls");
		}
		return 0;
	}

	void divisores (){
		int divisor[100] = {0};
		int qtd = 0;
		int soma = 0;
		for (i = 1; i < v; i++){
			if (v % i == 0 && v > 1){
				soma += i;
				divisor[qtd] = i;
				qtd++;
			}
		}
		for (i = 0; i < qtd; i++){
			printf ("%d", divisor[i]);
			if (i < (qtd - 1)){
				printf (" + ");
			} 
		}
		
		printf (" = %d", soma);
		puts ("");
	}	
