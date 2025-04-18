#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N 20

int main (){
	setlocale (LC_ALL, "Portuguese");
	int l = 0;
	int c = 0;
	int x = 0;
	int matriz [3][3];
	for (l = 0; l < 3; l++){
		puts ("=-=-=-=-=-=");		
		puts (" MATRIZES ");
		puts ("=-=-=-=-=-=\n");	
		for (c = 0; c < 3; c++){
		printf ("Digite o %do número:", x + 1);
		scanf ("%d", &matriz[l][c]);	
		while (getchar() != '\n');
		x++;
		}
		system ("cls");
	}
	puts ("=-=-=-=-=-=");		
	puts (" MATRIZES ");
	puts ("=-=-=-=-=-=\n");	
	
	printf ("Sua matriz ficou assim:\n");
	for (l = 0; l < 3; l++){
		for (c = 0; c < 3; c++){
		printf ("%d ", matriz[l][c]);
		}
		puts ("");
    }
	return 0;
}

