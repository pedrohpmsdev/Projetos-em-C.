#include <stdio.h>
int main (){
	
	int valor = 0;
	int deci, cent, mili;
	printf ("Escolha um valor inteiro em metros que irei converte-lo para voce em decimetros, centimetros e milimetros: "); 
	scanf ("%d.\n", &valor);
	
	deci = valor * 10;
	cent = valor * 100;
	mili = valor * 1000;
	
	printf ("EM DECIMETROS: %d.\n", deci);
	printf ("EM CENTIMETROS: %d.\n", cent);
	printf ("EM MILIMETROS: %d.\n", mili);
}

