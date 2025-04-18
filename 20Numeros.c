#include <stdio.h>

int main() {
    int numeros[20];
    int i, maior, menor, soma = 0;
    float media;

    // Leitura dos 20 números usando do...while
    do {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        // No primeiro número, inicializa maior e menor
        if (i == 0) {
            maior = menor = numeros[i];
        }

        // Atualiza maior e menor se necessário
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }

        // Soma para cálculo da média
        soma += numeros[i];

        i++;
    } while (i < 20);

    // Cálculo da média
    media = soma / 20.0;

    // Exibição dos resultados
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}

