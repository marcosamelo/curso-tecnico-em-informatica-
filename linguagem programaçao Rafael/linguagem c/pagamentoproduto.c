#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main()
{
	float valcompra,numparcelas,parcelas,valtotalparcelas;
	
	printf("informe o valor da compra:");
	scanf("%f",&valcompra);
	printf("informe a quantidade de parcelas:");
	scanf("%f",&numparcelas);
	
	parcelas=(valcompra/numparcelas);
	valtotalparcelas=(parcelas*numparcelas);
	printf(" o valor da compra e de :R$%.2f\n",valcompra);
	printf(" o valor de cada parcela e de :R$%.2f\n",parcelas);
	printf(" o total das parcelas  são de R$%.2f\n",valtotalparcelas);
	
		
	

   
     system ("pause");
   
     return 0;
   
}