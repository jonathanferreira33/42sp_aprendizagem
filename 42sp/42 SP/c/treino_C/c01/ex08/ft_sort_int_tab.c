void    ft_sort_int_tab(int *tab, int size);
void    ft_sort_int_tab(int *tab, int size)
{
    int count;
    int temp;

    count = 0;
    while(count < (size -1))
    {
        if(tab[count] > tab[count + 1])
        {
            temp = tab[count];
            tab[count] = tab[count + 1];
            tab[count + 1] = temp;
            count = 0;
        }
        else
        {
            count++;
        }
    }
}

#include<stdio.h>

int main()
{
	int vet[] = {1, 112, 66, 6, 33, 8, 6};
	
	ft_sort_int_tab(vet, 7);

	printf("Valor atual: %d\n", vet[0]);
	printf("Valor atual: %d\n", vet[1]);
	printf("Valor atual: %d\n", vet[2]);
	printf("Valor atual: %d\n", vet[3]);
	printf("Valor atual: %d\n", vet[4]);
	printf("Valor atual: %d\n", vet[5]);
	printf("Valor atual: %d\n", vet[6]);

	
	return 0;
}