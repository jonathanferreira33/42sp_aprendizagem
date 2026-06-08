int ft_strlen(char *str);
int ft_strlen(char *str)
{
	int count;

	count = 0;
	while(*str != '\0')
	{
		str++;
		count++;
	}

	return (count);
}

#include <unistd.h>

int main()
{
	char vet[] = "jonaThan";
	int quantos;

	

	quantos = ft_strlen(vet);
	write(1, &quantos, 2);
	

	return 0;
}