#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int ft_strlen(char *str)
{
	int size;
	
	size = 0;
	while (*str++ != '\0')
		size++;	
	return (size);
}

int main()
{
  char string[] = "dasdadasffafda";

  printf("Copia: %d\n", ft_strlen(string));
  printf("Original: %ld\n", strlen(string));
}