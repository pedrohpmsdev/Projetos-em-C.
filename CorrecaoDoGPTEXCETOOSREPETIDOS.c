#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 10

int main (){
    setlocale (LC_ALL, "Portuguese");
    int a[N]; // Armazena os n�meros digitados
    int b[N]; // Armazena os n�meros n�o repetidos
    int c = 0;
    int i, j;
    char res;
    
    // Entrada dos valores
    for (i = 0; i < N; i++){
        puts ("-=-=-=-=-=-=-=-=-=-==-==-=-=");
        puts (" DETONADOR DE HOMOGENEIDADE");
        puts ("-=-=-=-=-=-=-=-=-=-==-==-=-=");
        printf ("Digite o %do valor:\n", i + 1);
        scanf ("%d", &a[i]);
        getchar(); // Limpa o buffer de entrada
        
        system("cls"); // Apaga a tela ap�s a leitura
    }
    
    // Compara��o para identificar valores n�o repetidos
    for (i = 0; i < N; i++) {
        int repetido = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) { // Se n�o � repetido, guarda em b
            b[c] = a[i];
            c++;
        }
    }
    
    // Exibe todos os valores digitados
    printf ("Os valores que voc� digitou foram: ");
    for (i = 0; i < N; i++){
        printf ("%d ", a[i]);
    }
    puts ("");
    
    // Pergunta ao usu�rio se quer eliminar os repetidos
    do {
        printf ("Voc� quer eliminar os valores iguais? [S]/[N] ");
        scanf (" %c", &res);
        getchar(); // Limpa o buffer
        puts("");
        
        if (res == 'S'){
            printf ("Valores sem repeti��o: ");
            for (i = 0; i < c; i++){
                printf ("%d ", b[i]);    
            }
            puts("");
        }
        else if (res == 'N'){
            printf ("Finalizando o programa...");
            return 0;
        }
        else {
            puts ("Resposta inv�lida. Pressione ENTER para continuar.");
            getchar();
            system ("cls"); // Apaga a tela ap�s erro na resposta
        }
    } while (res != 'S' && res != 'N');
    
    return 0;
}

