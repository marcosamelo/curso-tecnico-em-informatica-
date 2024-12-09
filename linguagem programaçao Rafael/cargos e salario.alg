Algoritmo "semnome"

Var
Cargo:caractere
cod_cargo:inteiro
Sal_atual,val_aumento,Val_sal:real


Inicio
escreva ("digite salario atual: ")
leia (sal_atual)
escreva("digite o codigo do cargo do funcionário: ")
leia (cod_cargo)
val_aumento:=(sal_atual*10)/100
val_sal:=(sal_atual+val_aumento)

se (cod_cargo =1)entao
cargo := "Escriturário"
senao
 se (cod_cargo =2) entao
cargo := "Secretária"
senao
se (cod_cargo =3)entao
cargo := "caixa"
senao
 se (cod_cargo =4) entao
cargo := "Gerente"
senao
 se (cod_cargo =5) entao
cargo := "Diversos"
senao (cod_cargo <1) e (cod_cargo>5)
cargo:= "cargo inexistente"
    fimse
    fimse
    fimse
    fimse
    fimse


 escreval("Para o cargo de:",cargo)
 escreval("o valor do aumento foi de"," R$",val_aumento, "reais")
 escreval("O novo salario e de ","R$", val_sal, "reais")

 
 
Fimalgoritmo