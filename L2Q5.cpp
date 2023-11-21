#include <stdio.h>

//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 02 - Questão 5) Faça um programa que leia vários inteiros positivos e mostre, no final, a soma dos números pares e a soma dos números ímpares. 
// O programa para quando entrar um número maior que 1000.

//SP = Soma dos Pares, SI = Soma dos Ímpares

#include <stdio.h>

int main() {
    int num=1, sp = 0, si = 0;

    printf("Digite numeros inteiros positivos (para sair digite maior que 1000):\n");

//Não consegui sair daqui ***
    while (num <= 1000) 
        scanf("%d", &num);
        if (num % 2 == 0){
            sp =sp+num;
        } else {
            si =si+num;
        }
    
    printf("A soma dos numeros pares é: %d\n", sp);
    printf("A soma dos numeros impares é: %d\n", si);

    return 0;
}


