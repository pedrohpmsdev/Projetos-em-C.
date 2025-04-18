#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 10

int main (){
	setlocale (LC_ALL, "Portuguese");
	int a[N];
	int b[N];
	int i = 0;
	int c = 0;
	char res;
	for (i = 0; i < N; i++){
		puts ("=-=-=-=-=-=-=-=-=-=-=-=");
		puts (" SEPARADOR DE ÍMPARES  ");
		puts ("=-=-=-=-=-=-=-=-=-=-=-=");	
		printf ("Digite o %do valor: ", i + 1);
		scanf ("%d", &a[i]);
		fflush (stdin);
		system ("cls");	
	}
	
	for (i = 0; i < N; i++){
		if (a[i] % 2 == 1){
			b[c] = a[i];
			c++;
		}
	}
	
	do{
	puts ("Os valores que você digitou foram: ");	
	for (i = 0; i < N; i++){
		printf ("% d", a[i]);
	}
	puts (". Você quer separar os valores ímpares? [S]/[N]\n");
	scanf ("%c", &res);
	fflush (stdin);
	
	if (res == 'S'){
		for (i = 0; i < c; i++){
			printf ("%d ", b[i]);
	}
    }
	else if(res == 'N'){
		system ("cls");
		puts ("Finalizando o programa...");
		puts ("Programa finalizado!");
		return 0;
	}
	else {
		puts ("Resposta inválida. Pressione [ENTER] para continuar.");
		getchar();
		system ("cls");
	}
	}
	while (res != 'S' && res != 'N');
	return 0;
}
