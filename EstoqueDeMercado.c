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
	{01234, "Água", 100},
	{56789, "Pães de forma", 70},
	{12121, "Água de Coco", 40},
	{43210, "Amendoim Japonês", 25},
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
	puts ("Digite o código do produto:");
	scanf ("%d", &c.code);
	fflush (stdin);
	puts ("Digite a quantidade que você quer:");
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
			puts ("Quantidade em estoque não é suficiente. Caso queria corrigir a quantidade para uma possível, pressione [ENTER].");
			getchar ();
			system ("cls");
			continue;
		}
		q = 1;
		printf ("Compra realizada com sucesso! Agora sobraram %d unidades.", sub);
		}
	}
	if (encontrado == 0){
    puts ("Código inexistente. Pressione [ENTER] para reinserir o código.");
	getchar ();
	system ("cls");
}
}
while (encontrado == 0 || q == 0);
return 0;	
}


