#include <stdio.h>

// Fun��o para ordenar um vetor usando o algoritmo Bubble Sort
void BubbleSort(int* v, int n) {
    int i, fim, aux;

    // Loop externo: percorre o vetor v�rias vezes
    for (fim = n - 1; fim > 0; fim--) {
        // Loop interno: compara elementos adjacentes e troca se necess�rio
        for (i = 0; i < fim; ++i) {
            // Compara elementos adjacentes
            if (v[i] > v[i + 1]) {
                // Troca os elementos de posi��o se estiverem fora de ordem
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    }
}

int main() {
    // Array de n�meros inteiros a ser ordenado
    int array[] = {9, 5, 7, 3, 1, 8, 2, 6, 4};
    int tamanho = sizeof(array) / sizeof(array[0]); // Calcula o tamanho do array

    // Imprime o array antes da ordena��o
    printf("Array antes da ordenacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Chama a fun��o para ordenar o array
    BubbleSort(array, tamanho);

    // Imprime o array ap�s a ordena��o
    printf("Array apos a ordenacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
