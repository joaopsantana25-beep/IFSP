#include <stdio.h>

int main() {
	float automovel,tempo,velMed,distancia,litrosUsados;

	automovel=12;


	printf("Digite o tempo gasto na viagem em horas: ");
	scanf("%f",&tempo);
	printf("Digite a velocidade media do automovel: ");
	scanf("%f",&velMed);

	distancia=tempo*velMed;
	litrosUsados=distancia/automovel;

	printf("\nA velocidade media foi de: %.2f km/h",velMed);
	printf("\nO tempo gasto na viagem foi: %.2f h",tempo);
	printf("\nA distancia percorrida na viagem foi: %.2f km",distancia);
	printf("\nA quantidade de litros gastos foi de:  %.2f L",litrosUsados);

}