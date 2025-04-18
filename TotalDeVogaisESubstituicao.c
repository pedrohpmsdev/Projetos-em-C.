#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 30

int main (){
	setlocale (LC_ALL, "Portuguese");
	int i = 0;
    int t = 0;
	int cont = 0;
	char car;
	char word[N];
	puts ("Digite uma palavra:");
	fgets (word, N, stdin);
	fflush;
	printf ("A palavra que você escolheu foi: %s", word);
	puts ("Escolha um caractere que substitua todas as vogais: ");
	scanf (" %c", &car);
	fflush;
	t = strlen (word);
	for (i = 0; i < t; i++){
		if (word[i] == 'A' || word[i] == 'a' || word[i] == 'E' || word[i] == 'e' || word[i] == 'I' || word[i] == 'i' || word[i] == 'O' || word[i] == 'o' || word[i] == 'U' || word[i] == 'u'){
			cont++;
			word[i] = car;
		}
	}
	printf ("A palavra que você escolheu possui %d vogais.\n", cont);
	printf ("A palavra que você escolheu, MODIFICADA, foi: %s", word);
	return 0;
}
