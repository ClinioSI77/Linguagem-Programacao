#include <stdio.h>
int main() {
	//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
	//Aluno: Eduardo Clinio 
	//Lista 01 - Questão 2
	
	//Declarando a variável
    char nome[35];
    int idade;
    //Recebendo a variável
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    //Testando as idades e classificando as faixas
    if (idade <= 13) {
        printf("%s e uma crianca.\n", nome);
    } else if (idade <= 20) {
        printf("%s e um adolescente.\n", nome);
    } else {
        printf("%s e um adulto.\n", nome);
    }
    //Esperando o <ENTER> p/sair
    getchar();    
    return 0;
	
}
