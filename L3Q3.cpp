#include <stdio.h>
//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 03 - Questão 3)  Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, qual é o menor e que seus valores.

//***Solução com auxílio da internet***

int main() {
    int v, maior, menor, pma, pme, vetor[10];

//Utilizando o For, pois conheço as repetições
    for (v = 0; v < 10; v = v + 1) {
        printf("Digite o %d numero: ", v + 1);
        scanf("%d", &vetor[v]);
    }

//Buscando o maior número (pma)
    maior = vetor[0];
    pma = 0;
    for (v = 1; v < 10; v = v + 1) {
        if (vetor[v] > maior) {
            maior = vetor[v];
            pma = v;
        }
    }

//Buscando o menor número (pme)
    menor = vetor[0];
    pme = 0;
    for (v = 1; v < 10; v = v + 1) {
        if (vetor[v] < menor) {
            menor = vetor[v];
            pme = v;
        }
    }

//Exibe o resultado do programa
    printf("O maior numero e o %d elemento do vetor e seu valor e %d.\n", pma + 1, maior);
    printf("O menor numero e o %d elemento do vetor e seu valor e %d.\n", pme + 1, menor);

    return 0;
}
