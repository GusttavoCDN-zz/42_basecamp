#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int	i;
	char			end;

	end = '\0';
	i = 0;
	while (i < n && str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = end;
		i++;
	}
	
	dest[i] = end;
	return (dest);
}

int main()
{
  char dest[16];
  char str[] = "Gustavo";

  printf("%s\n", ft_strncpy(dest, str, sizeof(dest)));
}