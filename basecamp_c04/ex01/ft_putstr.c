#include <unistd.h>


void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str++ != '\0')
	{
		ft_putchar(*(str - 1));
	}
}

int main()
{
  char string[] = "Gustavo";

  ft_putstr(string);
}