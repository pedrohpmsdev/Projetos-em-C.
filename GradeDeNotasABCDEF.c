#include <stdio.h>
int main (){
	int nota = 0;
	printf ("Selecione a letra que lhe direi a grade da nota relacionada a ela:\n");
	printf ("[1] A;\n");
	printf ("[2] B;\n");
	printf ("[3] C;\n");
	printf ("[4] D;\n");
	printf ("[5] E;\n");
	printf ("[6] F.\n");
	scanf ("%d.\n", &nota);
		switch (nota){
			case 1: 
				printf ("Entre 10 e 9.");
			break;
			case 2: 
				printf ("Entre 8.9 e 8.");
			break;
			case 3: 
				printf ("Entre 7.9 e 7.");
			break;
			case 4: 
				printf ("Entre 6.9 e 6.");
			break;
			case 5: 
				printf ("Entre 5.9 e 5.");
			break;
			case 6: 
				printf ("Entre 4.9 e 0.");
			break;
			default:
				printf ("Opcao invalida. Reinicie o programa.");
			break;
		}
		return 0;
}

