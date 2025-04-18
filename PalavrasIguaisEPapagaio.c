#include <stdio.h>
int main (){
	char p1[30], p2[30];
	printf ("Digite uma palavra: ");
	gets (p1);
	printf ("Digite outra palavra: ");
	gets (p2);
	if (strcmp(p1, p2) == 0) {
		printf ("As palavras %s e %s sao iguais.\n", p1, p2);
	}
	if (strcmp(p1, "papagaio") == 0){
		printf ("A primeira palavra escrita foi papagaio.\n");
	}
	if (strcmp(p2,"papagaio") == 0){
		printf ("A segunda palavra escrita foi papagaio.");
}
return 0;
}    
