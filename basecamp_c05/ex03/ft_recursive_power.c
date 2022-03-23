#include <stdio.h>

long long int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
    return (0);
  if (power == 0)
    return (1);
  return (nb * ft_recursive_power(nb, power - 1));
}

int main()
{
  printf("%ld\n", ft_recursive_power(10, 10));
  printf("%ld\n", ft_recursive_power(0, 0));
}