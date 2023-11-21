#include <stdio.h>
//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 02 - Questão 4) Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial, em gramas, 
//fazer um programa em C que calcule o tempo necessário para que essa massa se torne menor que 0,5 grama. 
//O programa em C deve escrever a massa inicial, a massa final e o tempo calculado em horas, minutos e segundos.

//*** Resolução com auxílio da internet ***


//Mi = Massa inicial. Ma = Massa atual

int main() {
    float mi, ma;
    int seg = 0, min = 0, h = 0;

    printf("Digite massa inicial em gramas: ");
    scanf("%f", &mi);

    ma = mi;

    while (ma >= 0.5) {
        ma =(ma/2);
        seg =(seg+50);

        if (seg >= 60) {
            min = min+((seg)/60);
            seg %= 60;
        }
        if (min >= 60) {
            h = h+((min)/60);
            min %= 60;
        }
    }
    printf("Massa inicial: %.2fg\n", mi);
    printf("Massa final: %.2fg\n", ma);
    printf("Tempo necessario para massa ficar menor que 0.5g: %d horas, %d minutos e %d segundos\n", h, min, seg);
    
    return 0;
}
