#include <stdio.h>
int main() {
  //Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
  //Aluno: Eduardo Clinio 
  //Lista 01 - Questão 6
	
  //Declarando as variáveis
  float num1, num2, tot;
  char operacao;
  
  //Inserir dois números
  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);
  printf("Digite o segundo numero: ");
  scanf("%f", &num2);
  //Escolher as opções das operações básicas
  printf("Digite a operacao desejada (+, -, *, x, /): ");
  scanf(" %c", &operacao);
  
  //Efetuar o calculo de acordo com a operação escolhida e imprimir
  switch (operacao) {
    case '+':
      tot = num1 + num2;
      printf("Resultado: %.2f\n", tot);
      break;
    case '-':
      tot = num1 - num2;
      printf("Resultado: %.2f\n", tot);
      break;
    case '*':
    case 'x':
      tot = num1 * num2;
      printf("Resultado: %.2f\n", tot);
      break;
    case '/':
      tot = num1 / num2;
      printf("Resultado: %.2f\n", tot);
      break;
    default:
      printf("Operacao Invalida\n");
  }
   //Esperando o <ENTER> p/sair
  getchar();
  return 0;
}
