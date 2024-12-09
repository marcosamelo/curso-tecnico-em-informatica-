#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio_ext.h>

int main(){
int i,j;
    
struct produto {
    int codigo;
    char nome[80];
    int qtde;
    float valor;
    float total;
    
};
struct  produto ficha[4];
int aux ;

for (i=0;i<4;i++){

printf ("informe o codigo= ");
scanf ("%d", &ficha[i].codigo);
printf ("\n informe o nome do produto:");
__fpurge(stdin);'   '   
fgets(ficha[i].nome,80, stdin);
printf("\n informe a quatidade");
scanf("%d", &ficha[i].qtde);
printf("\n informe o valor ");
scanf("%f", &ficha[i].valor);
//ficha.total=ficha.valor*ficha.qtde;
}


for (i=0;i<4;i++){


printf("codigo=%d", ficha[i].codigo);
printf("\n nome =%s", ficha[i].nome);
printf("\n Quantidade=%d", ficha[i].qtde);
printf("\n Valor =%f", ficha[i].valor);
//printf("\n total =%f", ficha.total);



}
}       


