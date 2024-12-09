Algoritmo "hollerith"

// Professor   : RAFAEL


Var
   Sal_bruto,Sal_liquido,inss,fgts,horas_trab,horas_extras,val_hora:real


Inicio
   escreva("horas trabalhadas:")
   leia (horas_trab)
   escreva("horas extras:")
   leia(horas_extras)
   escreva("valor pago por hora:")
   leia(val_hora)
   sal_bruto:=(horas_trab+(horas_extras*(1+1)))*val_hora
   inss :=(sal_bruto*0.09)
   fgts:=(sal_bruto*0.08)
   sal_liquido:=(sal_bruto-inss)
   escreval("valor Salario bruto"," ","R$",Sal_bruto:4:2)
   escreval("valor desc. INSS"," ","R$",inss:4:2)
   escreval("valor desc. FGTS"," ","R$",fgts:4:2)
   escreval("valor Salario liquido"," ","R$",sal_liquido:4:2)
   
fimalgoritmo
