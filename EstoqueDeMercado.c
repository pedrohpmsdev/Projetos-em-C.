#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#define N 5

struct estoque {
	int code;
	char nome [30];
	int quant;
};

typedef struct estoque estq;

int main(){
	setlocale (LC_ALL, "Portuguese");
	estq produtos[N] = {
	{01234, "�gua", 100},
	{56789, "P�es de forma", 70},
	{12121, "�gua de Coco", 40},
	{43210, "Amendoim Japon�s", 25},
	{00001, "Ovos", 150}
	};
	estq c = {0};
	int i = 0;
	int q = 0;
	int encontrado = 0;
	do{
    encontrado = 0;
	puts ("ESTOQUE DO MERCADO TIO BILA");
	puts ("===========================");
	puts ("Digite o c�digo do produto:");
	scanf ("%d", &c.code);
	fflush (stdin);
	puts ("Digite a quantidade que voc� quer:");
	scanf ("%d", &c.quant);
	fflush (stdin);
	for (i = 0; i < 5; i++){
	if (c.code == produtos[i].code){
		encontrado = 1;
		int sub = 0;
		sub = produtos[i].quant - c.quant; 
		printf ("%05d = %s\n", c.code, produtos[i].nome);
		printf ("QUANTIDADE EM ESTOQUE: %d\n", produtos[i].quant);
		if (c.quant > produtos[i].quant){
			q = 0;
			puts ("Quantidade em estoque n�o � suficiente. Caso queria corrigir a quantidade para uma poss�vel, pressione [ENTER].");
			getchar ();
			system ("cls");
			continue;
		}
		q = 1;
		printf ("Compra realizada com sucesso! Agora sobraram %d unidades.", sub);
		}
	}
	if (encontrado == 0){
    puts ("C�digo inexistente. Pressione [ENTER] para reinserir o c�digo.");
	getchar ();
	system ("cls");
}
}
while (encontrado == 0 || q == 0);
return 0;	
}


