#include <stdio.h>
int main (){
	float chico = 1.70;
	float juca = 1.10;
	int c = 0;
	printf ("Chico tem 1.70m e cresce 2cm por ano. Juca tem 1.10m e cresce 3cm por ano. Quantos anos serao necessarios para que Juca seja maior que Chico?\n");
	while (juca <= chico){
		c++;
		chico += 0.02;
		juca += 0.03;
	}
	printf ("Serao necessarios %d anos para que Juca ultrapasse Chico em altura.", c);
	return 0;
}
