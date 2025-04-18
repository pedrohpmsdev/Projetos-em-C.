#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int valores[10];
	int primos[10];
	int posi[10];
	int contdiv = 0;
	int i, j;
	int p = 0;
	
	for (i = 0; i < 10; i++){
		contdiv = 0;
		printf ("Digite o %do valor:", i + 1);
		scanf ("%d", &valores[i]);
		fflush (stdin);
		
		for (j = 1; j <= valores[i]; j++){
			if (valores[i] % j == 0){
				contdiv++;
			}
		}
		if (contdiv == 2 && valores[i] > 1){
			primos[p] = valores[i];
			posi[p] = i + 1;	
			p++;
		}
	}
	for (i = 0; i < p; i++){
		printf ("%d é primo e está na posição %d\n", primos[i], posi[i]);		
	}
}
