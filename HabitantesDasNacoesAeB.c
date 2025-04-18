#include <stdio.h>
int main (){
	int a = 500000;
	int b = 700000;
	int c = 0;
	int ano = 2024;
	
	printf ("Em 2024 uma nacao A que possui 500.000 habitantes, com uma taxa de natalidade de 3%% ao ano, e outra nacao B que possui 700.000 habitantes e uma taxa de natalidade de 2%% ao ano. Em quanto tempo a nacao A ultrapassara a nacao B em habitantes?\n");
	while (a <= b){
		c++;
		a *= 1.03;
		b *= 1.02;
	}
	ano = 2024 + c;
	ano--;
	printf ("A nacao A ultrapassara a B em habitantes no ano %d.", ano);
}
