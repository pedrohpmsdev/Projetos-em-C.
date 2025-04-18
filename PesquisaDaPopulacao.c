#include <stdio.h>
int main (){
	float salario[5];
	int filho[5];
	int i = 0;
	float somas = 0;
	float somaf = 0;
	float medias = 0;
	float mediaf = 0;
	float maiors = 0;
	float perc = 0;
	int cont = 0;
	
	printf ("=================================\n");
	printf (" PESQUISA DE STATUS DA POPULACAO\n");
	printf ("=================================\n");

	
	for (i = 0; i < 5; i++){
		printf ("Qual o salario da pessoa %d?\n", i + 1);
		scanf (" %f", &salario[i]);
		
	    printf ("Quantos filhos a pessoa %d tem?\n", i + 1);
		scanf (" %d", &filho[i]); 
		system ("cls");
		somas += salario[i];
		somaf += filho[i];
		
		if (salario [i] > maiors){
			maiors = salario[i];
		}
		if (salario[i] <= 150){
			cont++;
		}
		
	}
	medias = somas / 5;
	mediaf = somaf / 5;
	perc = (cont * 100) / 5;
	printf ("A media salarial da populacao e de %.2f\n", medias);
	printf ("A media de filhos da populacao e de %.2f\n", mediaf);
	printf ("O maior salario da populacao e de %.2f\n", maiors);
	printf ("A porcentagem de pessoas com salario ate 150 e de %.2f\n", perc);
	return 0;
}
