/*
1. Fazer o algoritmo que leia as duas notas de um aluno e calculem a média
aritmética. Se a média for maior ou igual a 7,0 o aluno está aprovado. Se a
média for menor do que 4,0 o aluno está reprovado. Se o aluno estiver no
intervalo de 4,0 a 7,0, ele estará de exame. Informar a média e a situação
do aluno após os cálculos.
*/

#include <stdio.h>

int main(){
	float nota1,nota2,media;
	
	printf("Digite o valor da primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite o valor da segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1+nota2)/2;
	
	if(media>=7){
		printf("O valor da média do aluno é %.2f e ele está aprovado",media);
	}
	else if(media<4){
		printf("O valor da média do aluno é %.2f e ele está reprovado",media);
	}
	else{
		printf("O valor da média do aluno é %.2f e ele estará de exame",media);
	}
	
	return 0;
}
