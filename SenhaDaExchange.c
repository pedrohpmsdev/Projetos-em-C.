#include <stdio.h>
#include <string.h>
#include <locale.h>
#define T 30

int main (){
	setlocale (LC_ALL, "Portuguese");
	char senha[T] = {"poderosopedao"};
	char tentativa[T];
	int cont = 0;
	int test;
	puts ("LOGIN DA EXCHANGE");
	puts ("=-=-=-=-=-=-=-=-=-=");
	do{
    puts ("Digite sua senha: ");
    fgets (tentativa, T, stdin);
    tentativa [strcspn(tentativa, "\n")] = '\0';
    test = strcmp(senha, tentativa);
    if (test == 0){
		puts ("Acesso concedido!");
		break;
    }
	else if(test > 0){
		puts ("Acesso negado!");
		cont++;
	}
	else if(test < 0){
		puts ("Acesso negado!");
		cont++;
	}
	if (cont == 1){
	puts ("Você tem mais 2 tentativas.\n");
    }  
	if (cont == 2){
	puts ("Você tem mais 1 tentativas.\n");
    }  
	if (cont == 3){
	puts ("Você não tem mais tentativas. Isso significa que nunca mais poderá ter acesso a seus bitcoins.");
	break;
    }  
    }
    while (cont < 3);
    return 0;
	
}


