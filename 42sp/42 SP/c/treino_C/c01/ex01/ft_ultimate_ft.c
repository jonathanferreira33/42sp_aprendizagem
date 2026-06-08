void    ft_ultimate_ft(int *********nbr);
void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

#include<unistd.h>

int main()
{
    int *nbr;
    int valor = 33;

    *nbr = &valor;
    ft_ultimate_ft(*********nbr);
    write(1, &nbr, 1);
    return 0;
}