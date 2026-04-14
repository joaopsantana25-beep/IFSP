/*
6. Fazer o algoritmo que leia os quocientes de uma equação do 2° grau, calculem e
mostrem as suas raízes. Obs: equação do 2° grau ? ax2 + bx + c (a ? 0). Se o Delta
for menor que zero deverão informar que não existem raízes reais
*/

#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c, raiz1,raiz2,delta;
	
	printf("Digite o valor do coeficiente a: ");
	scanf("%f",&a);
	
	printf("Digite o valor do coeficiente b: ");
	scanf("%f",&b);
	
	printf("Digite o valor do coeficiente c: ");
	scanf("%f",&c);
	
	delta = (b*b)-(4*a*c);
	
	if (delta<0){
		printf("A equação não possui raízes reais");
	}
	else if (delta ==0){
		raiz1 = (-b)/(2*a);
		printf("A equação possui apenas uma raíz que é: %f",raiz1);
	}
	else{
		raiz1 = (-b + sqrt(delta))/(2*a);
		raiz2 = (-b - sqrt(delta))/(2*a);
		
		printf("A equação possui duas raízes reais que são: %f, %f",raiz1,raiz2);
	}
	
	return 0;
}
