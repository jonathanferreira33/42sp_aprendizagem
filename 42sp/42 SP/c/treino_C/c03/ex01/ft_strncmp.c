/*
A função strncmp em C compara até um número 
específico () de caracteres de duas strings 
(string1 e string2). Ela é usada para verificar
igualdade ou ordem alfabética (lexicográfica)
de sub-strings, retornando 
 se forem iguais, um valor menor que 
 se str1 < str2, ou maior que 
 se str1 > str2.

 Sintaxe: int strncmp(const char *s1, const char *s2, size_t n);
Retorno 0: Os primeiros caracteres (ou até o '\0') das duas
strings são idênticos.
Retorno Negativo: O primeiro caractere diferente em s1 tem
um valor ASCII menor que em s2.
Retorno Positivo: O primeiro caractere diferente em s1 tem
um valor ASCII maior que em s2.
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int char_s1;
	int char_s2;
	int	max;

	i = 0;
	max = n;
	while (*s1 && s1[i] == s2[i] && i <= max)
	{
		i++;
		s1++;
	}
	char_s1 = s1[i];
	char_s2 = s2[i];

	return (char_s1 - char_s2);
}

#include<stdio.h>
#include<string.h>
int	main()
{
	char *a = "brasil";
	char *b = "Brasil";
	printf("Resultado ft_strcmp: %d\n", ft_strncmp(a, b, 3));
	printf("Resultado strcmp: %d", strncmp(a, b, 3));
	return (0);
}