#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int matriz [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int l = 0;
	int c = 0;
	
	for (l = 0; l < 3; l++){
		for (c = 0; c < 3; c++){
			printf ("%d ", matriz[l][c]);
			}
			printf ("\n");	
		}
	}

