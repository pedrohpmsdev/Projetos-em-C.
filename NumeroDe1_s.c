#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 30

int main (){
	setlocale (LC_ALL, "Portuguese");
	int i = 0;
	int t = 0;
    int cont = 0;
	char string[N];
	puts ("Escreva uma string: ");
	fgets (string, N, stdin);
	t = strlen (string);
	for (i = 0; i < t; i++){
		if (string[i] == '1'){
			cont++;	
		}
	}
	printf ("A string possui %d números 1.", cont);
	return 0;
}
