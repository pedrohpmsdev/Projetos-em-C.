#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h> 

struct dados{
	char nome [50];
	int idade;
	float peso;
	float altura;	
};

typedef struct dados dados;

int main (int argc, char*argv[]){
	int i = 0;
	setlocale (LC_ALL, "Portuguese");
	dados info[4] = {"", 0, 0, 0};
	
	for (i = 0; i < 3; i++){
		puts ("==================");
		puts (" QUESTIONÁRIO TOP");
		puts ("==================");
		printf ("Digite o nome da %do pessoa:", i + 1);
		scanf ("%s", &info[i].nome);
		fflush (stdin);
		printf ("Digite o idade da %do pessoa:", i + 1);
		scanf ("%d", &info[i].idade);
		fflush (stdin);
		printf ("Digite o peso da %do pessoa:", i + 1);
		scanf ("%f", &info[i].peso);
		fflush (stdin);
		printf ("Digite a altura da %do pessoa:", i + 1);
		scanf ("%f", &info[i].altura);
		fflush (stdin);
		system ("cls");
	}
	puts ("==================");
	puts (" QUESTIONÁRIO TOP");
	puts ("==================");
	printf ("NOME DA 1o PESSOA: %s\n", info[0].nome);
	printf ("IDADE DA 1o PESSOA: %d\n", info[0].idade);	
	printf ("PESO DA 3o PESSOA: %.2f\n", info[2].peso);
	printf ("ALTURA DA 3o PESSOA: %.2f\n", info[2].altura);
	return 0;
}
	
