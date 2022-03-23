#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	int buffer;
	unsigned int	i;

	src_len = ft_strlen(src);
	buffer = size - 1;

	if (buffer >=0)
	{
		i = 0;
		while (buffer && src[i])
		{
			dest[i] = src[i];
			buffer--;
			i++;
		}
		dest[i] = '\0';
	
	}

	return (src_len);
}

int main()
{
	char dest[3];
	char src[] = "Gustavo";

	printf("%d\n", strlcpy(dest, src, 3)); // É importante passar como valor do parametro o tamanho do vetor de destino
	printf("%s\n", dest);
}