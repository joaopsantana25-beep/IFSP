/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
4. Fazer o algoritmo que leia dois números inteiros e mostrem o menor deles. Se os
números lidos forem iguais, deverão mostrar a mensagem: “Os números digitados
são iguais"
*/

#include <stdio.h>

#include <stdio.h>

int main(){
    int num1,num2,menor;
    
    printf("Digite o primeiro número: ");
    scanf("%i",&num1);
    
    
    printf("Digite o segundo número: ");
    scanf("%i",&num2);
    
    if(num1<num2){
        menor = num1;
        printf("O menor número digitado é: %d",menor);

    }
    else if(num2<num1){
        menor=num2;
        printf("O menor número digitado é: %d",menor);

    }
    else{
        printf("Os dois números são iguais");
        
    }
    

    return 0;
}