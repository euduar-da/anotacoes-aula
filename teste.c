int inc(int num)
{
    return (++num);
}

int main(void)
{
    int numero = 5;
    numero = inc(numero);
    printf("%d", numero);
    return 0;
}