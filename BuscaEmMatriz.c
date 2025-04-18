#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h> 

int main (int argc, char*argv[]){
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	int j;
	int v [3][3];
	int res = 0;
	int ver = 0;
	char rp;
	int vdd = 0;
	
	for (i = 0; i < 3; i++){
		puts ("=================");
		puts (" BUSCA EM MATRIZ");
		puts ("=================");
		for (j = 0; j < 3; j++){
			printf ("Digite o valor [%d, %d]:", i + 1, j + 1);
			scanf ("%d", &v[i][j]);
			fflush (stdin);
		}
		system ("cls");
	}
		puts ("=================");
		puts (" BUSCA EM MATRIZ");
		puts ("=================");
	puts ("Deseja verificar o valor de alguma matriz?");
	puts ("DIGITE [1] PARA NÃO");
	puts ("DIGITE [2] PARA SIM");
	scanf ("%d", &res);
	fflush (stdin);
	switch (res){
		case 1:
				system ("cls");
				puts ("=================");
				puts (" BUSCA EM MATRIZ");
				puts ("=================");
				puts ("Finalizando programa...");
				break;
		case 2: 
				do{
				vdd = 0;	
				system ("cls");
				puts ("=================");
				puts (" BUSCA EM MATRIZ");
				puts ("=================");
				puts ("Digite o valor que você quer verificar:");
				scanf ("%d", &ver);
			    fflush (stdin);
				for (i = 0; i < 3; i++){
					for (j = 0; j < 3; j++){
						if (ver == v[i][j]){
						printf ("%d existe e está na casa [%d, %d].\n", ver, i + 1, j + 1);
						vdd++;
						}
					}
				}
				if (vdd == 0){
					puts ("Esse valor não está em numa casa.");						
				}
				puts ("Quer verificar outro?");
				scanf ("%c", &rp);
				fflush (stdin);
				}
				while (rp == 'S');
			break; 
		}
		puts ("Finalizando o programa...");
		return 0;
}
