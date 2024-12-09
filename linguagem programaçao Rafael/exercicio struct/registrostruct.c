#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio_ext.h>

int main(){
struct produto {
    int codigo;
    char nome[80];
    int qtde;
    float valor;
    float total;
    
};
struct  produto ficha;
int aux ;

printf ("informe o codigo= ");
scanf ("%d", &ficha.codigo);
printf ("\n informe o nome do produto:");
__fpurge(stdin);
fgets(ficha.nome,80, stdin);
printf("\n informe a quatidade");
scanf("%d", &ficha.qtde);
printf("\n informe o valor ");
scanf("%f", &ficha.valor);
ficha.total=ficha.valor*ficha.qtde;


printf("codigo=%d", ficha.codigo);
printf("\n nome =%s", ficha.nome);
printf("\n Quantidade=%d", ficha.qtde);
printf("\n Valor =%f", ficha.valor);
printf("\n total =%f", ficha.total);



}
       


