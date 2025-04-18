#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float salmin = 0; 
float sal = 0;
int hrs = 0;
float final = 0;
float imp = 0;

void salario (int hrs, float salmin);

int main (){
	setlocale (LC_ALL, "Portuguese");
	puts ("RECEBIMENTO DE SALÁRIO");
	puts ("----------------------");
	puts ("Quantas horas o gestor trabalhou?");
	scanf ("%d", &hrs);
	fflush (stdin);
	puts ("Qual o salário mínimo da empresa?");
	scanf ("%f", &salmin);
	salario (hrs, salmin);
}

void salario (int hrs, float salmin){
	sal = (salmin/2) * hrs;
	imp = sal * 0.03;
	final = sal - imp; 
	printf ("O valor do salário bruto é de: %.2f\n", sal);
	printf ("O valor de impostos cobrados é de: %.2f\n", imp);
	printf ("O valor de salário líquido é de: %.2f\n", final);
}

