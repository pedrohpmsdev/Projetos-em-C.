#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void conta(int u, int d, int t);

int main (){
	setlocale (LC_ALL, "Portuguese");
	int b, e, r = 0;
	char res;
	do{
	puts (" POTÊNCIA NA PRÁTICA");
	puts ("=-=-=-=-=-=-=-=-=-=-=");
	puts ("");
	puts ("Digite um valor para ser a base:");
	scanf ("%d", &b);
	fflush (stdin);
	do{
	puts ("Digite um valor para ser o expoente (lembrando que 'e' > 0 e inteiro):");
	scanf ("%d", &e);
	fflush (stdin);
	if (e <= 0){
		puts ("Você digitou um expoente inválido, pressione [ENTER] para inserir outro valor.");
		getchar();
		continue;
	}
	}while (e <= 0);
	conta(b, e, r);
	
	do{
	puts (" Quer continuar? [S]/[N]");
	scanf ("%c", &res);
	fflush (stdin);
	if (res == 'S'){
		system ("cls");
		continue;
	}
	else if (res == 'N'){
		puts ("Ok! Obrigado por utilizar o nosso site!");
		return 0;
	}
	else {
		puts ("Resposta inválida. Pressione [ENTER] para responder novamente.");
		getchar ();		
	}
 	}while (res != 'N' && res != 'S');
	
	}while (res != 'N');
	
}

	void conta(int u, int d, int t){
		t = pow(u, d);
		printf ("O resultado de %d elevado a %d é igual a %d.", u, d, t);		
	}
