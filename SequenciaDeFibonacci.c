#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	puts ("SEQUÊNCIA DE FIBONACCI");
	puts ("=-=-=-=-=-=-=-=-=-=-=-=");
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int i;
	
		do{
		printf ("%d ", n1);         
			n2 = n1 + 1;	
		printf ("%d ", n2);
		n1 = n2;
		printf ("%d ", n1);  
		n3 = n1 + n2;
		printf ("%d ", n3);
		n1 = n2;
		n2 = n3;
		}while (n3 < 2);
		
		for (i = 0; i < 12; i++){
		n3 = n1 + n2;
		printf ("%d ", n3);
		n1 = n2;
		n2 = n3;
		}
	
}
