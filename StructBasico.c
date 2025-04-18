#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define N 30

struct ind {
		int idade;
		float peso;
		char nome[N];
	};
	
	typedef struct ind ind;

int main (){
	setlocale (LC_ALL, "Portuguese");
	ind dados = {0, 0.0, ""};
	
	puts ("Digite sua idade: ");
	scanf ("%d", &dados.idade);
	fflush (stdin);
	puts ("Digite seu peso: ");
	scanf ("%f", &dados.peso);
	fflush (stdin);
	puts ("Digite seu nome: ");
	fgets (dados.nome, N, stdin);
	fflush (stdin);
	
	printf ("Idade de %s -> %d", dados.nome, dados.idade);
	puts ("");
	printf ("Peso de %s -> %.2f", dados.nome, dados.peso);
	puts ("");
	puts ("Obrigado por responder nosso mini questionário. Até mais!");
	return 0;
}
