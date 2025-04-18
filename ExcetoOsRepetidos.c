#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 10

int main (){
	setlocale (LC_ALL, "Portuguese");
	int a[N];
	int b[N];
	int i, j;
	int c = 0;
	char res;
	
	for (i = 0; i < N; i++){
		puts ("=-=-=-=-=-=-=-=-=-=-==-=-=-=");
		puts (" DETONADOR DE HOMOGENEIDADE ");
		puts ("=-=-=-=-=-=-=-=-=-=-==-=-=-=");
		printf ("Escolha o %do valor: ", i + 1);
		scanf ("%d", &a[i]);
		getchar ();
		system ("cls");
	}
	
	for (i = 0; i < N; i++){
		int repetido = 0;
		for (j = 0; j < i; j++){
			if (a[i] == a[j]){
				repetido = 1;
				break;
			}
		}
			if (repetido == 0){
				b[c] = a[i];
				c++;
			}
	}

	puts ("Os valores que você escolheu foram:");
		for (i = 0; i < N; i++){
		printf ("%d ", a[i]);
	}
	puts ("");
	
	do{
	puts ("Você quer eliminar os valores repetidos? [S]/[N]");
	scanf ("%c", &res);
	getchar ();
	puts ("");
	
	if (res == 'S'){
		for (i = 0; i < c; i++){
			printf ("%d ", b[i]);
        } 
	}
	else if (res == 'N'){
		puts ("Finalizando o programa...");
		return 0;
	}
	else {
		puts ("Resposta inválida. Pressione [ENTER] para continuar.");
		getchar();
		system ("cls");	
	}
	}
	while (res != 'N' && res != 'S');
	return 0;	
	
}
