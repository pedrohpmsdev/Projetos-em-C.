#include <stdio.h>
#include <string.h>
#include <locale.h>
#define T 30

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	char palavra1[T];
	char palavra2[T];
	char palavra3[T] = {"SimbiontePEU"};
	int sbt = 0;
	puts ("Digite uma palavra:");
	fgets (palavra1, T, stdin); 
	palavra1[strcspn(palavra1, "\n")] = '\0';
	puts ("Digite uma palavra:");
	fgets (palavra2, T ,stdin);
	palavra1[strcspn(palavra1, "\n")] = '\0';
	puts ("\n");
	puts ("INVERSÃO...");
	strcpy (palavra1, palavra2);
	puts (palavra1);
	puts ("\n");
	puts ("ATAQUE DO SIMBIONTE PEU! JUNÇÃO...");
	palavra1[strcspn(palavra1, "\n")] = '\0';
	strcat (palavra1, palavra3);
	puts (palavra1);
	puts ("\n");
	puts ("CONTANDO...");
	sbt = strlen (palavra1);
	printf ("Tamanho do texto: %d", sbt);
	puts ("\n");
    for (sbt = 0; sbt < strlen(palavra1); sbt++){
    	printf ("%c\n", palavra1[sbt]);
	}
}
	
	
	
