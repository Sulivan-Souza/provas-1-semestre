
// prova 28/11/2022
// EXERCICIO 2
// Faça um programa que receba os valores de uma matriz de ordem 3 e imprimia sua diagonal principal de trás para frente.

#include<math.h>
#include<stdio.h>
#include<string.h>

int main(void){

	int matriz[3][3], linha = 0, coluna = 0;

	for(linha = 0; linha < 3; linha++){

		for (coluna = 0; coluna < 3; coluna++){

			scanf("%d",&matriz[linha][coluna]);
		}

	}

	for (linha = 2; linha >= 0; linha--){

		for(coluna = 2; coluna >=0; coluna--){
			if ( linha == coluna){
					printf("%d\n",matriz[linha][coluna]);
			}
		}
	}	

	return 0;
}