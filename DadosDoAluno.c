#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

struct colege {
	char nome[50];
	int numMat;
	char curso[50];
};
typedef struct colege colege;

int main(){
	setlocale (LC_ALL, "Portuguese");
	colege aluno [5] = {0};
	int i = 0;
	for (i = 0; i < 5; i++){
		puts ("=---=---=---=---=---=");
		puts (" DADOS DO ALUNO (DDA)");		
		puts ("=---=---=---=---=---=");		
		printf ("Nome do aluno %d ->", i + 1);
		fgets (aluno[i].nome, 50, stdin);
		fflush (stdin);
		printf ("Número de matrícula do aluno %d ->", i + 1);
		scanf ("%d", &aluno[i].numMat);
		fflush (stdin);
		printf ("Curso do aluno %d ->", i + 1);
		fgets (aluno[i].curso, 50, stdin);
		fflush (stdin);
		getchar ();
		system ("cls");
	}
	for (i = 0; i < 5; i++){
	puts ("=---=---=---=---=---=");
	puts (" DADOS DO ALUNO (DDA)");		
	puts ("=---=---=---=---=---=");		
	printf ("INFORMAÇÕES DO ALUNO %d \n", i + 1);
	printf ("NOME -> %s", aluno[i].nome);
	printf ("MATRÍCULA -> %d", aluno[i].numMat);
	puts ("");
	printf ("CURSO -> %s", aluno[i].curso);
	getchar ();
	system ("cls");
	}
	return 0;
	
}
