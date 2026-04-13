#include <stdio.h>

int main() {
	float valorquilowatt,salarioMinimo,energiaConsumida,contaLuz;


	printf("Digite o valor do salário mínimo: ");
	scanf("%f",&salarioMinimo);
	printf("Digite a energia consumida na casa: ");
	scanf("%f",&energiaConsumida);
    
    valorquilowatt=salarioMinimo/1000;
    contaLuz=valorquilowatt*energiaConsumida;

	printf("\nO valor de cada quilowatt é: R$ %.2f",valorquilowatt);
	printf("\nO valor a ser pago pela casa é: R$ %.2f ",contaLuz);
	printf("\nO novo valor a ser pago se houver um desconto de 8% é: R$ %.2f",(contaLuz*0.92));
	printf("\nO novo valor a ser pago se houver um acrescimo de 10% é: R$ %.2f",(contaLuz*1.1));

}