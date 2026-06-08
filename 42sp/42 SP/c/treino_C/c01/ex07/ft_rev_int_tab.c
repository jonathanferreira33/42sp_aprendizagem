void ft_rev_int_tab(int *tab, int size);
void ft_rev_int_tab(int *tab, int size)
{
	int position;
	int	temp;

	position = 0;

	while(position <= --size)
	{
		temp = tab[position];
		tab[position] = tab[size];
		tab[size] = temp;
		position++;
	}
}

#include<stdio.h>

int main()
{
	int vet[] = {1, 2, 3, 8, 4, 5, 6};
	
	ft_rev_int_tab(vet, 7);

	printf("Valor atual: %d\n", vet[0]);
	printf("Valor atual: %d\n", vet[1]);
	printf("Valor atual: %d\n", vet[2]);
	printf("Valor atual: %d\n", vet[3]);
	printf("Valor atual: %d\n", vet[4]);
	printf("Valor atual: %d\n", vet[5]);
	printf("Valor atual: %d\n", vet[6]);

	
	return 0;
}