/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
2. Fazer o algoritmo que leia dois números inteiros distintos e mostrem o menor deles.
*/

#include <stdio.h>

int main(){
    int num1,num2,menor;
    
    printf("Digite o primeiro número: ");
    scanf("%i",&num1);
    
    
    printf("Digite o segundo número: ");
    scanf("%i",&num2);
    
    if(num1<=num2){
        menor = num1;
    }
    else{
        menor=num2;
    }
    
    printf("O menor número digitado é: %d",menor);

    return 0;
}