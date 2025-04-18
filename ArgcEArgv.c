#include <stdio.h>
#include <locale.h>

int main (int argc, char*argv[]){
	setlocale (LC_ALL, "Portuguese");
	int i;
	printf ("Foram inseridos %d argumentos no programa, sendo eles:\n", argc);
	for (i = 0; i < argc; i++){
		if (argc > 1){
			printf ("%s\n", argv[i]);
		}
		else{
			puts ("Não foram inseridos argumentos além do nome do arquivo.");
			return 0;
		}
	}
	return 0;
}
