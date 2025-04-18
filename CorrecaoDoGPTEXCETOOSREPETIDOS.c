#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 10

int main (){
    setlocale (LC_ALL, "Portuguese");
    int a[N]; // Armazena os números digitados
    int b[N]; // Armazena os números não repetidos
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
        
        system("cls"); // Apaga a tela após a leitura
    }
    
    // Comparação para identificar valores não repetidos
    for (i = 0; i < N; i++) {
        int repetido = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) { // Se não é repetido, guarda em b
            b[c] = a[i];
            c++;
        }
    }
    
    // Exibe todos os valores digitados
    printf ("Os valores que você digitou foram: ");
    for (i = 0; i < N; i++){
        printf ("%d ", a[i]);
    }
    puts ("");
    
    // Pergunta ao usuário se quer eliminar os repetidos
    do {
        printf ("Você quer eliminar os valores iguais? [S]/[N] ");
        scanf (" %c", &res);
        getchar(); // Limpa o buffer
        puts("");
        
        if (res == 'S'){
            printf ("Valores sem repetição: ");
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
            puts ("Resposta inválida. Pressione ENTER para continuar.");
            getchar();
            system ("cls"); // Apaga a tela após erro na resposta
        }
    } while (res != 'S' && res != 'N');
    
    return 0;
}

