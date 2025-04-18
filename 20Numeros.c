#include <stdio.h>

int main() {
    int numeros[20];
    int i, maior, menor, soma = 0;
    float media;

    // Leitura dos 20 n�meros usando do...while
    do {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);

        // No primeiro n�mero, inicializa maior e menor
        if (i == 0) {
            maior = menor = numeros[i];
        }

        // Atualiza maior e menor se necess�rio
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }

        // Soma para c�lculo da m�dia
        soma += numeros[i];

        i++;
    } while (i < 20);

    // C�lculo da m�dia
    media = soma / 20.0;

    // Exibi��o dos resultados
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("M�dia dos valores: %.2f\n", media);

    return 0;
}

