#include <stdio.h>

//Estrutura union
typedef union tipDados
{
	int meuint;
	float meufloat;	
}Dados;


int main(void)
{
	Dados uniao;
	printf("digite os dados");
	scanf("%d %f", &uniao.meuint,&uniao.meufloat);
	printf("os dados informados foram: \n meuint = %d \n meufloat = %f", uniao.meuint, uniao.meufloat);
	return 0;	
}

