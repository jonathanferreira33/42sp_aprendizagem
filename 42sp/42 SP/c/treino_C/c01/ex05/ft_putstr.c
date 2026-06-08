
void ft_putstr(char *str);
void ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++;
	}

}

#include <unistd.h>

int main()
{
	char vet[] = "jonaThan";

	ft_putstr(vet);
	write(1, "\n", 1);
	ft_putstr(vet);
	return (0);
}