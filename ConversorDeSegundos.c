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
	puts (" REL�GIO DE JEREMIAS");
	puts ("=-=-=-=-=-=-=-=-=-=-=");
	puts ("EU - Ol�, Jeremias! Precisa saber que horas s�o agora. Me diga quantos segundos seu rel�gio maluco marca?");
	scanf ("%d", &seg);
	printf ("JEREMIAS - Claro! Meu rel�gio marca %d segundos.\n", seg);
	min = seg/60;
	hr = min/60;
	min -= (hr * 60);
	seg -= (hr * 3600) + (min * 60);
	
	printf (" EU - Ok! Ent�o s�o exatamente %02dhr:%02dmin:%02dseg.", hr, min, seg);  
	
	
}
