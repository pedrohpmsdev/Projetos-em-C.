#include <stdio.h>
char main() {
	char l;
	printf ("Digite uma letra: ");
	scanf ("%c.\n", &l);
	if (l == 'a' || l == 'b' || l == 'c' || l == 'd' || l == 'e'){
		printf ("A letra '%c' e uma vogal.", l);
	}
	else{
		printf ("A letra '%c' e uma consoante.", l);
}
	return 0;
}
