#include <stdio.h>
#include <string.h>
#include <locale.h>
#define T 30

int main (){
	setlocale (LC_ALL, "Portuguese");
	char word[T];
	char initial = 'a';
	char initial2 = 'A';
	puts ("Digite uma palavra:");
	fgets (word, T, stdin);
	if (word[0] == initial || word[0] == initial2){
		puts (word);
		puts ("Essa palavra come�a com A!");
	}
	else {
		puts ("A palavra n�o pode ser impressa por n�o come�ar com 'A' ou 'a'.");
	}
	return 0;
}
