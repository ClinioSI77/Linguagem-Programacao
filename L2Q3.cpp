#include <stdio.h>
//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 02 - Questão 3) Faça um programa em C que calcula o produto dos números digitados pelo usuário. 
//O programa em C deve permitir que o usuário digite uma quantidade não determinada de números. O programa em C encerra quando o usuário digita o valor zero.

//Declarando as variáveis
int main() {
    float num, p = 1;
    
    printf("Digite numero (Entre com 0 para terminar): ");
    scanf("%f", &num);

//Utilizando o "While" pois não sei o número de operações.    
    while (num != 0) {
        p = num*p;
        printf("Digite numero (Entre com 0 para terminar): ");
        scanf("%f", &num);
    }
  
//Exibindo o resultado 
    printf("O produto dos numeros digitados e: %.1f", p);
    
    return 0;
}
