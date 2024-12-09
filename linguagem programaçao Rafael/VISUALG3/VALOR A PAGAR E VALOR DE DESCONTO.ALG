Algoritmo "valor a pagar e valor de desconto"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 


Var
preco_prod, perc_desc,vlapagar,vldesc:real



Inicio
escreva("preço do produto:")
leia (preco_prod)
escreva("percentual de desconto:")
leia(perc_desc)
vldesc :=(preco_prod*perc_desc)/100
vlapagar :=(preco_prod-vldesc)
escreva("valor a pagar R$",vlapagar:3:2," ","valor de desconto","R$",vldesc:2:2)
fimalgoritmo
