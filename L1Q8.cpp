#include <stdio.h>
int main() {
	//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
	//Aluno: Eduardo Clinio 
	//Lista 01 - Questão 8
	
	//Declarando as variáveis
    float altura, peso, imc;
     //Recebendo as variáveis
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    printf("Digite seu peso em quilogramas: ");
    scanf("%f", &peso);
     //Calculando o índice
    imc = peso / (altura * altura);
    printf("Seu IMC e: %.2f\n", imc);
    //Testando os índices e classificando
    if (imc <= 18.5) {
        printf("Classificacao: abaixo do peso normal.\n");
    } else if (imc <= 25) {
        printf("Classificacao: peso normal.\n");
    } else if (imc <= 30) {
        printf("Classificacao: peso acima do normal.\n");
    } else {
        printf("Classificacao: peso excessivo.\n");
    }
    //Esperando o <ENTER> p/sair
    getchar();
    return 0;
}
