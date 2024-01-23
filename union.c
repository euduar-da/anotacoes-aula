#include <stdio.h>
#include <stdlib.h>


//Estrutura para armazenar um documeno por vez
typedef union documentos
{
	char rg[10];
	char cpf[10];
}Documentos;

typedef struct pessoa
{
    char nome[20];
    int idade;
    Documentos doc; //variavel para armazenar o CPF ou RG
}Pessoa;


void dadosPessoa(Pessoa * p)
{
	int op;
    //funçao que preenche os dados de uma variavel do tipo pessoa(struct)
    printf("informe o nome\n");
    scanf("%[^\n]", p->nome); //usa setinha pois eh ponteiro
    printf("\n informe a idade");
    scanf("%d", &p-> idade);
    printf("Digite 1 para CPF e 2 para RG");
    scanf("%d", &op);
    
    if(op == 1){
    	scanf(" %[^\n]", p->doc.cpf);
	}
	else{
		scanf(" %[^\n]", p->doc.rg);
	}
	
	 
}

int main(void)
{
    Pessoa * pessoa = malloc(sizeof(Pessoa));
    dadosPessoa(pessoa);
    printf("cpf = %s \n RG = %s", pessoa->doc.cpf, pessoa->doc.rg);
    free(pessoa);
    return 0;
}