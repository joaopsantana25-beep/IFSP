/*
5. Fazer o algoritmo que leia os quocientes de uma equação do 1° grau, calculem e
mostrem a sua raiz. Obs: equação do 1° grau ? ax + b (a ? 0).
*/

#include <stdio.h>

int main(){
	float a,b,raiz;
	
	printf("Digite o valor do coeficiente a: ");
	scanf("%f",&a);
	
	printf("Digite o valor do coeficiente b: ");
	scanf("%f",&b);
	
	raiz = -b/a;
	
	printf("A raíz da equação é: %f",raiz);
	
	return 0;
}
