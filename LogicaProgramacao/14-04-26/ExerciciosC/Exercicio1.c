/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
1. Fazer o algoritmo que leia dois números inteiros distintos e mostrem o maior deles
*/
#include <stdio.h>

int main(){
    int num1,num2,maior;
    
    printf("Digite o primeiro número: ");
    scanf("%i",&num1);
    
    
    printf("Digite o segundo número: ");
    scanf("%i",&num2);
    
    if(num1>=num2){
        maior = num1;
    }
    else{
        maior=num2;
    }
    
    printf("O maior número digitado é: %d",maior);

    return 0;
}