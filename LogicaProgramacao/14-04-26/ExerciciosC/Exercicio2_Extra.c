/*
2. Fazer o algoritmo e o programa Pascal que efetuem o cálculo do reajuste de
salário de um funcionário. Considere que o funcionário deverá receber um
reajuste de 15% caso o seu salário seja menor que 500,00. Se o salário for
maior ou igual a 500,00 mas menor ou igual a 1000,00, o reajuste será de
10%. Caso o salário seja maior que 1000,00, o reajuste será de 5%.
Informar no final o novo salário.
*/

#include <stdio.h>

int main(){
	float salario,reajuste,novoSalario;
	
	printf("Digite o valor do salário do funcionário: ");
	scanf("%f",&salario);
	
	if(salario<500){
		reajuste = 0.15;
	}
	else if(salario<=1000){
		reajuste = 0.10;
	}
	else{
		reajuste = 0.05;
	}
	
	novoSalario = salario + salario*reajuste;
	
	printf("O valor do novo salário com o reajuste é: %.2f",novoSalario);
	
	return 0;
	
}
