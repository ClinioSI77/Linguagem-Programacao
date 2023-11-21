#include <stdio.h>

//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 02 - Questão 6)  Faça um programa que calcule a média aritmética entre 3 notas de vários alunos de uma turma. 
//O programa deverá perguntar se deve ou não continuar processando um próximo aluno ou não! No final mostre a maior média, a menor média e a média aritmética da turma

// *** Solução com auxílio da internet ***

int main() {
    int cont;
    float n1, n2, n3, media, maior_media = 0, menor_media = 0, media_turma = 0;
    int num_alunos = 0;

    do {
        printf("Digite as 3 notas do aluno:\n");
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 + n2 + n3) / 3;

        if (media > maior_media){
            maior_media = media;
        }

        else{
		    menor_media = media;
        }

        media_turma += media;
        num_alunos++;

        printf("Deseja continuar? (1 - Sim / 0 - Nao)\n");
        scanf("%d", &cont);
    } while (cont != 0);

    printf("Maior media: %.2f\n", maior_media);
    printf("Menor media: %.2f\n", menor_media);
    printf("Media aritmetica da turma: %.2f\n", media_turma / num_alunos);

    return 0;
}
