char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (*src != '\0')
	{
		dest[count] = src[count];
		src++;
		dest++;
		count++;
	}
	count++;
	dest[count] = '\0';
	return (dest);
}

#include<stdio.h>
int	main(void)
{

	char text_d[9];
	char *text_a = "Jonathan";
	char *result;

	result = ft_strcpy(text_d, text_a);

	printf("Valor original: %s\n", text_a);
	printf("Valor result: %s\n", result);
	printf("Valor destino(text_d): %s\n", result);
	return (0);
}

/*

      char *
           strncpy(char *dest, const char *src, size_t n)
           {
               size_t i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return dest;
           }


*/