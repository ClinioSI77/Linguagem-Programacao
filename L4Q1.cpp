#include <stdio.h>
#include <string.h>

//Prof: Cristiano Fuschilo ▲ 2º Período SI-LTPI
//Aluno: Eduardo Clinio 
//Lista 04 - Questão 1
//Faça um programa que leia um nome e imprima as 4 primeiras letras do nome (caso haja)

	int main(){
		char nome [100];
		printf("Digite o seu nome: ");
		scanf("%s", nome);
		nome[4]='\0';
		printf("\n\n As 4 primeiras letras do nome sao: %s", nome);
		return 0;
		}
		
		