#include <stdio.h>

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
    return (nb);
  return (ft_find_next_prime(nb + 1));
}

int	ft_is_prime(int nb)
{
	int	index;
	int	divider_counter;

	index = 0;
	divider_counter = 0;
	while (++index <= nb)
	{
		if (nb % index == 0)
			divider_counter++;
	}
	if (divider_counter == 2)
		return (1);
	return (0);
}

int main()
{
  printf("%d\n", ft_find_next_prime(10));
  printf("%d\n", ft_find_next_prime(100));
  printf("%d\n", ft_find_next_prime(44));
  printf("%d\n", ft_find_next_prime(38));

  return (0);
}