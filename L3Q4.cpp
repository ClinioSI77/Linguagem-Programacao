#include <stdio.h>
//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 03 - Questão 4). Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.A (Progressão Aritmética), 
//armazenando esses valores em um vetor de tamanho 10.


int main() {
	
//Razão (r), Primeiro número(ni), Vetor (vpa)
    int ix, ni, r, vpa[10];
   
    printf("Digite o numero inicial: ");
    scanf("%d", &ni);
    printf("Digite a razao: ");
    scanf("%d", &r);

// Termos da P.A.
    for (ix = 0; ix < 10; ix=ix+1) {
        vpa[ix] = ni + ix * r;
    }

     printf("Os termos da P.A. sao:\n");
    for (ix = 0; ix < 10; ix=ix+1) {
        printf("%d ", vpa[ix]);
    }
    printf("\n");

    return 0;
}
