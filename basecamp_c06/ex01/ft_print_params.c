#include <unistd.h>

void	ft_print_param(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
	
	write(1, "\n", 1);
}


int main(int argc, char **argv)
{
	int	index;
	
	index = 1;
	while (index < argc)
	{
		ft_print_param(argv[index]);
		index++;
	}
}