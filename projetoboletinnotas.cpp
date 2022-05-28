#include <stdio.h>
#include <locale.h>
#include <iostream>

main() 
{
	
	setlocale(LC_ALL,"portuguese");
	int nralunos = 0;
	printf("Quantos alunos você deseja lançar as notas. Máx 10 \n");
	scanf("%d",&nralunos);
	system("cls");

	
	float media[nralunos];
	float p1[nralunos], p2[nralunos], trab1[nralunos], trab2[nralunos], pi[nralunos];
	float mediageral;
	int opcao, opcao2,i=0;
	char nome[nralunos][20];
	
	do 
	{
	
	printf("Porfavor selecione a opcao desejada\n");
	printf("1 - lançar alunos \n");
	printf("2 - lançar notas do aluno \n");
	printf("3 - consultar media geral \n");
	printf("4 - consultar media de aluno \n");
	printf("5 - consultar notas de todos \n");
	printf("0 - sair \n");
	fflush(stdin);
	scanf("%d", &opcao);

	system("cls");
	
	if (opcao==2)
	{
		for (i=0; i<nralunos;i++)
		{
		printf("Informe p1, p2, trab1, trab2 e pi de %s : \n", nome[i]);
		fflush(stdin);
		scanf("%f", &p1[i]);
		fflush(stdin);
		scanf("%f", &p2[i]);
		fflush(stdin);
		scanf("%f", &trab1[i]);
		fflush(stdin);
		scanf("%f", &trab2[i]);
		fflush(stdin);
		scanf("%f", &pi[i]);
		media[i] = ((p1[i] * 0.15) + (p2[i] * 0.15) + (trab1[i] * 0.10) + (trab2[i] * 0.10) + (pi[i] * 0.5));
		system("cls");
			
		}
	}
	else 
		{
			if (opcao==3)
			{
			mediageral = (media[0] + media[1] + media[2] + media[3] + media[4]+ media[5]+ media[6]+ media[7]+ media[8]+ media[9])/nralunos ;
			
			printf("\<Notas Gerais>/\n ");
  			printf("Notas : - { %.2f } - \n", mediageral);
			system("pause");
			system("cls");
			}
			else 
			{
				if (opcao==4)
				{
					printf("informe qual aluno voce deseja ver a nota \n");
					scanf("%d", &opcao2);
					for(i=0; i<nralunos;i++) 
					{
						if (opcao2==i)
						{
						
							
							printf(" -------- Boletim ------------------ \n");
							printf("                                         \n");
							printf(" Notas>                                 \n");
							printf("                                         \n");
							printf(" P1 >    ------------------------ [%.2f]     \n",p1[i]);
							printf(" P2 >    ------------------------ [%.2f]     \n", p2[i]);
							printf(" Trab1 > ---------------------- [%.2f]     \n", trab1[i]);
							printf(" Trab2 > ---------------------- [%.2f]     \n",trab2[i]);
							printf(" Pi >    ------------------------- [%.2f]     \n",pi[i]);
							printf(" Media > ---------------------- [%.2f]     \n", media[i]);
							
							system("pause");
							system("cls");
						}
					}
				}
				else 
				{
					if (opcao==5)
					{
						for(i=0; i<nralunos;i++) 
						{
							printf("aluno : %s nota:%.2f %.2f %.2f %.2f %.2f \n ", nome[i],p1[i], p2[i], trab1[i],trab2[i],pi[i]);
							
						}
							system("pause");
							system("cls");
					}
					else
					{
						if (opcao==1)
						{
						
							for (i=0; i<nralunos;i++)
						{	
							printf("informe o nome do aluno : \n");
							scanf("%s", &nome[i]);
						}
						system("pause");
							system("cls");
						}
					}
				}
			}
		
		}
	
	
	}
	while(opcao !=0);
}
