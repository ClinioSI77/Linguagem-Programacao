#include <stdio.h>
//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 02 - Questão 1) Escreva um programa em C que lê 15 valores reais, encontra o maior e o menor deles e mostra o resultado

//Declarando as variáveis	
int main() {
    float num, maior, menor;
    int i;
// Entrando com os números
    printf("Digite 15 valores reais:\n");

// Entrando com o primeiro número
        scanf("%f", &num);
    maior = num;
    menor = num;
// Executando o loop e classificando
    for (i = 0; i < 14; i=i+1) {
        scanf("%f", &num);
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }
// Exibindo o resultado
    printf("O maior: %.1f\n", maior);
    printf("O menor: %.1f\n", menor);

    return 0;
}
