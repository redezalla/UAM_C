#include <stdlib.h>
#include <stdio.h>
int main (void)
{
	int num;
	printf("POR FAVOR DIGITE UM NUMERO PARA EU VERIFICAR SE ELE E PAR OU IMPAR");
	scanf("%d" ,&num);
	while (num%2==0)
	{
		printf("\nENQUANTO VOCE DIGITAR UM NUMERO PAR EU NAO VOU PARAR DE TE PEDIR UM NUMERO. DIGITE MAIS UM NUMERO?");
		scanf("%d" ,&num);
		system("cls");
	}
	system("cls");
	printf("\nEITA, ESTE NUMERO SO PODE SER IMPAR, POIS SAI DO LACO DE REPETICAO!!!");
}
