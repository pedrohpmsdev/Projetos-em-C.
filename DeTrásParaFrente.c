#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 35

int main (){
	setlocale (LC_ALL, "Portuguese");
	int i = 0;
	char t = 0;
	char palavra[N];
	puts ("Escreva uma palavra qualquer:");
	fgets (palavra, N, stdin);
	t = strlen (palavra);
	for (i = t; i >= 0; i--){
		printf ("%c", palavra[i]);
	}
	printf (". A palavra escolhida fica assim de trás para frente: %s", palavra);
	return 0;
}
	
