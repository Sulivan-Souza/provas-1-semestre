
// prova 28/11/2022
// EXERCICIO 1
// Faça um programa que leia 10 valores  e os apresente na ordem inversa entrada

#include<stdio.h>
int main()
{
 int valor[10], i;

 for(i=0; i<10; i++)
 {
 printf("Qual o %do valor?\n ", i+1);
 scanf("%d", &valor[i]);
 }
 printf("\nO ordem inversa dos valores entrados e:\n");

 for(i=0; i<10; i++)
 printf("%d\n", valor[9-i]); 
}