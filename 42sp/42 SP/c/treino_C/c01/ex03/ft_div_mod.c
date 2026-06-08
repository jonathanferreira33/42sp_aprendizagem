
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

#include <stdio.h>

int main()
{
	int a;
	int b;
	int *divisao = &a;
	int *modulo = &b;

	a = 39;
	b = 10;

	ft_div_mod(a, b, divisao, modulo);
	printf("Resultado divisao a / b: %d\n", *divisao);
	printf("Resto divisao a / b: %d\n", *modulo);
	return (0);
}