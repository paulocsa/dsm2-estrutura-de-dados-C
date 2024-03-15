#include <stdio.h>
#include <stdlib.h>

int main()
{
    double v1[5],v2[5], v3[5],soma,multiplicacao,divisao;
    int x;

    for (x = 0; x < 5; x++) {
        printf("Digite o valor %d do vetor 1: ", x+1);
        scanf("%lf", &v1[x]);
        printf("Digite o valor %d do vetor 2: ", x+1);
        scanf("%lf", &v2[x]);
    }


    for(x = 0;x<5;x++){
        //soma


        v3[x] = v1[x] + v2[x];
        printf("Soma do primeiro(%.2lf) pelo segundo(%.2lf): %.2lf\n", v1[x], v2[x], v3[x]);
        printf("\n");

        v3[x] = v1[x] * v2[x];
        printf("Multiplicação do primeiro(%.2lf) pelo segundo(%.2lf): %.2lf\n", v1[x], v2[x], v3[x]);
        printf("\n");


        v3[x] = v1[x] / v2[x];
        printf("Divisão do primeiro(%.2lf) pelo segundo(%.2lf): %.2lf\n", v1[x], v2[x], v3[x]);
        printf("\n");


    }






    return 0;
}
