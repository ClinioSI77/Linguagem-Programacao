#include <stdio.h>
//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 03 - Questão 7) Peça ao usuário que preencha um vetor de 20 números reais! Para esses números dizer quantos são pares e quantos são ímpares.

int main() {
    int ix, p = 0, i = 0;
    int vetor[6];

    for (ix = 0; ix < 6; ix++) {
        printf("Digite o %d numero: ", ix + 1);
        scanf("%d", &vetor[ix]);
    }

//Identificando quantos números são pares(p) e quantos são ímpares(i)

    for (ix = 0; ix < 6; ix++) {
        if (vetor[ix] % 2 == 0) {
            p++;
        } else {
            i++;
        }
    }

      printf("Existem %d numeros pares e %d numeros impares no vetor.\n", p, i);

    return 0;
}
