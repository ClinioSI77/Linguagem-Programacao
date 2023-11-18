#include <stdio.h>
int main() {
	
	//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
	//Aluno: Eduardo Clinio 
	//Lista 01 - Questão 3
	
	//Declarando variáveis
    int codigo;
    float lado, base, altura, base_maior, base_menor, raio, area, circunferencia;
    
    //Recebendo as variáveis e escolhendo o código
    printf("Digite o codigo (1: Area quadrado, 2: Area retangulo, 3: Area trapezio, 4: Area circulo, 5: Circuferencia Circulo): ");
    scanf("%d", &codigo);
    
    //Calculando area do código escolhido
   switch (codigo) {
        case 1:
            printf("Digite o valor do lado do quadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("A area do quadrado e: %.2f\n", area);
            break;
        case 2:
            printf("Digite o valor da base do retangulo: ");
            scanf("%f", &base);
            printf("Digite o valor da altura do retangulo: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("A area do retangulo e: %.2f\n", area);
            break;
        case 3:
            printf("Digite o valor da base maior do trapezio: ");
            scanf("%f", &base_maior);
            printf("Digite o valor da base menor do trapezio: ");
            scanf("%f", &base_menor);
            printf("Digite o valor da altura do trapezio: ");
            scanf("%f", &altura);
            area = ((base_maior + base_menor) / 2) * altura;
            printf("A area do trapezio e: %.2f\n", area);
            break;
        case 4:
            printf("Digite o valor do raio do circulo: ");
            scanf("%f", &raio);
            area = 3.1415 * (raio * raio);
            printf("A area do circulo e: %.2f\n", area);
            break;
        case 5:
            printf("Digite o valor do raio do circulo: ");
            scanf("%f", &raio);
            circunferencia = 2 * 3.1415 * raio;
            printf("A circunferencia do circulo e: %.2f\n", circunferencia);
            break;
        default:
            printf("Codigo invalido!\n");
            break;
    }
	//Esperando o <ENTER> p/sair
    getchar();
    return 0;
}
