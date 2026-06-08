/*
A função strcmp em C compara duas strings caractere a 
caractere, baseando-se na ordem ASCII, para determinar
se são iguais ou qual vem primeiro. Ela retorna zero 
se as strings forem idênticas, um valor negativo se a 
primeira string for menor, e um positivo se for maior.

Comparaçâo: Compara as strings caractere por caractere
até encontrar uma diferença ou alcançar o terminador nulo (\0).

Sintaxe: int strcmp(const char *s1, const char *s2);.
Valores de Retorno:
0: As strings são iguais.
< 0 (ex: -1): A primeira string é menor que a segunda
(aparece antes na ordem ASCII).
> 0 (ex: 1): A primeira string é maior que a segunda
(aparece depois na ordem ASCII). 

gcc [NOMEDOARQUIVO] -o [NOMESAIDA]
*/

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int char_s1;
	int char_s2;

	i = 0;
	while (*s1 && s1[i] == s2[i])
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
	char *a = "A";
	char *b = "a";
	printf("Resultado ft_strcmp: %d\n", ft_strcmp(a, b));
	printf("Resultado strcmp: %d", strcmp(a, b));
	return (0);
}