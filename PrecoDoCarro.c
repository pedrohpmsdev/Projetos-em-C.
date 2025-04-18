#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void lucro (float f, float p);
void imposto (float f, float tax, float imp);
void final (float total, float imp, float f);

int main (){
	setlocale (LC_ALL, "Portuguese");
	float f, l, c, tax, imp, tot, p;
	puts ("JOTINHA'S CARS'");
	puts ("---------------");
	puts ("Qual o preço do carro?");
	scanf ("%f", &f);
	fflush (stdin);
	puts ("Qual a porcentagem retirada para custos da empresa Jotinha's Cars com esse carro? (escreva em decimal)");
	scanf ("%f", &p);
	fflush (stdin);
	puts ("Qual a taxa de impostos para esse carro? (escreva em decimal)");
	scanf ("%f", &tax);
	fflush (stdin);
	
	lucro (f, p);
    imposto (f, tax, imp);
	final (tot, f, tax);
}

void lucro (float f, float p){
	float c = 0;
	float l = 0;
	c = f * p;
	l = f - c;
	printf ("Lucro do distribuidor: %.2f\n", l);
}

void imposto (float f, float tax, float imp){
	imp = f * tax;
	printf ("Valor acrescido em impostos: %.2f\n", imp);
}

void final (float tot, float f, float tax){
	tot = f * (tax + 1);
	printf ("Preço final do produto: %.2f\n", tot);
}
