#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}
int subtracao(int a, int b)
{
    return a - b;
}
int multip(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int calcula(int x, int y, int (*operacao)(int, int))
{
    return (*operacao)(x, y);
}
void print_Menu(){
    vo
}
int main()
{
    int resultado = calcula(5, 3, soma);
    int resultsub = calcula(5, 3, subtracao);
    int resultmultip = calcula(5, 3, multip);
    int resultdiv = calcula(5, 3, div);
    printf("resultado %d %d  %d  %d ", resultado, resultsub, resultmultip, resultdiv);
    return 0;
}