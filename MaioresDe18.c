#include <stdio.h>
int main (){
	int idade [10];
	int i = 0;
	int contid = 0;
	for (i = 0; i < 10; i++){
	printf ("Digite a idade da %d pessoa: ", i + 1);
	scanf ("%d.\n", &idade [i]);
	if (idade[i] >= 18){
		contid++;
	}
	}
	printf ("O numero de pessoas com mais de 18 anos e %d.", contid);
	return 0;
}   
