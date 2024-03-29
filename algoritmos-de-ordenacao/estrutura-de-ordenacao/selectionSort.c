#include <stdio.h>

// Função para trocar os valores de duas variáveis inteiras
void trocar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para ordenar um vetor usando o algoritmo Selection Sort
void selectionSort(int* v, int n) {
    // Loop externo: percorre todo o vetor
    for (int i = 0; i < n - 1; i++) {
        // Inicializa o índice do menor elemento como o índice atual
        int menor_idx = i;

        // Loop interno: busca o menor elemento restante no vetor
        for (int j = i + 1; j < n; j++) {
            // Se o elemento atual for menor que o menor encontrado até agora
            if (v[j] < v[menor_idx]) {
                // Atualiza o índice do menor elemento
                menor_idx = j;
            }
        }

        // Troca o elemento atual com o menor elemento encontrado
        trocar(&v[i], &v[menor_idx]);
    }
}

int main() {
    // Vetor de números inteiros a ser ordenado
    int array[] = {9, 5, 7, 3, 1, 8, 2, 6, 4};
    int tamanho = sizeof(array) / sizeof(array[0]); // Calcula o tamanho do vetor

    // Imprime o vetor antes da ordenação
    printf("Vetor antes da ordenacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Chama a função para ordenar o vetor
    selectionSort(array, tamanho);

    // Imprime o vetor após a ordenação
    printf("Vetor após a ordenacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
