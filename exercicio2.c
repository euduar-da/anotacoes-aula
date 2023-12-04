void incrementa(int *ponteiro){
    (*ponteiro)++;
}

int main (){
    int variavel = 5;
    incrementa(&variavel);
    printf("o valor da variavel: %d", variavel);
}

int incrementa(int valor){
    return (++valor);
}