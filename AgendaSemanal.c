#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#define N 3

struct tempo {
	int hr;
	int min;
	int seg;
};
typedef struct tempo tempo;

struct data {
	int dia;
	int mes;
	int ano;
};
typedef struct data data;

struct comp {
	tempo time;
	data dt;
	char texto[30];
}; 
typedef struct comp comp;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	comp c[N] = {0};
	
	puts ("Qual o nome do seu compromisso? ");
	fgets (c[0].texto, 30, stdin);
	fflush (stdin);
	system ("cls");
    puts ("=-=-=-=-=-=-=-=-=-=");
	puts ("AGENDA SEMANAL 2025");
	puts ("=-=-=-=-=-=-=-=-=-=");
	puts ("Qual o hórario do seu compromisso? ");
	printf ("HORAS:");
	scanf ("%d", &c[0].time.hr);
	printf ("MINUTOS:");
	scanf ("%d", &c[0].time.min);
	printf ("SEGUNDOS:");
	scanf ("%d", &c[0].time.seg);
	fflush (stdin);	
	system ("cls");
	puts ("=-=-=-=-=-=-=-=-=-=");
	puts ("AGENDA SEMANAL 2025");
	puts ("=-=-=-=-=-=-=-=-=-=");
	puts ("Qual a data do seu compromisso? ");
	printf ("DIA:");
	scanf ("%d", &c[0].dt.dia);
	printf ("MÊS:");
	scanf ("%d", &c[0].dt.mes);
	printf ("ANO:");
	scanf ("%d", &c[0].dt.ano);
	fflush (stdin);	
	system ("cls");
	puts ("=-=-=-=-=-=-=-=-=-=");
	puts ("AGENDA SEMANAL 2025");
	puts ("=-=-=-=-=-=-=-=-=-=");
	printf ("Aqui está o status do compromisso: %s", c[0].texto);
	puts ("");
	printf ("HORÁRIO: %02d:%02d:%02d", c[0].time.hr, c[0].time.min, c[0].time.seg);
	puts ("");
	printf ("DATA: %02d/%02d/%04d", c[0].dt.dia, c[0].dt.mes, c[0].dt.ano);
	return 0;
}

