#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valores[10];
    int primos[10];
    int posi[10];
    int contdiv;
    int i, j;
    int p = 0;

    for (i = 0; i < 10; i++) {
        contdiv = 0;
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &valores[i]);
        
        // Verificar se o número é primo
        for (j = 1; j <= valores[i]; j++) { // Corrigido para verificar até o próprio número
            if (valores[i] % j == 0) {
                contdiv++;
            }
        }
        
        // Número é primo se tiver exatamente 2 divisores (1 e ele mesmo)
        if (contdiv == 2) {
            primos[p] = valores[i];
            posi[p] = i;
            p++;
        }
    }

    printf("\nNúmeros primos encontrados:\n");
    for (i = 0; i < p; i++) {
        printf("%d é primo e está na posição %d\n", primos[i], posi[i] + 1);
    }
    
    return 0;
}

