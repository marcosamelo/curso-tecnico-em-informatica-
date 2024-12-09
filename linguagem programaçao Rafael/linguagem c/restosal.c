#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main()
{
	float sal,desp1,desp2,desp3, saltotal;
	
	printf("informe o salario recebido:");
	scanf("%f",&sal);
	printf("informe desp1:");
	scanf("%f",&desp1);
	printf("informe desp2:");
	scanf("%f",&desp2);
	printf("informe desp3:");
	scanf("%f",&desp3);
	
	saltotal= sal-(desp1+desp2+desp3);
	printf(" saldo apos as tres despesas:R$%.2f\n",saltotal);
	
		
	

   
     system ("pause");
   
     return 0;
   
}