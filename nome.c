#include<stdio.h>
#include<stdlib.h>

int main(){
    char * nome = (char *) malloc(50*sizeof(char));
    if(nome ==NULL){
        exit(1);
    }
    printf("Digite seu nome: \n");
    scanf("%[^\n]", nome);
    free(nome);
    return 0;
   // printf("o nome digitado foi: %s \n ", nome);
}

