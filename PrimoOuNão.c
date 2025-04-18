#include <stdio.h>
int main (){
	int num = 0;
	int c = 0;
	int i = 0;
	int contdiv = 0;
	printf ("Escolha um numero e lhe direi se e primo ou nao: ");
	scanf ("%d.\n", &num);
	for (c = 1; c <= num; c++){
		if (num % c == 0){
			contdiv++;
		}
	}
	if (contdiv == 2 && num != 1 && num != 0){
		printf ("%d e um numero primo.", num);
	}
	else{
		printf ("%d nao e um numero primo.", num);
	}
}
