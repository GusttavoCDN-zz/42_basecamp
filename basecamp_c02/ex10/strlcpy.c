#include <stdio.h>
#include <unistd.h>
#include <string.h>


unsigned   int ft_strlcpy2(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    
    i = 0;
    while (i < size && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
  
    if (i == size)
    	dest[i - 1] = '\0';
    
		
    while (src[i] != '\0')
        i++;
    return (i);
}



int main()
{
  char dest[8];
	char src[] = "Gustavodasda";

	printf("%d\n", ft_strlcpy2(dest, src, sizeof(dest))); // É importante passar como valor do parametro o tamanho do vetor de destino
	printf("%s\n", dest);
}