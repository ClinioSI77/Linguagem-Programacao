#include <stdio.h>
//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 03 - Questão 5). Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.G (Progressão Geométrica), 
//armazenando esses valores em um vetor de tamanho 10.

//*** Solução com auxílio da internet

//Razão (r), Progressão Geométrica (pg)
int main() {
    int ix, n, r, pg[10];

    printf("Digite o primeiro termo: ");
    scanf("%d", &n);

    printf("Digite a razao: ");
    scanf("%d", &r);


//Iniciando o primeiro termo digitado pelo usuário
    pg[0] = n; 

    for (ix = 1; ix < 10; ix++) {
        pg[ix] = pg[ix-1] * r;
    }

    printf("Os termos da P.G. sao:\n");
    for (ix = 0; ix < 10; ix++) {
        printf("%d ", pg[ix]);
    }
    printf("\n");

    return 0;
}
