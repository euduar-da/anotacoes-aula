#include <stdio.h>
#include <stdlib.h>

typedef struct disciplina{
    char nome;
    float nota;
    int codigo;
}Disciplina; 

typedef struct aluno{
    char nome[20];
    int idade;
    int matricula; 
    Disciplina * materias; //aninhamento da estrutura disciplina na estrutura aluno 
                          //variavel materias do tipo disciplina

}Aluno;

int main (void){

    Aluno * aluno = (Aluno*) malloc(sizeof(Aluno));
    if (aluno == NULL){
        exit(1);
    }
    //alocando memoria para o vetor de disciplinas
    aluno -> materias = (Disciplina*) malloc(2*sizeof(Disciplina)); //aloca as disciplinas do aluno
     if (aluno ->materias == NULL){ 
        exit(1);
    }
   printf("informe os dados do aluno: \n");
   scanf (" %[^\n]", aluno->nome);
   scanf("%d, %d", &aluno->idade, &aluno->matricula);
   //cadastro das disciplinas 
   int index;
   for (index = 0; index <2; index++){
       printf("Cadastro da disciplina %d \n", index+1);
       scanf("%[^\n]", aluno->materias[index].nome);
       scanf("%d", &aluno->materias[index].nota);
       scanf("%d", &aluno->materias[index].codigo);
   }



    //Aluno aluno; //declarando uma variavel do tipo aluno
    //aluno.idade = 19; //acessando a variavel idade dentro do aluno
    //aluno.matricula = 20230;
    //aluno.materias[0].codigo = 98078;
    //printf("%d, %d, %d \n ", aluno.idade, aluno.matricula, aluno.materias[0].codigo);
    return 0;
}