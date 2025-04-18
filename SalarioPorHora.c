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
	puts ("RECEBIMENTO DE SAL�RIO");
	puts ("----------------------");
	puts ("Quantas horas o gestor trabalhou?");
	scanf ("%d", &hrs);
	fflush (stdin);
	puts ("Qual o sal�rio m�nimo da empresa?");
	scanf ("%f", &salmin);
	salario (hrs, salmin);
}

void salario (int hrs, float salmin){
	sal = (salmin/2) * hrs;
	imp = sal * 0.03;
	final = sal - imp; 
	printf ("O valor do sal�rio bruto � de: %.2f\n", sal);
	printf ("O valor de impostos cobrados � de: %.2f\n", imp);
	printf ("O valor de sal�rio l�quido � de: %.2f\n", final);
}

