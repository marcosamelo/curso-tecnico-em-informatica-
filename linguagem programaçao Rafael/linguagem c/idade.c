#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main()
{
	int ano_nasc, ano_atual,resultado;
	
	printf("Digite o ano de  Nascimento:");
	scanf("%d",&ano_nasc);
	printf("Digite o ano atual:");
	scanf("%d",&ano_atual);
	
	
	resultado=(ano_atual-ano_nasc);

	
	printf("voce tem:%d\n",resultado,"de idade");
	
	
	

   
     system ("pause");
   
     return 0;
   
   
   
 
}


