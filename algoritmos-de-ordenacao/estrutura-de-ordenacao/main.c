#include <stdio.h>

// Fun��o para trocar os valores de duas vari�veis inteiras
void trocar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fun��o para ordenar um vetor usando o algoritmo Selection Sort
void selectionSort(int* v, int n) {
    // Loop externo: percorre todo o vetor
    for (int i = 0; i < n - 1; i++) {
        // Inicializa o �ndice do menor elemento como o �ndice atual
        int menor_idx = i;

        // Loop interno: busca o menor elemento restante no vetor
        for (int j = i + 1; j < n; j++) {
            // Se o elemento atual for menor que o menor encontrado at� agora
            if (v[j] < v[menor_idx]) {
                // Atualiza o �ndice do menor elemento
                menor_idx = j;
            }
        }

        // Troca o elemento atual com o menor elemento encontrado
        trocar(&v[i], &v[menor_idx]);
    }
}

int main() {
    // Vetor de n�meros inteiros a ser ordenado
    int array[] = {9, 5, 7, 3, 1, 8, 2, 6, 4};
    int tamanho = sizeof(array) / sizeof(array[0]); // Calcula o tamanho do vetor

    // Imprime o vetor antes da ordena��o
    printf("Vetor antes da ordenacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Chama a fun��o para ordenar o vetor
    selectionSort(array, tamanho);

    // Imprime o vetor ap�s a ordena��o
    printf("Vetor ap�s a ordenacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
