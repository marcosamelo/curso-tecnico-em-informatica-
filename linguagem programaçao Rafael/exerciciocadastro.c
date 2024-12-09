#include <stdio.h>


int main()
{
        int opcao;
    
        
		int i=0;
		int c=0;
		
		int vetor[50];
		int resposta=1;
	    
		
	do
	
	//MENU
        {
            printf("\n  Menu de Opcoes \n");
            printf("\n -----------------\n");
            printf("1. Cadastrar Codigo  \n");
            printf ("2. Imprimir \n");
          printf ("3. Apagar \n");
            printf("\n -----------------\n");
            printf("\n * Informe Opcao Desejada: *\n");
         
            scanf("%d", &opcao);
            
            
            
//ESCOLHA


  switch( opcao )
            //CASO
            {
                
                        
    case 1:
                      
		    printf("\n Bem Vindo \n"); 
		    
		      do {
			 printf("informe o valor da posicao %d --",i+1); 
			          scanf("%d",&vetor[i]); 
			          printf("\n **************************\n");
			          
				 printf("\n Deseja cadastrar mais ? 1-SIM  /  2-NAO\n ");
                    scanf("%d",&resposta);
                      i++;                        
                    
} while(resposta == 1);

			  
break; 
			    
			  		
		
	    case 2:
            printf ("\n IMPRIMIR \n");
                	
                  for(c=0;c<i;c++){
                    printf("[%d]=%d",c+1,vetor[c]);
                    printf("\n");
                    }
                  
               
                 	
                  
                  
                  
                break;  
                
                  
                  case 3:
                  	printf("APAGAR");
                           system("cls || clear");
             break;
            

                        
                default:
                     
                        printf("Opcao invalida! Tente novamente.\n");
            }
        } while(opcao<5);
}




