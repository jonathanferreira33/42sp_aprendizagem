/*
A função strstr em C localiza a primeira ocorrência
de uma sub-string (cadeia de caracteres) dentro de
outra string principal. Ela retorna um ponteiro para
o início da substring encontrada ou NULL se a
sequência não for encontrada. Ela é usada para busca
de texto, ignorando o terminador nulo final. 

Assinatura: char *strstr(const char *str1, const char*str2);.
Funcionamento: A função strstr() procura a primeira
ocorrência da string str2 (chave) dentro da string str1
(origem).

Retorno:
    Ponteiro: Se encontrar, retorna um ponteiro para o
    primeiro caractere da correspondência em str1.
    
    NULL: Se não encontrar a substring, retorna NULL.
    
Uso: É útil para verificar se uma palavra ou frase existe dentro de um texto maior.

*/

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		size_to_find;
	int 	encontradas;
	char	*ptr;
	char	*ptr_initial_to_find;

	i = 0;
	encontradas = 0;
	size_to_find = 0;
	*ptr_initial_to_find = *to_find;
	while(*ptr_initial_to_find)
	{
		ptr_initial_to_find++;
		size_to_find++;
	}
	while(*str)
	{
		if(str[i] == to_find[i])
		{
			encontradas++;
			*ptr = *str;
			while(str[i] == to_find[i])
			{
				encontradas++;
				i++;
				if(encontradas == size_to_find)
					return (ptr);
			}
			encontradas = 0;
		}
	}
	return '\0';
}

#include<string.h>
#include<stdio.h>
int main()
{
	char *str = "Brasil";
	char *to_find = "asil";

	printf("strstr: %p", strstr(str, to_find));
	printf("ft_strstr", ft_strstr);
	//para null
	//printf("strstr: %s", strstr(str, to_find));
}
