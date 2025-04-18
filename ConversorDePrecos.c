#include <stdio.h>
int main (){
	
	int preco, final = 0;
	printf ("Ola! Bom dia! Eu sou o corretor de precos. Posso corrigir as falsas promocoes que voce ve pela internet.\n");
	printf ("Diga um preco que lhe direi seu valor com impostos alocados: ");
	scanf ("%d.\n", &preco);
	if (preco < 100) {
		final = preco * 1.1;
		printf ("Preco corrigido: %d.", final);
	}
	else {
		final = preco * 1.2;
		printf ("Preco corrigido: %d.", final);
	}
	
}
