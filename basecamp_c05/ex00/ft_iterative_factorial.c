#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int index;
	
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	index = nb;
	while ((index--) > 1)
		nb = nb * index;
	return (nb);
}

int main()
{

  printf("%d\n", ft_iterative_factorial(5));
  printf("%d\n", ft_iterative_factorial(10));
  printf("%d\n", ft_iterative_factorial(3));

  return 0;
}