#include <stdio.h>
#include <stdio.h>
#include <string.h>
#define TF 1000

struct cliente{
	char nome[30];
	int rg;					
};
struct quarto{
	int numquarto;
	char quarto[10];
	
};
struct servico{
	int cod;
	char servico[30];
	
};
struct reserva{
	int numreserva,numdias;
	float valor;
	struct cliente c;
	
	
}; 
int menuprincipal()
{
	int resp;
printf("=====MENU====");
printf("\n1-Cadastro");
printf("\n2-Reserva");
printf("\n3-Lancamento");
printf("\n4-Relatorios\n");
printf("5-Finalizar\n");
printf("Digite a opcao desejada:\n");
scanf("%d",&resp);
	
	
return resp;
}

int cadastro(int resp)
{	
	printf("\n1-Quarto");
	printf("\n2-Hospede");
	printf("\n3-Servicos");
	printf("\n4-Retornar\n");
	printf("Digite a opcao desejada:\n");
	scanf("%d",&resp);
	switch(resp)
	{
		 case 1: 
				 		printf("\nDigite o numero do quarto que deseja:");
	    	    		printf("\nQuarto ocupado\n");
	    	           	printf("\nQuarto Cadastrado com sucesso\n");								
	    	            break;
	    	            
	    	    case 2: 	    
						printf("\nDigite o RG:"); 
						printf("\nHospede ja cadastrado\n");
	    	      		printf("\nDigite o Nome do Hospede:");
	    	           	printf("\nHospede Cadastrado com sucesso\n");
					   	break;
	     	     
	    	    case 3:printf("\n---Digite o Codigo do servico---\n");
	    	    		printf("\n---Digite o nome---");
						printf("\nServico Cadastrado com sucesso\n");
						
						break;
	
	
	}	
}
int reserva(int resp)
{
	printf("\n1-incluir"); 
	printf("\n2-Alterar");
	printf("\n3-Excluir");
	printf("\n4-Retornar\n");
	printf("Digite a opcao desejada:\n");
	scanf("%d",&resp);	  
	 
        switch(resp)
        {
        	
        	case 1: printf("Qual a reserva?\n");
        	 		printf("\nReserva ja existe!\n");
	    	        printf("\nQual o RG"); 
        	 		printf("\nQuantos dias hospedado?");
        	 		printf("\nValor total:");
        	 		printf("\nReserva efetuada com sucesso\n");
	    	       	printf("\nHospede nao cadastrado\n");
        	break;
        	
        	
        	case 2: 
					printf("Qual reserva deseja alterar?\n"); 
					printf("\nQual o RG:");
        	 			printf("\nDigite o Nome do Hospede:");
        	 		printf("\nQuantos dias hospedado?");
        	 		printf("\nValor total:");
        	 		printf("\nReserva alterada com sucesso\n");
					printf("\nReserva nao encontrada\n");
        		break;
        		
        		
        	case 3:
        	
					printf("Qual reserva deseja excluir?\n"); 
					 printf("\nA reserva ja possui lancamentos\n");
					printf("\nReserva excluida com sucesso\n");
						printf("Reserva nao encontrada\n");

        		
        		break;
			}
}
int lancamento(int resp)
{
	
	
	printf("\n1-incluir"); 
	printf("\n2-Alterar");
	printf("\n3-Excluir");
	printf("\n4-Retornar\n");
	printf("Digite a opcao desejada:\n");
	scanf("%d",&resp);	  
	  
     	switch(resp)
     	{
     	
     		case 1:	printf("\nDigite o numero do lancamento:");

					printf("Digite o numero da reserva"); //verificar a reserva
					
						printf("Digite o codigo do servico\n");
						printf("100--Copa\n");
						printf("200--Lavanderia\n");
						printf("300--Garagem\n");
							printf("Digite o Valor");
							printf("\nLancamento efetuado com sucesso\n");

							printf("Servico nao encontrado");

						printf("Reserva nao encontrada");
				
					
     			break;
     			
     		case 2:

     				printf("\nQual lancamento deseja alterar?\n"); // FUNCIONANDO
		        	 		printf("\nDigite o numero da reserva\n");
								printf("\nDigite o servico");// verificacao do servico
										printf("\nDigite o novo valor:"); // alteracao do valor
										printf("\nLancamento efetuado com sucesso\n"); 
											printf("\nServico nao encontrado");
												printf("\nReserva nao encontrada");
													printf("\nLancamento nao encontrado\n");
				break;
				
			case 3:		
						printf("\nQual o lancamento?\n");
						 printf("\n Lancamento excluido com sucesso!\n");
						printf("Lancamento nao encontrado");
				break;
				
				
     		
		}

}
int relatorios(int resp)
{
	printf("\n1-Quarto Ocupados");
	printf("\n2-Quartos Liberados");
	printf("\n3-Hospedes");
	printf("\n4-Servicos");
	printf("\n5-Retornar\n");
	printf("Digite a opcao desejada:\n");
	scanf("%d",&resp);	  
				switch(resp)
				{
					
					case 1:	printf("\n===QUARTOS OUCUPADOS===\n");
						
						
						break;
						
					case 2:printf("\n===QUARTOS LIBERADOS===\n");
						

						
						break;
						
					case 3:
							printf("\nHospedes cadastrados:\n");
					 	
						break;
					
					case 4: printf("\nO servico [100]--COPA foi utilizado [%d] vezes\n");
							printf("O servico [200]--LAVANDERIA foi utilizado [%d] vezes\n");
							printf("O servico [300]--GARAGEM foi utilizado [%d] vezes\n");
						break;	
					
					}
}

main()
{
	int resp,resp2;
	resp=menuprincipal();
	switch(resp)
	{
		case 1:resp2=cadastro(resp);
		break;
		case 2: reserva(resp);
		break;
		case 3: lancamento(resp);
		break;	
		case 4: relatorios(resp);
		break;
	}

	
	
	
	

	
}
