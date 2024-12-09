#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio_ext.h>

int main(){
struct produto {
    int codigo;
    char nome[20];
    int qtde;
    float valor;
    float total;
    
};
struct  produto ficha[4];
int menu;
int vetor[50];
int resp=1;
int aux;
int i;
int v;
i = 0;
v=i+1;



        

do{
    printf("***************************\n");
    printf("*  1- Cadastro            *\n");
    printf("*  2- Listar              *\n");
    printf("***************************\n");
    
    
    printf("\nEscolha uma opção:");  
    scanf("%d",&menu);

    switch(menu){        
        case 1:
      
            printf("Cadastro \n");
            resp=1;
            
            while(resp==1){
                
            //    for (i=0;i<4;i++){

                printf ("\n informe o codigo = ");
                scanf ("%d", &ficha[i].codigo);
                printf ("\n informe o nome do produto = ");
                __fpurge(stdin);
                fgets(ficha[i].nome,20, stdin);
                printf("\n informe a quatidade = ");
                scanf("%d", &ficha[i].qtde);
                printf("\n informe o valor =  ");
                scanf("%f", &ficha[i].valor);
                ficha[i].total=ficha[i].valor*ficha[i].qtde;
                
                
            
                printf("Deseja cadastrar novo produto ?sim=1,não=2\n");
                scanf("%d",&resp);
                if (resp==1){
                    
                    i++;
                }
              //  break;
            //    }
            }
           
        
             break;
        case 2:
        
            printf( "LISTAR \n");
            for (i=0;i<4;i++){
                printf("\n codigo = %d", ficha[i].codigo);
                printf("\n nome = %s", ficha[i].nome);
                printf("\n Quantidade = %d", ficha[i].qtde);
                printf("\n Valor = % 0.2f", ficha[i].valor);
                printf("\n total =%f", ficha[i].total);

             }
            break ;
        default :
            printf("opção inválida\n");
    }
}while(menu<3);
    
return (0);


}