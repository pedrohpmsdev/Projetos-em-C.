#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
	int seg = 0;
	int min = 0;
	int hr = 0;	
	setlocale (LC_ALL, "Portuguese");
	puts ("=-=-=-=-=-=-=-=-=-=-=");
	puts (" RELÓGIO DE JEREMIAS");
	puts ("=-=-=-=-=-=-=-=-=-=-=");
	puts ("EU - Olá, Jeremias! Precisa saber que horas são agora. Me diga quantos segundos seu relógio maluco marca?");
	scanf ("%d", &seg);
	printf ("JEREMIAS - Claro! Meu relógio marca %d segundos.\n", seg);
	min = seg/60;
	hr = min/60;
	min -= (hr * 60);
	seg -= (hr * 3600) + (min * 60);
	
	printf (" EU - Ok! Então são exatamente %02dhr:%02dmin:%02dseg.", hr, min, seg);  
	
	
}
