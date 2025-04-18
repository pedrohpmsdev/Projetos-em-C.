#include <stdio.h>
int main (){
	int c = 0;
	int cont = 1;
	printf ("==========================================\n");
	printf ("           CONTADOR SUPREMO 100           \n");
	printf ("==========================================\n");
	printf ("Ola! Eu sou o contador de 1 a 100! Voce pode escolher 3 formas de contagem:\n");
	printf ("[1] CONTAGEM SIMPLES DE 1 a 100;\n");
	printf ("[2] CONTAGEM APENAS COM NUMEROS PARES DE 1 a 100;\n");
	printf ("[3] CONTAGEM APENAS COM NUMEROS IMPARES DE 1 a 100.\n");
	scanf ("%d.\n", &c);
	
	switch (c){
		case 1:
			for (cont = 1; cont <= 100;){
				printf ("%d ", cont);
				cont++;
				}
				break;
		case 2:
			for (cont = 1; cont <= 100;){
				if (cont % 2 == 1 || cont == 1){
				cont++;
				continue;
				
 		   	}
 			printf ("%d ", cont);
 			cont++;
			}
			break;
		case 3: 
			for (cont = 1; cont <= 100;){
				if (cont % 2 == 0){
				cont++;
				continue;
		    	
	    	}
 			printf ("%d ", cont);
 			cont++;
    		}
    		break;
    	default:
    		printf ("Escolha invalida. Reinicie o programa.");
    		break;
    		
	}
	return 0;
}
