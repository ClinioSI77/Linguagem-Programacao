#include <stdio.h>

int main() {
	
	//Declarando as variáveis
    int opcao;
    float lado, base, altura, raio;
    
    ////Recebendo as variáveis
    printf("Escolha uma opcao:\n");
    printf("1 - Circunferencia\n");
    printf("2 - Quadrado\n");
    printf("3 - Retangulo\n");
    scanf("%d", &opcao);
 	//Calculando a área e o perímetro do polígono selecionado e imprimir
    switch(opcao) {
        case 1:
            printf("Digite o raio da circunferencia: ");
            scanf("%f", &raio);
            printf("Area: %.2f\n", 3.1415 * raio * raio);
            printf("Perimetro: %.2f\n", 2 * 3.1415 * raio);
            break;
        case 2:
            printf("Digite o lado do quadrado: ");
            scanf("%f", &lado);
            printf("Area: %.2f\n", lado * lado);
            printf("Perimetro: %.2f\n", 4 * lado);
            break;
        case 3:
            printf("Digite a base do retangulo: ");
            scanf("%f", &base);
            printf("Digite a altura do retangulo: ");
            scanf("%f", &altura);
            printf("Area: %.2f\n", base * altura);
            printf("Perimetro: %.2f\n", 2 * (base + altura));
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
 	//Esperando o <ENTER> p/sair
    getchar();
    return 0;
}
