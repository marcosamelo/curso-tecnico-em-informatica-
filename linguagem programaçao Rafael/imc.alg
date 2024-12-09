Algoritmo "semnome"
// O indice de massa corporal (IMC) é uma formula utilizada para verificar
// se um adulto está acima do peso, obeso ou abaixo do peso ideal considerável
// saudavel .formula utilizada para calcular o imc e dada pela empressao
//imc=peso/(altura)²

Var
condicao:caractere
sexo:caractere
imc, peso,altura:real


Inicio
escreva ("digite F para sexo  feminino ou  M para masculino: ")
leia (sexo)
escreva ("digite o peso: ")
leia (peso)
escreva ("digite altura: ")
leia (altura)
imc:=(peso/(altura*2))
    se(sexo="f" ) entao
      se (imc <19.1)entao
      condicao:= abaixo do peso
      senao
      se( imc >19.1)e(imc <25.8) entao
      condicao:="no peso normal"
      senao
      se (imc >25.8) e (imc <27.3)entao
      condicao:="marginalmente acima do peso"
      senao
      se (imc> 27.3) e (imc <32.3) entao
      condicao:= "acima do peso ideal"
      senao
      se (imc> 32.3)
      condicao:="obeso"
      fimse
      fimse
      fimse
      fimse
      fimse
    fimse
    se(sexo="m" ) entao
      se (imc <20.7)entao
      condicao:= abaixo do peso
      senao
      se( imc >20.7)e(imc <26.4) entao
      condicao:="no peso normal"
      senao
      se (imc >26.4) e (imc <27.8)entao
      condicao:="marginalmente acima do peso"
      senao
      se (imc> 27.8) e (imc <31.1) entao
      condicao:= "acima do peso ideal"
      senao
      se (imc> 31.1)
      condicao:="obeso"
      fimse
      fimse
      fimse
      fimse
      fimse
    fimse

escreval ( "sexo"," ",sexo," ","imc"," ",imc:2:2," ")
escreval (condicao)

Fimalgoritmo