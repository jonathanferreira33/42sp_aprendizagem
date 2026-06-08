/*
A função strcat (string concatenate) em C é utilizada 
para unir duas strings, adicionando o conteúdo da 
string de origem ao final da string de destino. 
Ela encontra o caractere nulo final (\0) da string 
destino e começa a copiar a string origem a partir 
dali, substituindo o \0 original e garantindo que 
a nova string resultante seja nula e terminada.

Pontos importantes sobre a strcat:
Sintaxe: strcat(destino, origem);.

Funcionamento: A string de origem é anexada à string de destino,
permanecendo inalterada.

Biblioteca: Necessário incluir <string.h>.

Cuidados: A string de destino (destino) precisa ter espaço suficiente
para armazenar o próprio conteúdo e o da string de origem, 
caso contrário, ocorrerá estouro de buffer (buffer overflow).

Retorno: Retorna um ponteiro para a string de destino concatenada.
*/

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int		count_dest;
	int		count;
	char	*ptr;

	ptr = dest;
	count = 0;
	count_dest = 0;
	while(*dest)
	{
		dest++;
		count_dest++;
	}
	while(src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	count++;
	dest[count + count_dest] = '\0';
	dest = ptr;
	return (dest);
}

#include<stdio.h>
#include<string.h>
int	main()
{
	char dest[20] = "brasil";
	char *src = "Brasil";
	char dest_strcat[20] = "brasil";
	char *src_strcat = "Brasil";
	printf("Resultado strcat: %s\n", strcat(dest_strcat, src_strcat));
	printf("Resultado ft_strcat: %s\n", ft_strcat(dest, src));
	// esperado: "brasilBrasil\0"
	return (0);
}