/*
6. Fazer o algoritmo que leia três números inteiros distintos e exibam-nos em
ordem decrescente
*/


#include <stdio.h>

int main(){
	int num1,num2,num3,maior,menor,medio;
	
	printf("Digite o primeiro número: ");
	scanf("%d",&num1);
	
	printf("Digite o segundo número: ");
	scanf("%d",&num2);
	
	printf("Digite o terceiro número: ");
	scanf("%d",&num3);
	
	
	if(num1<=num2 && num1<=num3){
		menor = num1;
		if(num2<=num3){
			medio=num2;
			maior=num3;
		}
		else{
			medio=num3;
			maior=num2;
		}
	}
	else if(num2<=num1 && num2<=num3){
		menor = num2;
		if(num1<=num3){
			medio=num1;
			maior=num3;
		}
		else{
			medio=num3;
			maior=num1;
		}
	}
	else{
		menor=num3;
		if(num1<=num2){
			medio=num1;
			maior=num2;
		}
		else{
			medio=num2;
			maior=num1;
		}
	}
	

	
	printf("A ordem dos números é: %d,%d,%d ",maior,medio,menor);
	
	return 0;
}
