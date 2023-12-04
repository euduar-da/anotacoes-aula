int *cria_variavel()
{
    int variavel = 5;
    return &variavel; // retorna o endereço da variável
}

int main()
{
    int *ponteiro = cria_variavel();
    printf("o valor da variavel: %d", *ponteiro);
    return 0;
}