#include <stdio.h>

void BubbleSort(int* v, int n) {
    int i, fim, aux;

    for (fim = n - 1; fim > 0; fim--) {
        for (i = 0; i < fim; ++i) {
            if (v[i] > v[i + 1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    }
}

int main() {
    int array[] = {9, 5, 7, 3, 1, 8, 2, 6, 4};
    int tamanho = sizeof(array) / sizeof(array[0]);

    printf("Array antes da ordenacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    BubbleSort(array, tamanho);

    printf("Array apos a ordenação:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}



    //1º passo: definir o criterio de ordenação
    //2º passo: repetir as etapas abaixo até que o vetor esteja trocado
    //comparar os vizinhos (posição i e i +1)
    //utiliza o criterio  de ordenação para decidir se os valores trocam ou nao de posição
