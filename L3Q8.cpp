#include <stdio.h>

//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 03 - Questão 8) . Peça ao usuário que preencha um vetor de 50 números inteiros quaisquer. a. Só os índices pares, b. Só os índices ímpares, c. Todo o vetor de trás para frente


int main() {
    int ix, vetor[50];

    for (ix = 0; ix < 50; ix++) {
        printf("Digite o %d numero: ", ix+1);
        scanf("%d", &vetor[ix]);
    }
//Vetores pares
    printf("Indices pares: ");
    for (ix=2; ix < 50; ix=ix+2) {
        printf("%d ", ix);
    }
    printf("\n");

//Vetores ímpares
    printf("Indices impares: ");
    for (ix = 1; ix < 50; ix=ix+2) {
        printf("%d ", ix);
    }
    printf("\n");

//Vetores de ré
    printf("Vetor de reh: ");
    for (ix = 49; ix >= 0; ix=ix-1) {
        printf("%d ", vetor[ix]);
    }
    printf("\n");

    return 0;
}
