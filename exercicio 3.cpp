
// prova 28/11/2022
// EXERCICIO 4
/* Escreva uma função que, dado um número real passado como parâmetro, retorne a parte inteira 
e a parte fracionária desse número por referência.*/


#include <stdio.h>
#include <stdlib.h>

void imprimeMat(int tam, int m[tam][tam]) {
    int i, j;
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }
}

void calc(int tam, int ma[tam][tam], int mb[tam][tam]) {
    int i, j;
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            mb[i][j] = ma[i][j] * ma[i][i];
        }
    }
}

int main()
{
    int A[3][3] = {2, 5, 4, 8, 5, 4, 0, 2, 5}, B[3][3];

    imprimeMat(3, A);
    calc(3, A, B);
    printf("\n");
    imprimeMat(3, B);

    return 0;
}
