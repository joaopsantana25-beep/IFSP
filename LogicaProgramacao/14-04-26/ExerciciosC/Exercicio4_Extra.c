/*
4. Fazer o algoritmo que leia três números reais distintos e exibam-nos em
ordem crescente.
*/

#include <stdio.h>

int main(){
	float num1,num2,num3,maior,menor,medio,soma;
	
	printf("Digite o primeiro número: ");
	scanf("%f",&num1);
	
	printf("Digite o segundo número: ");
	scanf("%f",&num2);
	
	printf("Digite o terceiro número: ");
	scanf("%f",&num3);
	
	soma= num1+num2+num3;
	
	if(num1<=num2 && num1<=num3){
		menor = num1;
	}
	else if(num2<=num1 && num2<=num3){
		menor = num2;
	}
	else{
		menor=num3;
	}
	
	if(num1>=num2 && num1>=num3){
		maior = num1;
	}
	else if(num2>=num1 && num2>=num3){
		maior = num2;
	}
	else{
		maior=num3;
	}
	
	medio = soma-menor-maior;
	
	printf("A ordem dos números é: %f,%f,%f ",menor,medio,maior);
	
	return 0;
}
