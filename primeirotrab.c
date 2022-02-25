#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int x, y, i;
	int quant1= 0, quant2;
	char esc ,venda[100][100], devolucao[100][100];
	float valor_venda[100];
	float valor[100];
	char prod[100][100];
	int quant_venda[100], quant[100];
	float final[100],soma;
	char tecla;
	system("color 3f");
	printf("\t|\t=================================================\t|\n");
	printf("\t|\t               SISTEMA DE CAIXA                     \t|\n");
	printf("\t|\t=================================================\t|\n");
	printf("\t|\t                                                 \t|\n");
	printf("\t|\t       1->Adicionar os produtos do dia             \t|\n");
	printf("\t|\t       2->Venda do produto                         \t|\n");
	printf("\t|\t       3->Devolução                                \t|\n");
	printf("\t|\t       4->Estoque                                  \t|\n");
	printf("\t|\t                                                   \t|\n");
	printf("\t|\t                                                   \t|\n");
	printf("\t| esc->sair                                   \t\t\t|\n");
	
	fflush(stdin);
	do
	{
	
	esc = getch();
switch(esc)
{  

    case '1' :  system("cls");
	
            printf("\t|\t=================================================\t|\n");
	        printf("\t|\t               SISTEMA DE CAIXA                     \t|\n");
	        printf("\t|\t=================================================\t|\n");
	        printf("\n\t\tQuantos produtos deseja cadastrar:(máx.100) ");
	        scanf("%i",&quant1);
	        printf("\n");
	        fflush(stdin);
	        printf("\n\t\tInsira os produtos que estão no estoque:\n ");
	        for (x=0;x<quant1;x++)
			{
			printf("\t\t");
	    	gets(prod[x]);
	    	fflush(stdin);
			}//for
			system("cls");
			
			printf("\t|\t=================================================\t|\n");
	        printf("\t|\t               SISTEMA DE CAIXA                     \t|\n");
	        printf("\t|\t=================================================\t|\n");
	        printf("\n\t\t\t  Adicione o valor dos produtos\n");
	        printf("\n");
	        for (x=0;x<quant1;x++)
	        {
	        printf("\t\t %s\tR$",prod[x]);   scanf("%f",&valor[x]);
	        printf("\n");
	    	fflush(stdin);
	        }//for
	        system("cls");
	        printf("\t|\t=================================================\t|\n");
	        printf("\t|\t               SISTEMA DE CAIXA                     \t|\n");
	        printf("\t|\t=================================================\t|\n");
	        printf("\n\t  Adicione a quantidade que possui de cada produto (máx.100)\n");
	        printf("\n");
	        for (x=0;x<quant1;x++)
	        {
	        printf("\t\t %s\tR$",prod[x]);   printf("%.2f\t quant:",valor[x]); scanf("%i", &quant[x]); 
	        printf("\n");
	    	fflush(stdin);
	        }//for
	        printf("\n\t\tPara voltar ao menu aperte alguma tecla");
 			getch();
 			system("cls");
  			
	printf("\t|\t=================================================\t|\n");
	printf("\t|\t               SISTEMA DE CAIXA                     \t|\n");
	printf("\t|\t=================================================\t|\n");
	printf("\t|\t                                                 \t|\n");
	printf("\t|\t       1->Adicionar os produtos do dia             \t|\n");
	printf("\t|\t       2->Venda do produto                         \t|\n");
	printf("\t|\t       3->Devolução                                \t|\n");
	printf("\t|\t       4->Estoque                                  \t|\n");
	printf("\t|\t                                                   \t|\n");
	printf("\t|\t                                                   \t|\n");
	printf("\t| esc->sair                                   \t\t\t|\n");
	break;


    case '2' : 
    		x=0;
			system("cls");
	        printf("\t|\t=================================================\t|\n");
	        printf("\t|\t               SISTEMA DE CAIXA                     \t|\n");
	        printf("\t|\t=================================================\t|\n");
	        printf("\n\t\t\t  Lista de produtos no estoque\n");
	        for (x=0;x<quant1;x++)
	        {
	        	printf("\t\t %i",quant[x]); printf("\t %s\tR$",prod[x]);   printf("%.2f", valor[x]);
	        	printf("\n");
			}//for
			//do
		//	{
			fflush(stdin);
			printf("\n\t\t Quantos produtos diferentes serão vendidos: ");
			scanf("%i", &quant2);
			fflush(stdin);
			system("cls");
			printf("\t|\t=================================================\t|\n");
	        printf("\t|\t               SISTEMA DE CAIXA                     \t|\n");
	        printf("\t|\t=================================================\t|\n");
	        printf("\n\t\t\t  Lista de produtos no estoque\n");
	        for (x=0;x<quant1;x++)
	        {
	        	printf("\t\t %i",quant[x]);
	        	printf("\t\t %s\tR$",prod[x]);   
				printf("%.2f",valor[x]);
	        	printf("\n");
	        }
	        int certo, perda;
			for (x=0;x<quant2;x++)
		{
			printf("\n\n\t Insira a quantidade, qual produto está sendo vendido e seu valor \n\n");
			printf("\t\t");
	    	scanf("%i",&quant_venda[x]);
			printf("\t\t");
			fflush(stdin);
			gets(venda[x]);
			printf("\t\t");
			printf("R$");
			scanf("%f", &valor_venda[x]);
			certo=0;
			for(i=0; i<quant1; i++)
			if (strcmp(venda[x],prod[i])==0)
				{
				certo=1;
				perda=i;
			}
			if (certo==1)
			{
			quant[perda] = quant[perda] - quant_venda[x] ;	
			final[x]=quant_venda[x]*valor_venda[x];
	    	printf("\t\tO valor a ser pago por %i %s é R$%.2f \n",quant_venda[x],venda[x],final[x]);
	    	i=quant1;
			}
			else 
			{
			printf("\n\t\tPRODUTO NÃO SE ENCONTRA NO ESTOQUE");
}			
}//for
			printf("\n\n\t\tAperte alguma tecla para continuar...");
 			getch();
			
  			for(x=0; x<quant2; x++)
    		soma=soma+final[x];
			system("cls");
			 printf("\t|\t=================================================\t|\n");
	        printf("\t|\t               SISTEMA DE CAIXA                     \t|\n");
	        printf("\t|\t=================================================\t|\n");
			printf("\n\t\t\t  A lista de compras é: \n");
			for(x=0;x<quant2;x++)
			{
			printf("\n\t\t %i  %s  R$%.2f \n",quant_venda[x],venda[x],final[x]);
			
		}//for
		printf("\n\n\t\tO valor final a ser pago é R$%.2f",soma);
		
			printf("\n\n\n\t\tPara voltar ao menu aperte alguma tecla");
 			getch();
 			system("cls");
  			
	printf("\t|\t=================================================\t|\n");
	printf("\t|\t               SISTEMA DE CAIXA                     \t|\n");
	printf("\t|\t=================================================\t|\n");
	printf("\t|\t                                                 \t|\n");
	printf("\t|\t       1->Adicionar os produtos do dia             \t|\n");
	printf("\t|\t       2->Venda do produto                         \t|\n");
	printf("\t|\t       3->Devolução                                \t|\n");
	printf("\t|\t       4->Estoque                                  \t|\n");
	printf("\t|\t                                                   \t|\n");
	printf("\t|\t                                                   \t|\n");
	printf("\t| esc->sair                                   \t\t\t|\n");


	break;


   case '3' : system("cls");
            printf("\t|\t=================================================\t|\n");
	        printf("\t|\t               SISTEMA DE CAIXA                     \t|\n");
	        printf("\t|\t=================================================\t|\n");
	        printf("\n\t\t Qual a quantidade e o produto à ser devolvido: \n");
	        float valor_devolucao[100], final_dev=0;
	        int quant_devolucao[100], teste;
	        printf("\t\t");
	        scanf("%i",&quant_devolucao[x]);
			printf("\t\t");
			fflush(stdin);
			gets(devolucao[x]);
			printf("\t\t");
			printf("\n\t\t   Valor do produto reembolsado (unidade) \n");
			printf("\t\t");
			printf("R$");
			scanf("%f", &valor_devolucao[x]);
			
			final_dev=quant_devolucao[x]*valor_devolucao[x];
			
			printf("\n\n\t         O valor a ser reembolsado por %i %s é de R$%.2f", quant_devolucao[x], devolucao[x], final_dev);
			
	        int dev=0, op, ganho, passar_string;
	        dev=0;
			for(i=0; i<quant1; i++)
			if (strcmp(devolucao[x],prod[i])==0)
				{
				dev=1;
				if (dev==1)
			{	ganho=i;
			quant[ganho] = quant[ganho] + quant_devolucao[x] ;
			i=quant1;	
			}//if
		}
	        	else 
				{  
				i=quant1;
				printf("\n\t\t NÃO TEM ESSE PRODUTO NO ESTOQUE");
			
				teste = quant1;
				quant1 = teste +1;
				op = quant1 -1;
				for (passar_string=0; passar_string<100; passar_string++)
				prod[op][passar_string] = devolucao[x][passar_string];
			
				quant[op] = quant_devolucao[x];
				
				valor[op] = valor_devolucao[x];
			
				}//else
			printf("\n\n\t\t Para voltar ao menu aperte alguma tecla");
 			getch();
 			system("cls");
  		
	printf("\t|\t=================================================\t|\n");
	printf("\t|\t               SISTEMA DE CAIXA                     \t|\n");
	printf("\t|\t=================================================\t|\n");
	printf("\t|\t                                                 \t|\n");
	printf("\t|\t       1->Adicionar os produtos do dia             \t|\n");
	printf("\t|\t       2->Venda do produto                         \t|\n");
	printf("\t|\t       3->Devolução                                \t|\n");
	printf("\t|\t       4->Estoque                                  \t|\n");
	printf("\t|\t                                                   \t|\n");
	printf("\t|\t                                                   \t|\n");
	printf("\t| esc->sair                                   \t\t\t|\n");
		
	
    break;
	case '4' : system("cls");
            printf("\t|\t=================================================\t|\n");
	        printf("\t|\t               SISTEMA DE CAIXA                     \t|\n");
	        printf("\t|\t=================================================\t|\n");
			printf("\t|\t                   ESTOQUE                       \t|\n");
			printf("\t|\t                                                   \t|\n");
			printf("\t|\t   QUANT.\t PRODUTO\tVALOR(R$)\t\t|\n");
			printf("\t|\t                                                   \t|\n");
			for (x=0;x<quant1;x++)
	        {
			printf("\t\t      %i\t\t  %s\t\t R$ %.2f      \t\t \n",quant[x],prod[x],valor[x]);
	        }
	printf("\n\t\tPara voltar ao menu aperte alguma tecla");
 			getch();
 			system("cls");
  		
	printf("\t|\t=================================================\t|\n");
	printf("\t|\t               SISTEMA DE CAIXA                     \t|\n");
	printf("\t|\t=================================================\t|\n");
	printf("\t|\t                                                 \t|\n");
	printf("\t|\t       1->Adicionar os produtos do dia             \t|\n");
	printf("\t|\t       2->Venda do produto                         \t|\n");
	printf("\t|\t       3->Devolução                                \t|\n");
	printf("\t|\t       4->Estoque                                  \t|\n");
	printf("\t|\t                                                   \t|\n");
	printf("\t|\t                                                   \t|\n");
	printf("\t| esc->sair                                   \t\t\t|\n");
	break;
	
	case 27: system("exit");
	break;
	
    default: printf("Opção inválida");
break;

}//switch
}while(esc!=27);


	return 0;
	
}//main
