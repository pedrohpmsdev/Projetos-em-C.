#include <stdio.h>
int main (){
	int num1, num2, num3 = 0;
	printf ("Digite um valor: ");
	scanf ("%d.\n", &num1);
	printf ("Digite outro valor: ");
	scanf ("%d.\n", &num2);
	printf ("Digite outro valor: ");
	scanf ("%d.\n", &num3);
	if (num1 == num2 && num2 == num3){
		printf ("Os valores %d, %d e %d sao iguais.", num1, num2, num3);
	}
	if (num1 > num2 && num2 > num3){
		printf ("%d, %d, %d.", num1, num2, num3);
	}
	if (num1 < num2 && num2 < num3){
		printf ("%d, %d, %d.", num3, num2, num1);
	}
	if (num1 > num3 && num3 > num2){
		printf ("%d, %d, %d.", num1, num3, num2);
	}
	if (num2 > num1 && num1 > num3){
		printf ("%d, %d, %d.", num2, num1, num3);
		}
	if (num2 > num3 && num3 > num1){
		printf ("%d, %d, %d.", num2, num3, num1);
	}
	if (num3 > num1 && num1 > num2){
		printf ("%d, %d, %d.", num3, num1, num2);
	}
}
