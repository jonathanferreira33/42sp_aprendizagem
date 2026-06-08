void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	remnant;

	division = (*a / *b);
	remnant = (*a % *b);

	*a = division;
	*b = remnant;
}

#include <stdio.h>

int main()
{
	int a;
	int b;
	int *divisao = &a;
	int *modulo = &b;

	a = 50;
	b = 4;

	ft_ultimate_div_mod(divisao, modulo);
	printf("Resultado divisao a / b: %d\n", *divisao);
	printf("Resto divisao a / b: %d\n", *modulo);
	return (0);
}