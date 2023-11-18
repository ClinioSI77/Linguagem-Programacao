#include <stdio.h>
int main() {
	//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
	//Aluno: Eduardo Clinio 
	//Lista 01 - Questão 1
	
	//Declarando a variável
    float numreal;
    //Recebendo a variável
    printf("Digite numero: ");
    scanf("%f", &numreal);
     //Testando o número real
    if (numreal > 0) {
        printf("O numero %.1f e maior que zero.\n", numreal);
    } else if (numreal < 0) {
        printf("O numero %.1f e menor que zero.\n", numreal);
    } else {
        printf("O numero digitado e igual a zero.\n");
    }
    //Esperando o <ENTER> p/sair
    getchar();
	return 0;
}
