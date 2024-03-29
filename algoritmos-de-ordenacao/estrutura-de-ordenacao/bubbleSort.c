#include <stdio.h>

// Função para ordenar um vetor usando o algoritmo Bubble Sort
void BubbleSort(int* v, int n) {
    int i, fim, aux;

    // Loop externo: percorre o vetor várias vezes
    for (fim = n - 1; fim > 0; fim--) {
        // Loop interno: compara elementos adjacentes e troca se necessário
        for (i = 0; i < fim; ++i) {
            // Compara elementos adjacentes
            if (v[i] > v[i + 1]) {
                // Troca os elementos de posição se estiverem fora de ordem
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    }
}

int main() {
    // Array de números inteiros a ser ordenado
    int array[] = {9, 5, 7, 3, 1, 8, 2, 6, 4};
    int tamanho = sizeof(array) / sizeof(array[0]); // Calcula o tamanho do array

    // Imprime o array antes da ordenação
    printf("Array antes da ordenacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Chama a função para ordenar o array
    BubbleSort(array, tamanho);

    // Imprime o array após a ordenação
    printf("Array apos a ordenacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
