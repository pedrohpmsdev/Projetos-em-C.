#include <stdio.h>
int main (){
	int valor[15];
	int i = 0;
	int vista = 0;
	int prazo = 0;
	int prazoevista = 0;
	char codigo[15];
	for (i = 0; i < 15; i++){
		printf ("Diga o valor da %d transacao:\n", i + 1);
		scanf ("%d", &valor[i]);
		printf ("Diga o codigo da %d transacao: [V]/[P]\n", i + 1);
		scanf (" %c", &codigo[i]);
		system ("cls");
		
		if (codigo[i] == 'V' || codigo[i] == 'P'){
			prazoevista += valor[i];
		}
		if (codigo[i] == 'V'){
		    vista += valor[i];
		}	
		if (codigo[i] == 'P'){
		    prazo += valor[i];
		}		
	}
	
	printf ("O valor total das compras a vista e %d.\n", vista);
	printf ("O valor total das compras a prazo e %d.\n", prazo);
	printf ("O valor total das compras a vista e a prazo e %d.\n", prazoevista);
	return 0;
}

