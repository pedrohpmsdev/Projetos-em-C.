#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main (){
	void dist (int a ,int b,int c,int d);
	setlocale (LC_ALL, "Portuguese");
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	printf ("Digite um valor para x1:");
	scanf ("%d", &x1);
	fflush (stdin);
	printf ("Digite um valor para y1:");
	scanf ("%d", &y1);
	fflush (stdin);
	printf ("Digite um valor para x2:");
	scanf ("%d", &x2);
	fflush (stdin);
	printf ("Digite um valor para y2:");
	scanf ("%d", &y2);
	fflush (stdin);
	puts ("");
	dist (x1, y1, x2, y2);	
	return 0;
}

void dist (int a,int b,int c,int d){
	int x, y, h;
	x = (a - c);
	y = (b - d);
	h = sqrt((y * y) + (x * x));
	if (x > 0){
		printf ("x1 está a %d unidades a direita de x2;", x);
	}
	else if (x < 0){
		printf ("x1 está a %d unidades a esquerda de x2;", x * (-1));
	}
	else {
		printf ("x1 está na mesma posição de x2;");
	}
	puts ("");
	if (y > 0){
		printf ("y1 está a %d unidades acima de y2;", y);
	}
	else if (y < 0){
		printf ("y1 está a %d unidades abaixo de y2;", y * (-1));
	}
	else {
		printf ("y1 está na mesma posição de y2;");
	}
	puts ("");
	printf ("A distância em centímetros entre os dois pontos (%d,%d) e (%d, %d) é de %d.", a, b, c, d, h);

}
