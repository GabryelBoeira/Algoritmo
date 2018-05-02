//Desenvolvimento APS - Algoritimos de Programalção II
//Alunos: Marcelo Henrique Cezario / Gabryel Johnatan Boeira
//E-mails: marcelocezario@gmail.com / gabryel392@gmail.com

//Bilblioteca criada, manter no mesmo diretorio.
#include "APS - Algoritimos de Programação II.h"

int main ()
{
	int iOpcao;
	
	while(true)
	{
		cabmenuprincipal();
		iOpcao=0;
		fflush(stdin);
		printf("Escolha uma das opcoes acima: ");
		scanf("%d", &iOpcao);
				
		switch (iOpcao)
		{
			case 1:
				cabcadastrocc();
				cadastrarcontas ();			
				break;
			case 2:
				cablistarcc();
				if (iNumCadCc==0)
				{
					printf("Sem dados para listar!!\n");
				}
				else
				{
					listarcontas (iNumCadCc);					
				}					
				break;
			case 3:
				cabexcluircc();
				excluircontas ();
				break;
			case 4:
				encerrarprograma();
				break;
			default:
				printf("\nOpcao invalida!\n");
		}
		printf("\n");
	system("pause");
	}
	system("pause");
	return 0;
}
