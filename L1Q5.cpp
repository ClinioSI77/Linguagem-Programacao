#include <stdio.h>

int main() {
	//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
    //Aluno: Eduardo Clinio 
    //Lista 01 - Questão 5
    
    //Declarando as variáveis
    int codigo;
    
    //Inserir o código desejado
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    
    //Classificando o produto com o código escolhido e imprimir
    switch(codigo) {
        case 1:
            printf("Alimento nao perecivel\n");
            break;
        case 2:
        case 3:
        case 4:
            printf("Alimento perecivel\n");
            break;
        case 5:
        case 6:
            printf("Vestuario\n");
            break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            printf("Limpeza\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }
    
    //Esperando o <ENTER> p/sair
    getchar();
    return 0;
}
