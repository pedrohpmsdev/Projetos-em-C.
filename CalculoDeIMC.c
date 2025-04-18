#include <stdio.h>
#include <math.h>
#define linhas "-------------------"
int main ()

{
	float altura = 0;
	float peso = 0;
	float IMC = 0;
	
	printf ("%s\n", linhas);
	printf ("CALCULO DE IMC\n");
	printf ("%s\n", linhas);
	printf ("\n");
	printf ("Digite sua altura: ");
	scanf ("%f.\n", &altura);
	printf ("Digite sua massa: ");
	scanf ("%f.\n", &peso);
	
	IMC = peso/pow (altura, 2);
    
    printf ("Seu IMC eh igual a %f.\n", IMC);
}
