#include <stdio.h>
int main (){
	int ang1 = 0;
	int ang2 = 0;
	int ang3 = 0;
	int lado1 = 0;
	int lado2 = 0;
	int lado3 = 0;
	int soma = 0;
	int soma12 = 0;
	int soma13 = 0;
	int soma23 = 0;
	
	
	printf ("Indique o valor do 1º lado do triangulo: ");
		scanf ("%d.\n", &lado1);
	printf ("Indique o valor do 2º lado do triangulo: ");
		scanf ("%d.\n", &lado2);
	printf ("Indique o valor do 3º lado do triangulo: ");
		scanf ("%d.\n", &lado3);
	printf ("Indique o valor do 1º angulo do triangulo: ");
		scanf ("%d.\n", &ang1);
	printf ("Indique o valor do 2º angulo do triangulo: ");
		scanf ("%d.\n", &ang2);
	printf ("Indique o valor do 3º angulo do triangulo: ");
		scanf ("%d.\n", &ang3);
		soma = ang1 + ang2 + ang3;
	    soma12 = lado1 + lado2;
	    soma13 = lado1 + lado3;
	    soma23 = lado2 + lado3;
	    
	if (soma != 180){
		printf ("Isso nao e um triangulo.");
		return 0;
    }
	else if (soma12 < lado3 || soma23 < lado1 || soma13 < lado2){
		printf ("Isso nao e um triangulo.");
		return 0;
	}	
	else if (lado1 != lado2 && lado2 != lado3){
		printf ("Esse triangulo possui 3 lados diferentes, portanto e um triangulo escaleno.\n");
	}
	else if (lado1 == lado2 && lado2 == lado3){
		printf ("Esse triangulo possui 3 lados iguais, portanto e um triangulo equilatero.\n");
	}
	else {
		printf ("Esse triangulo possui 2 lados iguais, portanto e um triangulo isosceles.\n");
	}
	
	if (ang1 == 90 || ang2 == 90 || ang3 == 90){
		printf ("Esse triangulo possui 1 angulo reto, portanto e um triangulo retangulo.\n");
	}
	else if (ang1 > 90 || ang2 > 90 || ang3 > 90){
		printf ("Esse triangulo possui 1 angulo obtuso, portanto e um triangulo obtusangulo.\n");
	}
	else {
		printf ("Esse triangulo possui 2 angulos iguais, portanto e um triangulo acutangulo.\n");
	}
	return 0;
}
