#include <stdio.h>
#include <string.h>
#include <locale.h>

float menor(float num1, float num2){
	if (num1 < num2){
		return num1;
	}
	else{
		return num2;
	}
}
int main (){
	setlocale (LC_ALL, "Portuguese");
	float x, y, c;
	printf ("Digite um número:\n");
	scanf ("%f", &x);
	fflush (stdin);
	printf ("Digite outro número:\n");
	scanf ("%f", &y);
	fflush (stdin);
	c = menor(x,y);
	printf ("O menor valor é o %.2f", c);
	return 0;
}
