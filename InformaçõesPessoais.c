#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

struct info{
	char nome[50];
	int idade;
	char endereco[80];
};
typedef struct info info;

int main(){
	setlocale (LC_ALL, "Portuguese");
	info i = {"", 0, ""};
	puts ("=---=---=---=---=---=");
	puts ("INFORMAÇÕES PESSOAIS");
	puts ("=---=---=---=---=---=");
	puts ("Qual o seu nome?");
	fgets (i.nome, 50, stdin);
	fflush (stdin);
	system ("cls");
	puts ("=---=---=---=---=---=");
	puts ("INFORMAÇÕES PESSOAIS");
	puts ("=---=---=---=---=---=");
	puts ("Quantos anos você tem?");
	scanf ("%d", &i.idade);
	fflush (stdin);
    system ("cls");
    puts ("=---=---=---=---=---=");
	puts ("INFORMAÇÕES PESSOAIS");
	puts ("=---=---=---=---=---=");
	puts ("Qual o seu endereço?");
	fgets (i.endereco, 80, stdin);
	fflush (stdin);
	system ("cls");
    puts ("=---=---=---=---=---=");
	puts ("INFORMAÇÕES PESSOAIS");
	puts ("=---=---=---=---=---=");
	puts ("SUAS INFORMAÇÕES:");
	printf ("NOME: %s", i.nome);
	printf ("IDADE: %d", i.idade);
	puts ("");
	printf ("ENDEREÇO: %s", i.endereco);
	return 0;
}
