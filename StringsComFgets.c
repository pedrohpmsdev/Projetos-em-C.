#include <stdio.h>
#include <string.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	char frase[50];
	char frase2[50];
	printf ("Digite uma frase: ");
	fgets (frase, 50, stdin);
	frase[strcspn(frase, "\n")] = '\0';
	puts ("A frase digitada foi:");
	puts (frase);
	printf ("\n");
	printf ("Digite outra frase: ");
	fgets (frase2, 50, stdin);
	puts ("A outra frase digitada foi:");
	puts (frase2);
	printf ("\n");
	puts ("Agora vamos igualar as frases:");
	strcpy (frase2, frase);
	puts ("A primeira frase ainda é:");
	puts (frase);
	printf ("\n");
	puts("E a segunda frase virou:");
	puts (frase2);
	return 0;
}
