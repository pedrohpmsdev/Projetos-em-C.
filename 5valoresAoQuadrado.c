#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N 5

int main (){
	int a[5];
	int b[5];
	int i = 0;
	
	for (i = 0; i < N; i++){
	puts ("=-=-=-=-=-=-=-=-=-=-=");
	puts (" VETORES AO QUADRADO ");
	puts ("=-=-=-=-=-=-=-=-=-=-=");
	printf ("Escolha o %do valor:", i + 1);
	scanf ("%d", &a[i]);
	b[i] = a[i]*a[i];
	getchar ();
	system ("cls");
	}
	printf ("Os primeiros 5 valores escolhidos foram:");
	for (i = 0; i < N; i++){
		printf ("%d ", a[i]);
	}
	puts ("");
	printf ("Os 5 valores escolhidos ao quadrado foram:");
	for (i = 0; i < N; i++){
		printf ("%d ", b[i]);
	}
	return 0;
}
