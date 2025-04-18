#include <stdio.h>
int main (){
	int lados = 0;
	float area = 0;
	float cm = 0;
	printf ("Digite o numero de lados de um poligono regular: ");
	scanf ("%d.\n", &lados);
	printf ("Agora digite o comprimento dos lados: ");
	scanf ("%f.\n", &cm);
	if (lados == 3){
		area = (cm * cm) / 2;
		printf ("Esse poligono e um triangulo de area %.2f cm2.", area);
	}
   	else if (lados == 4){
		area = cm * cm;
		printf ("Esse poligono e um quadrado de area %.2f cm2.", area);
	}
    else if (lados == 5){
		printf ("Esse poligono e um pentagono.");
	}
	else if (lados < 3){
		printf ("Isso nao e um poligono.");
	}
	else {
		printf ("Desculpe, nao fui atualizado para informar sobre poligonos maiores.");
	}
}
