#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define N 30
 struct ind{
 	float peso;
 	int idade;
 	char nome[50];
 };
 	typedef struct ind ind;
 	
int main (){
	setlocale (LC_ALL, "Portuguese");
	ind dados[3] = {0, 0.0, ""};
	int i = 0;
	for (i = 0; i < 3; i++){
		puts ("=-=-=-=-=-=-=-=-=-=-=");
		puts (" QUESTIONÁRIO BÁSICO ");
		puts ("=-=-=-=-=-=-=-=-=-=-=");
		puts ("Qual o seu nome? ");
		fgets (dados[i].nome, N, stdin);
		fflush (stdin);
		puts ("Qual sua idade? ");
		scanf ("%d", &dados[i].idade); 
		fflush (stdin);
		puts ("Qual o seu peso? ");
		scanf ("%f", &dados[i].peso);
		fflush (stdin);
		system ("cls");
	}
	for (i = 0; i < 3; i++){
		puts ("=-=-=-=-=-=-=-=-=-=-=");
		printf ("Dados de %s", dados[i].nome);
		printf ("idade: %d", dados[i].idade);
		puts ("");
		printf ("PESO: %.2f", dados[i].peso);
		puts ("");
}
}
