#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main()
{
	float nota1,nota2,nota3,nota4,n1,n2,n3,n4,media;
	
	printf("Digite a nota 1:");
	scanf("%f",&nota1);
	printf("Digite a nota 2:");
	scanf("%f",&nota2);
	printf("Digite a nota 3:");
	scanf("%f",&nota3);
	printf("Digite a nota 4:");
	scanf("%f",&nota4);
	n1=nota1*2;
	n2=nota2*2;
	n3=nota3*4;
	n4=nota4*4;
	media=(n1+n2+n3+n4)/(2+2+4+4);
	printf("a media da nota ponderada foi de:%.2f\n",media);
	
		
	

   
     system ("pause");
   
     return 0;
   
   
   
 
}


