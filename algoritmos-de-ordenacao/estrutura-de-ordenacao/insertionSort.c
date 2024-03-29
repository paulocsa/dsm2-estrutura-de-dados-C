#include <stdio.h>
#include <stdlib.h>

// Função para ordenar um vetor usando o algoritmo Insertion Sort
void insertionSort(int* v, int n) {
    // Variáveis para controlar os índices durante a ordenação
    int i = 0; // Índice para percorrer o vetor
    int j = 1; // Índice para marcar o próximo valor a ser inserido

    // Variável para armazenar o valor a ser inserido na posição correta
    int aux = 0;

    // Loop para percorrer o vetor e inserir os valores na posição correta
    while (j < n) {
        // Guarda o valor a ser inserido na variável auxiliar
        aux = v[j];

        // Define a posição correta para inserir o valor guardado em aux
        i = j - 1;

        // Loop para deslocar os elementos maiores que o valor guardado em aux para a direita
        while ((i >= 0) && (v[i] > aux)) {
            // Desloca o elemento v[i] para a direita
            v[i + 1] = v[i];
            // Move o índice i para a esquerda para continuar verificando os elementos anteriores
            i = i - 1;
        }

        // Insere o valor guardado em aux na posição correta
        v[i + 1] = aux;

        // Incrementa j para marcar o próximo valor a ser inserido na próxima iteração
        j++;
    }
}

int main() {
    // Vetor de números inteiros a ser ordenado
    int v[] = {12, 35, 6, 71, 44};
    int n = sizeof(v) / sizeof(v[0]); // Calcula o tamanho do vetor
    int i = 0; // Variável para percorrer o vetor durante a impressão

    // Imprime o vetor original antes da ordenação
    printf("Vetor original: [%d", v[0]);
    for (i = 1; i < n; i++) {
        printf(", %d", v[i]);
    }
    printf("]\n");

    // Chama a função para ordenar o vetor
    insertionSort(v, n);

    // Imprime o vetor ordenado após a ordenação
    printf("Vetor ordenado: [%d", v[0]);
    for (i = 1; i < n; i++) {
        printf(", %d", v[i]);
    }
    printf("]\n");

    return 0;
}
