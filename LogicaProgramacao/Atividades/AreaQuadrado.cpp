#include <stdio.h>


float jurosCompostos(float capital,float taxaAnual, int dias){
	float acrescimo = 1;
	float taxaDiaria= taxaAnual/(100*365);

	
	for(int i = 0;i<dias;i++){
		acrescimo*=(1+taxaDiaria);
	}
	
	return (capital*acrescimo);
}


int main(){
	float capital,taxa,M;
	int dias;	
	
	printf("Digite o valor do capital: ");
	scanf("%f",&capital);
	
	printf("\nDigite o valor da taxa de juros anual: ");
	scanf("%f",&taxa);
	
	printf("\nDigite quantos dias passaram desde de que a conta venceu: ");
	scanf("%i",&dias);
	
	M = jurosCompostos(capital,taxa,dias);
	printf("\n--------------------------\n");
	printf("\nO valor a ser pago é: R$ %.2f",M);
	
	return 0;
}
