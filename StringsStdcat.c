#include <stdio.h>
#include <string.h>
#include <locale.h>

#define T 30

int main (){
	setlocale (LC_ALL, "Portuguese");
	char part1[T];
    char part2[T]; 
	puts ("Vamos juntar as palavras? Diga uma palavra ou frase:");
	fgets (part1, T, stdin);
	puts ("Diga outra palavra ou frase:");
	part1[strcspn(part1, "\n")] = '\0';
	fgets (part2, T, stdin);
	strcat (part1, part2);
	puts (part1);
}
