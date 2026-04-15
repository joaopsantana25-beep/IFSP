/*
3. Fazer o algoritmo que leia três números inteiros distintos e exibam o menor
deles.
*/

#include <stdio.h>

int main(){
	int num1,num2,num3,menor;
	
	printf("Digite o primeiro número: ");
	scanf("%d",&num1);
	
	printf("Digite o segundo número: ");
	scanf("%d",&num2);
	
	printf("Digite o terceiro número: ");
	scanf("%d",&num3);
	
	if(num1<=num2 && num1<=num3){
		menor = num1;
	}
	else if(num2<=num1 && num2<=num3){
		menor = num2;
	}
	else{
		menor=num3;
	}
	
	printf("O menor número digitado foi o: %d",menor);
	return 0;
}
