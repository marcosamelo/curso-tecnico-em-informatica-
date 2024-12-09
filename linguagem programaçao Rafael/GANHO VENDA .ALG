Algoritmo "comissão"

Var
num_matr:inteiro
nome_vend:caractere
sal_fixo,total_vend,comissao,sal_total:real


Inicio
escreva("matricula: ")
leia (num_matr)
escreva ("vendedor: ")
leia (nome_vend)
Escreva ("Salário fixo:")
leia (sal_fixo)
Escreva ("valor das vendas:")
leia (total_vend)
se (total_vend <= 1500) entao
comissao:= (total_vend*(2/100))
senao
comissao:= (total_vend*(4/100))
fimse
sal_total:=(sal_fixo+comissao)
escreval("comissão é de:","r$",comissao,"","Reais")
escreval("salario total:","R$",sal_total," ","Reais")





Fimalgoritmo