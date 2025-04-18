#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 30

int main (){
	int i = 0;
	char palavra[N];
	setlocale (LC_ALL, "Portuguese");
	puts ("Escreva uma palavra: ");
	fgets (palavra, N, stdin);
	for (i = 0; i < 4; i++){
		printf ("%c ", palavra[i]);
	}
	return 0;
}
