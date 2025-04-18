#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N 10

int main (){
	setlocale (LC_ALL, "Portuguese");
	int i = 0;
	int a[N];
	char res;
	
	for (i = 0; i < N; i++){
	puts ("=-=-=-=-=-=-=-=-=-=-=");
	puts ("  ZERO NEGATIVADADE  ");
	puts ("=-=-=-=-=-=-=-=-=-=-=");
	printf ("Digite o %do número: ", i + 1);
	scanf ("%d", &a[i]);
	fflush (stdin);
	system ("cls");
	}
	
	do{
	printf ("Os valores que você digitou são: ");
	for (i = 0; i < N; i++){
	printf (" %d", a[i]);
    }
    
	puts (". Quer eliminar os valores negativos? [S]/[N]\n");
	scanf ("%c", &res);
	fflush (stdin);
	
	if (res == 'S'){
	for (i = 0; i < N; i++){
		if (a[i] < 0){
			a[i] = 0;
		}
		printf ("%d ", a[i]);
	}
	}
	else if (res == 'N'){
		puts ("Finalizando o programa...");
		return 0;
	}
	else {
		puts ("Resposta inválida. Pressione [ENTER] para reiniciar.");
		getchar();
		system ("cls");
	}
    }
	while (res != 'N' && res != 'S');   
    return 0;
}
