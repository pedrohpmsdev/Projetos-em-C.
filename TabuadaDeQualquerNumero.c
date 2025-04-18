#include <stdio.h>
int main (){
	int c;
	int d, prd = 0;
	printf ("Escolha a tabuada de um numero qualquer inteiro: ");
	scanf ("%d.\n", &d);
	for (c = 1; c <=10; c++){
		prd = c * d;
		printf ("%d X %d = %d.\n", c, d, prd);
	}
	return 0;
}
