#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 30

int main (){
	setlocale (LC_ALL, "Portuguese");
	int i = 0;
	int t = 0;
	char string[N];
	puts ("Escreva uma sequ�ncia de 0's e 1's qualquer:");
    fgets (string, N, stdin);
    fflush (stdin);
    printf ("A sequ�ncia que voc� digitou foi: %s", string);
    printf ("\n");
    t = strlen (string);
    for (i = 0; i < t; i++){
    	if (string[i] == '0'){
    		string[i] = '1';
		}
	}
	printf ("A sequ�ncia que voc� digitou, MODIFICADA, foi: %s", string);
	return 0;
}
