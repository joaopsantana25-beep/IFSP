Algoritmo "Atividade 14-04-2026"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 14/04/2026

Var

litrosConsumidos,precoCombustivel,desconto,precoTotal: real;
tipoCombustivel: caractere

// Seção de Declarações das variáveis 

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Digite o valor de litros consumidos: ")
leia(litrosConsumidos)

escreva("Digite o tipo de combustível (A - Alcool/G - Gasolina): ")
leia(tipoCombustivel)

se (tipoCombustivel ="A") entao
   precoCombustivel<-4.90

senao
     precoCombustivel<-7.30
fimse

se (litrosConsumidos<=20) entao
   se (tipoCombustivel = "A") entao
      desconto<-0.03

   senao
      desconto<-0.04
   fimse
   
senao
   se (tipoCombustivel = "A") entao
      desconto<-0.05

   senao
      desconto<-0.06
   fimse
fimse

precoTotal<-litrosConsumidos*precoCombustivel*(1-desconto)

escreva("Foram consumidos",litrosConsumidos)
escreva(" litros de combustível do tipo", tipoCombustivel)
escreva(" cujo litro custa R$ ",precoCombustivel)
escreva(" e o valor total é: R$ ",precoTotal)

Fimalgoritmo