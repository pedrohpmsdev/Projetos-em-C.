#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int b, n;
void matriz (int m[3][3]); 

int main (){
	setlocale (LC_ALL, "Portuguese");
	int c[3][3] = {0};
	for (b = 0; b < 3; b++){
		for (n = 0; n < 3; n++){
			printf ("Digite o valor da 'linha %d, coluna %d' valor: ", b + 1, n + 1);
			scanf ("%d", &c[b][n]);
			fflush (stdin);
		}
		system ("cls");  
	}
	matriz (c);			
}

void matriz (int m[3][3]){
	for (b = 0; b < 3; b++){
		for (n = 0; n < 3; n++){
			printf (" %d ", m[b][n]);
		}
		puts ("");
	}
}
