Algoritmo "numeros"

Var
i,negativo,positivo,numero:inteiro


Inicio
para i:= 1 ate 3 faca
escreva ("digite :",i,"numero")
leia(numero)
se numero> 0 entao
positivo := positivo+1
senao
negativo := negativo+1
fimse
fimpara
escreval("Total de numero positivos:",positivo)
escreval("Total de numero negativos:",negativo)

  
  


Fimalgoritmo