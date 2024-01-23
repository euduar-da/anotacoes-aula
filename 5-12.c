#include<stdio.h>
#include<stdlib.h> //funções malloc, calloc, free e exit

int main(void){
    int tamanho = 5;
    int contador;
    int *vetor = (int*) malloc(tamanho*sizeof(int));
    if(vetor == NULL){
        exit(1); //aborta a execução do programa
    }
    else{
        printf("alocacao realizada com sucesso \n");
    }

    //ler od dados do vetor:
    printf("Digite os valores do vetor \n");
    for(contador = 0; contador <tamanho; contador++){
         scanf("%d", &vetor[contador]);
    }
    free(vetor);
  
}
//scanf("%[^\n]" vai armazenar tudo até a pessoa apertar o enter)