/*
A função strncat em C concatena (une) até um número
específico de caracteres (n) de uma string de origem
ao final de uma string de destino, garantindo que um
caractere nulo (\0) seja adicionado ao final. Ela é 
uma versão mais segura que a strcat, pois evita estouro
de buffer limitando a cópia. 

Detalhes Técnicos:
Sintaxe: char *strncat(char *destino, const char *origem, size_t n);
Funcionamento: A função adiciona os caracteres de 
origem ao final de destino, substituindo o \0 original
de destino e adicionando um novo \0 após o último
caractere copiado.

Limitação: Se o comprimento da origem for maior que n,
apenas n caracteres são copiados e um \0 é adicionado.

Se a origem for menor que n, a função copia apenas
até o caractere nulo da origem.
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		count_dest;
	int		count;
	int		char_final;
	char	*ptr;

	char_final = nb;
	ptr = dest;
	count = 0;
	count_dest = 0;
	while(*dest)
	{
		dest++;
		count_dest++;
	}
	while(src[count] != '\0' && count < char_final)
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
	printf("Resultado strncat: %s\n", strncat(dest_strcat, src_strcat, 2));
	printf("Resultado ft_strncat: %s\n", ft_strncat(dest, src, 2));
	// esperado: "brasilBr\0"
	return (0);
}