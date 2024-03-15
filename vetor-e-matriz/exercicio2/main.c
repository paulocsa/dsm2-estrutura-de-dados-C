#include <stdio.h>
#include <stdlib.h>

int main()
{
    //[linhas][colunas]

    int mat[3][3];
    int i,j,x;

    //Solicitar os valores ao usuario

    for(i=0; i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor para a posi��o (%d,%d):",i,j);
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }

    printf("Matriz digitada:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }




}
