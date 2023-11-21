#include <stdio.h>
//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 03 - Questão 2) . Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o menor, e seu valor.

int main() {
    int v, menor, vetor[10];

// Utilizando o For, pois conheço as repetições
    for (v = 0; v < 10; v = v + 1) {
        printf("Digite o %d numero: ", v + 1);
        scanf("%d", &vetor[v]);
    }

    menor = vetor[0];
    for (v = 1; v < 10; v = v + 1) {
        if (vetor[v] < menor) {
            menor = vetor[v];
        }
    }

    for (v = 0; v < 10; v = v + 1) {
        if (vetor[v] == menor) {
            printf("O menor numero e o %d elemento do vetor e seu valor e %d.\n", v + 1, menor);
            break;
        }
    }

    return 0;
}
