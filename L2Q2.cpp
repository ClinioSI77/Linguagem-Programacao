#include <stdio.h>
//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 02 - Questão 2) Escreva um programa em C que lê 15 valores reais, encontra o maior e o menor deles e mostra o resultado

//Declarando as variáveis	
int main() {
    int m1, m2;

//Utilizando o "for" pois o número de operações é conhecido. 10 Multiplicadores dos 10 primeiros números
    for(m1 = 1; m1 <= 10; m1=m1+1) {
        printf("Tabuada do %d\t:",m1);
        for(m2 = 1; m2 <= 10; m2=m2+1) {
            printf("%d x %d = %d\t",m1, m2, m1*m2);
           
        }
//Calculando uma tabela por vez através do getchar. Digitar <ENTER> para continuidade do calculo
        getchar();
        
//Exibindo a tabuada
        printf("\n");
    }

    return 0;
}
