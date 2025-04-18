#include <stdio.h>
int main (){
	int numbers[10];
	int i = 0;
	float soma = 0;
	float media = 0;
    	for (i = 0; i < 10; i++){
			printf ("Escolha o %d numero: ", i + 1);
    		scanf ("%d.\n", &numbers[i]);
			soma += numbers[i];
			}			
		media = soma / 10;
		printf ("A media desses numeros e igual a %.2f.", media);
		return 0;
		
}

