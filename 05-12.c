#include <stdlib.h>
#include <stdio.h>
int main(void)
{

    int *vetor = malloc(3 * sizeof(int)); // retorna o endereço de memoria da primeira posição do vetor;
    if (vetor == NULL)
    {

        printf("Erro na alocacao de memoria");
        exit(1);
    }
    free(vetor);
    return 0;
}


