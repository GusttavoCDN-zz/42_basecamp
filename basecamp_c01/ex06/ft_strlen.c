#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
		length++;
	
	return (length);
}

int	main()
{
	char	string[] = "Guilherme";

	int size = sizeof(string) / sizeof(string[0]);

	printf("%d\n", ft_strlen(string));
	return (0);
}