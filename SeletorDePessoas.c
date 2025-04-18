#include <stdio.h>
#include <string.h>
#include <locale.h>
#define T 20

int main (){
	setlocale (LC_ALL, "Portuguese");
    int i = 0;
	char nome[T];
	int idade = 0;
	char sexo;
	for (i = 0; i < 5;i++){
    puts ("");
	puts ("SELETOR DE PESSOAS");
	puts ("=-=-=-=-=-=-=-=-=-=");
	printf ("\n");
	puts ("Informe seu nome: ");
	fgets (nome, T, stdin);
	nome [strcspn (nome, "\n")] = '\0';
	puts ("Informe seu sexo: [M]/[F]");
	scanf ("%c", &sexo);
	while (getchar() != '\n');
	printf ("Informe sua idade: ");
	scanf ("%d", &idade);
	while (getchar() != '\n');
	
	if (sexo == 'F' && idade < 25){
		printf ("%s ", nome);
		printf ("ACEITO.\n");
	
	}
	else{
		printf ("%s ", nome);
		printf ("NÃO ACEITO.\n");
	}
	puts("Pressione ENTER para continuar...");
    getchar();
    system ("cls");
	}
	puts ("\n SELEÇÃO FINALIZADA.");
	puts ("=-=-=-=-=-=-=-=-=-=-=");
	
	return 0;
}

