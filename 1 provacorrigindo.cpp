// algoritimo conta pizzaria
#include <stdio.h>

using namespace std;

int main()
{   
    int preco_choop = 10, preco_pizza = 20;
    float num_choop, num_pessoa, num_pizza ;
    float parcial, total_com_garcom, pagt_por_pessoa;

       
    printf("digite a quantidade de choop pedido:");
    scanf("%f" , &num_choop);
    printf("Digite quantas pizzas foram pedidas:");
    scanf("%f", &num_pizza);
    printf("digite a quantidade de pessoas");
    scanf("%f" , &num_pessoa);
    
    parcial = (num_choop*preco_choop)+(preco_pizza * num_pizza);
    total_com_garcom = parcial+parcial+(10/100);// 10%garçom
    pagt_por_pessoa = total_com_garcom / num_pessoa;

    printf("\nSubtotal.1 da conta : R$ .%.2f", parcial);
    printf("\nSubtotal.2 da conta com acrescimo do garcom : R$ %.2f", total_com_garcom);
    printf("\nO Total da conta foi R$: %.2f :\n", total_com_garcom);
    printf("\nCada pessoa deve pagar R$: %.2f", pagt_por_pessoa);
}