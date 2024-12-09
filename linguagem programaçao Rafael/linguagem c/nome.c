#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main()
{
char nome[30];
int idade;

   printf("DIGITE SEU  NOME  :" );
   scanf("%s",&nome);
   printf("DIGITE SUA IDADE :");  
   scanf("%d",&idade);
   
   printf("O Meu nome %c: %s\n",130,nome);
		printf("E minha idade %c: %d\n", 130,idade);
   
     system ("pause");
   
     return 0;
   
   
   
 
}


