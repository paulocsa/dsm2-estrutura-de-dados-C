#include <stdio.h>
#include <stdlib.h>



int particiona_random(int* v, int inicio, int fim){
    int pivo_indice = (rand() % (fim-inicio+1)+inicio+);

    troca(&v, pivo_indice, fim);

    return particiona_random(&v, inicio, fim)
}



void quick_sort(int* v, int inicio, int fim){

    if(inicio <  fim){
        int pivo = particiona_random(&v, inicio, fim);

        //esquerda
        quick_sort(&v, inicio, pivo-1);

        //direita
        quick_sort(&v, pivo+1, fim);

    }

}



int main()
{
    int v[] - {4,3,6,7,9,10,5,8};
    quick_sort(&v,0,7);
    return 0;
}
