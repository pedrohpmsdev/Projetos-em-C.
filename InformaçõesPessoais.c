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
	puts ("INFORMA��ES PESSOAIS");
	puts ("=---=---=---=---=---=");
	puts ("Qual o seu nome?");
	fgets (i.nome, 50, stdin);
	fflush (stdin);
	system ("cls");
	puts ("=---=---=---=---=---=");
	puts ("INFORMA��ES PESSOAIS");
	puts ("=---=---=---=---=---=");
	puts ("Quantos anos voc� tem?");
	scanf ("%d", &i.idade);
	fflush (stdin);
    system ("cls");
    puts ("=---=---=---=---=---=");
	puts ("INFORMA��ES PESSOAIS");
	puts ("=---=---=---=---=---=");
	puts ("Qual o seu endere�o?");
	fgets (i.endereco, 80, stdin);
	fflush (stdin);
	system ("cls");
    puts ("=---=---=---=---=---=");
	puts ("INFORMA��ES PESSOAIS");
	puts ("=---=---=---=---=---=");
	puts ("SUAS INFORMA��ES:");
	printf ("NOME: %s", i.nome);
	printf ("IDADE: %d", i.idade);
	puts ("");
	printf ("ENDERE�O: %s", i.endereco);
	return 0;
}
