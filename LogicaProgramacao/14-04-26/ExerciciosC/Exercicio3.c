/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
3. Fazer o algoritmo que leia dois números inteiros e mostrem o maior deles. Se os
números lidos forem iguais, deverão mostrar a mensagem: “Os números digitados
são iguais”.
*/

#include <stdio.h>

int main(){
    int num1,num2,maior;
    
    printf("Digite o primeiro número: ");
    scanf("%i",&num1);
    
    
    printf("Digite o segundo número: ");
    scanf("%i",&num2);
    
    if(num1>num2){
        maior = num1;
        printf("O maior número digitado é: %d",maior);

    }
    else if(num2>num1){
        maior=num2;
        printf("O maior número digitado é: %d",maior);

    }
    else{
        printf("Os dois números são iguais");
        
    }
    

    return 0;
}