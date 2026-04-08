#include <stdio.h>
#include <conio.h>

int main(){
	float A,B,X,MED;
		
	printf("Digite o 1º número: ");
	scanf("%f", &A);
	printf("Digite o 2º número: ");
	scanf("%f", &B);
	X=A+B;
	printf("A soma é: %.2f \n",X);
	MED = X/2;
	printf("A média é: %.2f",MED);
	getch();
}
