#include <stdio.h>
int main() {
	//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
	//Aluno: Eduardo Clinio 
	//Lista 01 - Questão 7
	
	//Declarando as variáveis
    float totCompra, totPagar, totParcela;
    int formaPag;
   //Recebendo as variáveis
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &totCompra);
   //Incluindo as formas de pagamentos
    printf("\nForma de pagamento:\n");
    printf("1 - A vista com 8%% de desconto\n");
    printf("2 - A vista no cartao com 4%% de desconto\n");
    printf("3 - Em 2x, preco normal sem juros\n");
    printf("4 - Em 4x, preco acrescido de 8%%\n");
    printf("Digite o codigo da forma de pagamento: ");
    scanf("%d", &formaPag);
    
   //Calculando as formas de pagamento e imprimir
    switch(formaPag){
	
        case 1:
            totPagar = totCompra * 0.92;
            printf("\nForma de pagamento: A vista com 8%% de desconto");
            printf("\nValor a pagar: R$ %.2f", totPagar);
            break;
        case 2:
            totPagar = totCompra * 0.96;
            printf("\nForma de pagamento: A vista no cartao com 4%% de desconto");
            printf("\nValor a pagar: R$ %.2f", totPagar);
            break;
        case 3:
            totPagar = totCompra;
            totParcela = totPagar / 2;
            printf("\nForma de pagamento: Em 2x, preco normal sem juros");
            printf("\nValor a pagar: R$ %.2f", totPagar);
            printf("\nValor de cada parcela: R$ %.2f", totParcela);
            break;
        case 4:
            totPagar = totCompra * 1.08;
            totParcela = totPagar / 4;
            printf("\nForma de pagamento: Em 4x, preco acrescido de 8%%");
            printf("\nValor a pagar: R$ %.2f", totPagar);
            printf("\nValor de cada parcela: R$ %.2f", totParcela);
            break;
        default:
            printf("\nOpcao invalida!");
            break;
    }
	
	//Esperando o <ENTER> p/sair
    getchar();
    return 0;
}
