#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[] = {12, 45, 2, 78, 19};
    int i, maior = -1;

    for (i = 0; i < 5; i++) {
        if (maior < vet[i]) {
            maior = vet[i];
        }
    }

    printf("O maior elemento do vetor e: %d\n", maior);

    return 0;
}
