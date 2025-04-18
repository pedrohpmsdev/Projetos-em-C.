#include <stdio.h>

int main ()
{
	float nota1, nota2, media;
	printf ("PORTAL DO ALUNO\n");
	printf ("----------------|\n");
	printf ("Insira a sua nota da primeira prova: ");
	scanf ("%f.\n", &nota1);
	printf ("Insira a sua nota da segunda prova ");
	scanf ("%f.\n", &nota2);
	
	media = (nota1 + nota2)/2;
	printf ("RESULTADO:\n");
	printf ("------------|\n");
	if (media > 7) {
		printf ("Sua media foi de %.2f. ", media);
		printf ("Voce foi APROVADO.");
	}
	if (media >= 4 && media < 7){
		printf ("Sua media foi de %.2f. ", media);
		printf ("Voce pode fazer o exame de recuperacao.");	
}
	if (media < 4){
		printf ("Sua media foi de %.2f. ", media);
		printf ("Voce foi REPROVADO.");

    return 0;
}
}
