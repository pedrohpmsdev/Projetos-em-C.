#include <stdio.h>
int main (){
	int c = 0;
	printf ("Exiba na tela todos os numeros impares entre 100 e 300:\n");
	for (c = 100; c <= 300;){
		if (c % 2 == 0){
			c++;
			continue;
		}
		printf ("%d ", c);
		c++;
	}
	return 0;
}
