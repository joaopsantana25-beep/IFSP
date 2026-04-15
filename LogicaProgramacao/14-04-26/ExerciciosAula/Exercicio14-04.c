/*
Desenvolver um algoritmo que resolva o problema de uma rede de postos Federal Petróleo, que está vendendo combustíveis com a seguinte tabela de descontos:

    Álcool até 20 litros, desconto de 3% por litro
    Álcool acima de 20 litros, desconto de 5% por litro
    Gasolina até 20 litros, desconto de 4% por litro
    Gasolina acima de 20 litros, desconto de 6% por litro

Usando portugol e linguagem C, escreva um algoritmo que leia o número de litros vendidos
e o tipo de combustível (codificado da seguinte forma: 

A-álcool, G-gasolina), calcule e imprima o numero de litros e o valor a ser pago pelo cliente sabendo-se que
o preço do litro da gasolina é R$ 7,30 
e o preço do litro do álcool é R$ 4,90
*/

#include<stdio.h>

int main(){
	float litrosConsumidos,precoCombustivel,desconto,precoTotal;
	char tipoCombustivel;
	
	printf("Digite o valor de litros consumidos: ");
	scanf("%f",&litrosConsumidos);
	
	printf("Digite o tipo de combustível (A - Alcool/G - Gasolina): ");
	scanf(" %c",&tipoCombustivel);
		
	if(tipoCombustivel =='A'){
		precoCombustivel = 4.90;
	}
	else{
		precoCombustivel = 7.30;
	}
	
	if(litrosConsumidos<=20){
		if(tipoCombustivel=='A'){
			desconto = 0.03;
		}
		else{
			desconto = 0.04;
		}
	}
	else{
		if(tipoCombustivel=='A'){
			desconto = 0.05;
		}
		else{
			desconto = 0.06;
		}
	}
	
	precoTotal = litrosConsumidos*precoCombustivel*(1-desconto);
	
	printf("Foram consumidos %.2f litros de combutível do tipo %c cujo litro custa R$ %.2f e o valor total é: R$ %.2f",litrosConsumidos,tipoCombustivel,precoCombustivel,precoTotal);
	
	return 0;
	
	

}
