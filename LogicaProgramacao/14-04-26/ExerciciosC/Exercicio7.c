/*
7. Fazer o algoritmo que leia três valores. Verificar se eles podem ser lados de um
triângulo (um lado não pode ser maior que a soma dos outros dois). Em caso
afirmativo, informar qual o tipo de triângulo formado escaleno (quando possui
todos os lados diferentes), eqüilátero (todos os lados iguais) ou isósceles (dois
lados iguais). Caso não formem um triângulo, informar com a mensagem “ Não
formam um triângulo”.
*/

#include <stdio.h>

int main(){
	float lado1,lado2,lado3;
	bool status = false;
	
	printf("Digite o valor do primeiro lado do triângulo: ");
	scanf("%f",&lado1);
	
	printf("Digite o valor do segundo lado do triângulo: ");
	scanf("%f",&lado2);
	
	printf("Digite o valor do terceiro lado do triângulo: ");
	scanf("%f",&lado3);
	
	if(lado1<(lado2+lado3) && lado2<(lado1+lado3) && lado3<(lado1+lado2)){
		status = true;
	}
	
	if (status){
		if(lado1==lado2 && lado2==lado3){
			printf("É um triângulo equilátero");
		}
		else if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3 ){
			printf("É um triângulo escaleno");
		}
		else{
			printf("É um triângulo isóceles");
		}
	}
	else{
		printf("Não é um triângulo");
	}
	
	return 0;
}
