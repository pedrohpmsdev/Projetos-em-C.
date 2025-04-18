#include <stdio.h>
int main (){
	
	int num1, num2, op, soma, sub, mult, div = 0;
	
	printf ("=======================\n");
	printf ("  CALCULADORA SIMPLES  \n");
	printf ("=======================\n");
	printf ("Escolha um valor: ");
	scanf ("%d.\n", &num1);
	printf ("Escolha outro valor: ");
	scanf ("%d.\n", &num2);
	printf ("Escolha uma operacao matematica:\n ");
	printf ("[1] ADICAO;\n");
	printf (" [2] SUBTRACAO;\n");
	printf (" [3] MULTIPLICACAO;\n");
	printf (" [4] DIVISAO.\n");
	scanf ("%d.\n", &op);
	printf ("");
		switch (op){
			case 1: 
				soma = num1 + num2;
				printf (" %d + %d = %d.\n", num1, num2, soma);
			break;
			case 2: 
				sub = num1 - num2;
				printf (" %d - %d = %d.\n", num1, num2, sub);
			break;
			case 3:
				mult = num1 * num2;
			    printf (" %d X %d = %d.\n", num1, num2, mult);
			break;
			case 4:
				div = num1 / num2;
				printf (" %d / %d = %d.\n", num1, num2, div);
			break;
			default:
				printf (" Opcao invalida. Reinicie o programa.");
			break;		 	  	
		}
	
}
