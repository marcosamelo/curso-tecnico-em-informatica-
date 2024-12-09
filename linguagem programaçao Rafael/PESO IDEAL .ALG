Algoritmo "peso ideal "

Var
ideal,altura:real
sexo,masculino,feminino:caractere


Inicio
escreva (" digite sexo:")
leia (sexo)
escreva ("altura")
leia (altura)
se (sexo = "masculino") entao
ideal:=((72.7*altura)-58)
senao (sexo = "feminino") entao
ideal:=((62.1*altura)-47)
fimse
escreval ("o peso ideal =",ideal)



Fimalgoritmo