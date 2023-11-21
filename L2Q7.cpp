//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 02 - Questão 7) 

#include <stdio.h>

int main() {
    int num, soma = 0, digito_verificador;

    printf("Digite um número inteiro de n dígitos: ");
    scanf("%d", &num);

    while (num > 0) {
        soma += num % 10;
        num /= 10;
    }

    while (soma >= 10) {
        digito_verificador = 0;
        while (soma > 0) {
            digito_verificador += soma % 10;
            soma /= 10;
        }
        soma = digito_verificador;
    }

    printf("O dígito verificador é: %d\n", soma);

    return 0;
}
