#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	index;

	if (nb <= 0)
		return (0);
	index = 0;;;  // nb = 8
	while (index * index < nb && index <= 46341) //
		index++;
	if (index * index == nb)
		return (index);
	return (0);
}

int main()
{

      	printf("sqrt of %d\n", ft_sqrt(81));
        printf("sqrt of %d\n", ft_sqrt(9));
        printf("sqrt of %d\n", ft_sqrt(8));
        printf("sqrt of %d\n", ft_sqrt(245));

  return 0;
}