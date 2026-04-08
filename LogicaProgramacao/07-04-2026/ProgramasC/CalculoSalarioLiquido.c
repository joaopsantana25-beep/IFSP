#include <stdio.h>
#include <conio.h>

int main(){
	float HorasTrabalhadas,SalarioBruto,Desconto,ValorHora,SalarioLiquido;
	
	printf("Digite o quantas horas você trabalhou: ");
	scanf("%f", &HorasTrabalhadas);
	printf("Digite o valor da sua hora: ");
	scanf("%f", &ValorHora);
	SalarioBruto=ValorHora*HorasTrabalhadas;
	Desconto = SalarioBruto*0.08;
	SalarioLiquido = SalarioBruto-Desconto;
	
	
	printf("\n-------------------------------------\n");
	printf("\nCálculo de Salário Líquido\n");
	printf("\nHoras Trabalhadas: %.2f \n",HorasTrabalhadas);
	printf("Valor da hora trabalhada: R$ %.2f \n",HorasTrabalhadas);
	printf("Valor do desconto INSS(8%%): R$ %.2f \n",Desconto);
	printf("Salário Líquido: R$ %.2f \n",SalarioLiquido);
	getch();
		
}
