#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float salmin = 0;
int kw = 0;
float custo = 0;
float cuskw = 0;
float pagdes = 0;

void energ (float salmin, float kw);

int main (){
	setlocale (LC_ALL, "Portuguese");
	puts ("DESPESAS ENERGÉTICAS");
	puts ("--------------------");
	puts ("Qual é o valor do salário mínimo?");
	scanf ("%f", &salmin);
	puts ("Quantos KW a residência consumiu no último mês?");
	scanf ("%d", &kw);
	energ (salmin, kw);
}

void energ (float salmin, float kw){
	cuskw = salmin/1000;
	custo = kw * (salmin/1000);
	pagdes = custo * 0.85;
	printf ("O valor pago por cada KW é de: %.2f\n", cuskw);
	printf ("O valor total pago pela residência é de: %.2f\n", custo);
	printf ("O valor pago caso houvesse um desconto de 15%%: %.2f\n", pagdes);
	
	
}
