#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#define N 50

int main (){
	setlocale (LC_ALL, "Portuguese");
	int i = 0;
	int t = 0;
	int temMinuscula = 0;
	char car;
	char word[N];
	do{
	temMinuscula = 0;
	puts ("Escreva uma palavra com letras ma�usculas:");
	fgets (word, N, stdin);
	fflush (stdin);
	t = strlen (word);
	
	for (i = 0; i < t; i++){
	if (word [i] >= 'a' && word [i] <= 'z'){
		temMinuscula++;
    } 
    if (temMinuscula == 1){
    	puts ("Voc� digitou letra(as) min�scula(as). Por favor, pressione enter para continuar.");
		getchar ();
		system ("cls");
		break;
		}
	}
    }
	while (temMinuscula >= 1);
	
	for (i = 0; i < t; i++){
	if (word [i] >= 'A' && word [i] <= 'Z'){
		word[i] += 32;	
		}
	}
	
	printf ("Sua palavra com letras min�sculas fica: %s", word);
	return 0;
	}
	
