#include <stdio.h>

int main (){
	int n = 0;
	int c = 1;
	printf ("Ola, vou digitar para voce 10 numeros inicialmente, mas você pode pedir para eu parar em algum valor. Diga quando quer que pare: ");
	scanf ("%d.\n", &n);
	for (c = 1; c <= 10;){
		if (c == 4){
			c++;
			continue;
		}
		printf ("%d.\n", c);
		if (c == n){
			break;
			return 0;
		}
		c++;
	}
}
