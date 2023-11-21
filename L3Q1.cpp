#include <stdio.h>
//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 03 - Questão 1) . Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, e seu valor.



int main() {
    int v, maior, vetor[10];

// Utilizando o For, pois conheço as repetições
    for (v = 0; v < 10; v=v+1) {
        printf("Digite o %d numero: ", v+1);
        scanf("%d", &vetor[v]);
    }
    
    maior = vetor[0];
    for (v = 1; v < 10; v=v+1) {
        if (vetor[v] > maior) {
            maior = vetor[v];
        }
    }
  
    printf("O maior numero e o %d elemento do vetor e seu valor %d.\n", maior, v);

    return 0;
}
