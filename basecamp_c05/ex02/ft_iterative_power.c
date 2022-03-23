#include <stdio.h>

int ft_iterative_power(int nb, int power);

int ft_iterative_power(int nb, int power)
{
  
  int index;
  
  if (power < 0)
    return (0);
  if (power == 0)
    return (1);
  
  index = nb;
  while (power-- > 1)
    nb = nb * index;
  return (nb);
}

int main()
{
 
  printf("%d\n", ft_iterative_power(2, 2));
  printf("%d\n", ft_iterative_power(3, 2));
  printf("%d\n", ft_iterative_power(4, 2));
  printf("%d\n", ft_iterative_power(6, 2));
}