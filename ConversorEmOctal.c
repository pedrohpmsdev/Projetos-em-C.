#include <stdio.h>
#include <math.h>
int main (){
	int num;
	printf ("Escreva um numero: ");
	scanf ("%d.\n", &num);
	printf ("Seu valor em Octal e: %o.\n", num);
    printf ("Seu valor em Hexadecimal e: %x.", num);
    return 0;
}
