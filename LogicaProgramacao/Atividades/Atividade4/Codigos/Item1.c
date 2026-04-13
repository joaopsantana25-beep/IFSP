#include <stdio.h>
#include <conio.h>

int main(){
    int pesoKg,pesoGramas,novoPeso;
    
    printf("Digite o seu peso: ");
    scanf("%i",&pesoKg);
    pesoGramas=pesoKg*1000;
    novoPeso = pesoGramas*1.15;
    printf("Seu peso em gramas é: %ig",pesoGramas);
    printf("\nSeu peso se você engordar 15% é: %ig",novoPeso);
    
}